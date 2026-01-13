#include <stdio.h>
int main(){
    int n, y;
    int sum =0, sum2 = 0;
    scanf("%d", &n);
    for(int i = 0; i < n ; i++){
        scanf("%d", &y);
        sum += y;
    }
    for(int i = 0; i < n-1 ; i++){
        scanf("%d", &y);
        sum2 += y;
    }
    printf("%d", sum - sum2);
    return 0;
    
}
// https://open.kattis.com/problems/equalshots?editresubmit=18948179
