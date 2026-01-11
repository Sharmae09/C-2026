#include <stdio.h>

int main(){
    int n, y;
    char s[100];
    scanf("%d", &n);
    int sum = 0;
    for(int i =0 ; i < n; i++){
        scanf("%s", s);
        scanf("%d", &y);
        sum += y;
    }
    if(sum == 0){
        printf("Lagom");
    } else if (sum > 0){
        printf("Usch, vinst");
    } else{
        printf("Nekad");
    }
    return 0;
}

// https://open.kattis.com/problems/pobudget?editresubmit=18935057
