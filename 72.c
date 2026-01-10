#include <stdio.h>

int main(){
    int x, y, z;
    char str[100];
    scanf("%d", &x);
    scanf("%d", &y); 
    for(int i = 0; i < y; i++){
        scanf("%s %d", str, &z);
        if(x<= z){
            printf("%s opin\n", str);
        } else{
            printf("%s lokud\n", str);
        }
    }
    return 0;
}
// "\n
// https://open.kattis.com/problems/vedurheidar?editresubmit=18931105
