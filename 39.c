// https://open.kattis.com/problems/hissingmicrophone?editresubmit=18914676

#include <stdio.h>

int main(){
    int n = 0;
    double sum = 0.0;
    double x, y;
    
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%lf %lf", &x, &y);
        sum  += x*y;
    }
    printf("%lf", sum);
    return 0;
}
