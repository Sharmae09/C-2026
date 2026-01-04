#include <stdio.h>
#include <math.h>
int main(){
    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    int t = pow(b, 2) - (4*a*c);
    if( t > 0){
        printf("2");
    } else if (t == 0){
        printf("1");
    } else if (t < 0){
        printf("0");
    }
    return 0;
    
}

// https://open.kattis.com/problems/dfyrirdreki?editresubmit=18911700

// Printf require format string
// putting just an integer of just usin single quotes wont work
