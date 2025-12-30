#include <stdio.h>
int main(){
    double pi = 3.14159;
    double d, w, n;
    scanf("%lf", &d);
    scanf("%lf", &w);
    scanf("%lf", &n);
    
    double p = 2.0 * pi * (d/2.0);
    double k = w * n;
    if(p >= k){
        printf("YES");
    } else {
        printf("NO");
    }
    
    return 0;
}

https://open.kattis.com/problems/kingarthur?editresubmit=18900108
