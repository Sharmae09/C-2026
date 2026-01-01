#include <stdio.h>
int main(){
    int s, r;
    scanf("%d %d", &r, &s);
    int res = (2*s) - r;
    printf("%d", res);
    return 0;
}

// https://open.kattis.com/problems/r2?editresubmit=18903649
// I should be careful about the order of the input
