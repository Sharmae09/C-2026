#include <stdio.h>
int main(){
    int x1, y1;
    int x2, y2;
    int x3, y3;
    int x4, y4;
    scanf("%d %d", &x1, &y1);
    scanf("%d %d", &x2, &y2);
    scanf("%d %d", &x3, &y3);
    
    x4 = x1;
    y4 = y1;
    
    if(x4 == x2){
         x4 = x3;
    } else  if(x4 == x3){
         x4 = x2;
    }
     if(y4 == y2){
         y4 = y3;
    } else  if(y4 == y3){
         y4 = y2;
    }
    
    printf("%d %d", x4, y4);
    return 0;
}

// mispelling printf
// https://open.kattis.com/problems/cetvrta?editresubmit=18927457

// optimized way

#include <stdio.h>

int main() {
    int x1, y1, x2, y2, x3, y3;

    scanf("%d %d", &x1, &y1);
    scanf("%d %d", &x2, &y2);
    scanf("%d %d", &x3, &y3);

    int x4 = x1 ^ x2 ^ x3;
    int y4 = y1 ^ y2 ^ y3;

    printf("%d %d", x4, y4);
    return 0;
}


// ^ xor returns the different integer
