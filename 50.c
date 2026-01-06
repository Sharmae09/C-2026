#include <stdio.h>


int main(){
    int n, y;
    scanf("%d",  &n);
    scanf("%d",  &y);
    
    int less = y;
    
    for(int i =0; i < n -1; i++){
        scanf("%d",  &y);
        if(y < less){
            less = y;
         }
    }
    printf("%d", less);
    return 0;
}

// https://open.kattis.com/problems/aldur?editresubmit=18917645
// I learned that you can advance get input ouside the loop but you have to subtract 1 or how many you advanced
