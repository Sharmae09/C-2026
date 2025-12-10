#include <stdio.h>

int main(){
    int n; 
    scanf("%d", &n);
    int count = 0;
    for(int i = 1; i < n; i++){
        int trplets = (i * (i+1) * (i + 2));
        if( trplets < n){
            count++;
        } else{
             printf("%d\n", count);
                return 0;
        }
    }
}
// https://open.kattis.com/problems/treirad?editresubmit=18847518
