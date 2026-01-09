#include <stdio.h> 
#include <stdlib.h> 

int main(){
    int n, q;
    scanf("%d", &n);
    int *z = malloc( n* sizeof(int));
    if(!z) return 1;
    for(int i =0; i < n; i++){
        scanf("%d", &q);
        z[i] = q;
    }
    for(int i =n-1; i >= 0; i--){
        printf("%d\n", z[i]);
    }
    free(z);
    return 0;
}

// https://open.kattis.com/problems/ofugsnuid?editresubmit=18927542
// used the malloc style
