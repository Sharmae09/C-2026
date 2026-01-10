#include <stdio.h>

int main(){
    int x, y; 
    scanf("%d %d", &x, &y);
    int t = (y / x + y % x);
    printf("%d", t);
    return 0;
}
// https://open.kattis.com/problems/memoriesofpassportcontrol?editresubmit=18931152
// My problem is the formula
