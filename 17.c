#include <stdio.h>
int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    if(m < n){
        printf("%d %d", m, n);
    } else{
        printf("%d %d", n, m);
    }
    return  0;
}
// https://open.kattis.com/problems/sorttwonumbers?editresubmit=18871222

// I forgot semi colons
// I printed the pointers
// I sorted it in a decreasing instead increasinf
