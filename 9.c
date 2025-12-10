#include <stdio.h>

int main(){
    int x, y, z, q;
    scanf("%d %d %d", &x, &y, &z);
    q = (x * 0.25) + (y *0.25) + (z*0.5);
    if(q >= 90){
        printf("A");
    }
    else if(q >= 80){
        printf("B");
    }
    else if(q >= 70){
        printf("C");
    }
    else if(q >= 60){
        printf("D");
    } else{
        printf("F");
    }
    return 0;
}

// I did not chatgpt
// I forgot the & again 
// I put extra else by mistake
