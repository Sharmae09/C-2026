#include  <stdio.h>
#include <stdlib.h>
int main(){
    
    int n, x;
    scanf("%d %d", &n, &x);
    char sn[5];
    char sx[5];
    // convert to str
    snprintf(sn, sizeof(sn), "%d" ,n);
    snprintf(sx, sizeof(sx), "%d" ,x);
    // reverse
    char pn[5];
    char px[5];
    for(int i = 2; i >= 0; i--){
        pn[2-i] = sn[i];
        px[2-i] = sx[i];
    }
    // convert to int
    n = atoi(pn);
    x = atoi(px);
    // compare
    if(n > x){
        printf("%d", n);
    } else{
        printf("%d", x);
    }
    return 0;
    
}

// https://open.kattis.com/problems/filip?editresubmit=18856343
