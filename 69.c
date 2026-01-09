#include <stdio.h>
int main(){
    int n, y,  sum = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &y);
        sum += y;
    }
    printf("%d", sum);
    return 0;
}

// https://open.kattis.com/problems/aterriblefortress?editresubmit=18927554
