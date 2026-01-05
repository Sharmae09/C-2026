#include<stdio.h>

int main(){
    int x, y;
    scanf("%d", &x);
    
    for(int i = 0;  i < x; i++){
    scanf("%d", &y);
    if(y%2 != 0){
        printf("%d is odd\n", y);
    } else {
        printf("%d is even\n", y);
    }
    
    }
    return 0;
}

// https://open.kattis.com/problems/oddities?editresubmit=18914742
