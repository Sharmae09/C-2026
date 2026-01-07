#include <stdio.h>
int main(){
    int x, y, z, w;
    scanf("%d %d", &x, &y);
    scanf("%d %d", &z, &w);
    
    if (x == z || y==w ){
        printf("1");
    } else {
        printf("2");
    }
    return 0;
}

// https://open.kattis.com/problems/skak?editresubmit=18921828
