#include <stdio.h>

int main(){
    int n, m;
    scanf("%d %d", &n, &m);
     int freq[7] = {0};
    
    for(int i=0; i < n; i++){
        int x;
        scanf("%d", &x);
        freq[x]++;
    }
    // Check how many are in same die
    // get the biggest
    int max_count = 0;
    for (int v = 1; v <= 6; v++) {
        if (freq[v] > max_count)
            max_count = freq[v];
    }
    // if n - the biggest count 
    // is <= m then ja else Na
    
    if (max_count + m >= n)
        printf("Ja\n");
    else
        printf("Nej\n");

    return 0;
}

// https://open.kattis.com/problems/superyatzy?editresubmit=18863526

// it freq[7]={0}
// it means that  you initialize an int array of length 7 and all the elements are zero
// freq[7] = {0, 0, 0, 0, 0, 0, 0, 0}

 // for(int i=0; i < n; i++){
 //        int x;
 //        scanf("%d", &x);
 //        freq[x]++;
 // }

// once you get an input from the user freq[7] = {0, 1, 0, 0, 0, 0, 0, 0}
// you increment the count 
// for example you get 1 therefore 
// https://open.kattis.com/problems/superyatzy?editresubmit=18863526
