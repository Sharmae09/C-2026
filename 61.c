#include <stdio.h>
int main(){
    int x, y, p, l = 0;
    scanf("%d %d", &x, &y);
    for (int i = 0; i < x; i++){
        scanf("%d", &p);
        l += p;
    }
    if(l <= y){
    printf("Jebb");
    } else {
    printf("Neibb");
    }
    return 0;
}
// https://open.kattis.com/problems/spritt?editresubmit=18925677
