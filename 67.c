#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int x, y;
    scanf("%d %d", &x, &y);
    
    int *z = malloc(x*sizeof(int));
    if(!z) return 1;
    
    for(int i = 0; i < x; i++){
        scanf("%d", &z[i]);
    }
    
    if(z[0]== y){
        printf("fyrst");
    } else if (z[1]== y){
        printf("naestfyrst");
    } else{
        for(int i = 2; i < x; i++){
            if(z[i] == y){
                printf("%d fyrst\n", i+1);
            }
        }
    }
    
     free(z); 
    
    return 0;
}

// https://open.kattis.com/problems/barcelona?editresubmit=18927499
// #include <stdlib.h>
//   int *arr = malloc(n * sizeof(int)); // safe for big n
//  free(arr)
