// https://open.kattis.com/problems/modulo?editresubmit=18876525
#include <stdio.h>
int main(){
    int n;
    int count[10] = {-10};
    int j = 0;
    for(int i = 0; i < 10; i++){
        scanf("%d", &n);
        // get the modulo
        int modulo =  n%42;
        int found = 0;
        for(int k = 0; k < 10; k++){
            // if the modulo is already in the count 
            if(modulo == count[k]){
                // then signal that num is found
                found = 1;
            }
        }
        // if not found add it to the count
        if(found == 0){
            count[j] = modulo;
        }
    }
    
    int numOfMod= 0;
    int r = 0;
    while (numOfMod < 10){
        scanf("%d", count[numOfMod]);
        if (count[numOfMod] == -1)
            break;
        numOfMod++;
    }
    printf("%d", numOfMod);
    return 0;
}

// corrected version

#include <stdio.h>
int main(){
    int n;
    int count[10];
    
    // Initialize all elements to -1 (to mark as empty)
    for(int i = 0; i < 10; i++){
        count[i] = -1;
    }
    
    int j = 0;  // Tracks position to add new modulo
    
    for(int i = 0; i < 10; i++){
        scanf("%d", &n);
        
        // Get the modulo
        int modulo = n % 42;
        
        // Check if modulo already exists
        int found = 0;
        for(int k = 0; k < j; k++){  // Only check up to j (existing elements)
            if(modulo == count[k]){
                found = 1;
                break;  // Exit loop once found
            }
        }
        
        // If not found, add it to count
        if(found == 0){
            count[j] = modulo;
            j++;  // THIS WAS MISSING - increment position
        }
    }
    
    // j now contains the number of distinct modulos
    printf("%d\n", j);
    
    return 0;
}
