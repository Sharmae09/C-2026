#include <stdio.h>
int main(){
    int x, y, z;
    scanf("%d %d", &x, &y);
    for(int i = 0; i < x; i++){
        scanf("%d", &z);
        if(z <= y){
            y -= z;
            printf("1");
        } else if (z > y){
            printf("0");
        }
    }
    return 0;
}
// I can scanf _ _ _ _ just normally 
// I get confuse abour the variable
// https://open.kattis.com/problems/atmmaintenance?editresubmit=18949848
