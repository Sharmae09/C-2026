#include <stdio.h>
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    if(a > b){
        printf("MAGA!");
    } else if ( a< b){
        printf("FAKE NEWS!");
    } else{
        printf("WORLD WAR 3!");
    }
}
