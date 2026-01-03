#include <stdio.h>
int main(){
    int n, m, p;
    scanf("%d %d", &n, &m);
    int sum1 = 0, sum2 = 0;
    for(int i = 0; i < n; i++){
        scanf("%d", &p);
        sum1 += p;
    }
    for(int i = 0; i < m; i++){
        scanf("%d", &p);
        sum2 += p;
    }
    if(sum1 > sum2){
        printf("Button 1");
    }
    else if(sum2 > sum1){
        printf("Button 2");
    } else if(sum2 == sum1){
        printf("Oh no");
    }
    return 0;
}

// https://open.kattis.com/problems/wakeupcall?editresubmit=18907309
// I forgot semi colonns
//  I was nt specific in my if else statements
