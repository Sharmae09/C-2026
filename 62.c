#include <stdio.h>
int main(){
    int v, a, t;
    scanf("%d %d %d", &v, &a, &t);
    printf("%lf", (double) v*t + 0.5*a*t*t );
    return 0;
}

// https://open.kattis.com/problems/bladra2?editresubmit=18927431
