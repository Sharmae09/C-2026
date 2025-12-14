#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int n2 = 100 - n;
    long double res = 100.0/n;
    long double res2 = 100.0/n2;
    printf("%Lf %Lf", res, res2);
    return 0;
}
// I think this is the first time I used long double
// I was reminded that I need to put .0 just an extra decimal when using double
// I can get the formula by lookin at the output
// https://open.kattis.com/problems/betting?editresubmit=18859241
