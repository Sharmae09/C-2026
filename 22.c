#include <stdio.h>
int main(){
    int n;
    int q;
    int sum = 0;
    scanf("%d", &n);
    int denominator = n;
    for(int i = 0; i < n; i++){
        scanf("%d", &q);
        if(q>=0){
            sum += q;
        } else{
            denominator -= 1;
        }
    }
    double res = (double) sum/denominator;
    printf("%lf", res);
    return 0;
}

//https://open.kattis.com/problems/batterup?editresubmit=18900140
// I learned that to get the double result of dividing int I need to put (double) before the formula
