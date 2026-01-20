https://open.kattis.com/problems/shandy?editresubmit=18988357
#include <stdio.h>
int main(){
    
    int x, y;
    scanf("%d", &x);
    scanf("%d", &y);
    if(x>=y){
        printf("%d", y*2);
    }
    if(y>x){
        printf("%d", x*2);
    }
    return 0;
    
    
}
