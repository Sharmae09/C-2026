#include <stdio.h>

int main(){
    int sum;
    int maxSum = 0;
    int maxPos = 0;
    int a, b, c, d;
  
    for(int i = 0; i < 5; i++){
        scanf("%d %d %d %d", &a, &b, &c, &d);
        sum = a+ b+ c+ d;
        if(maxSum < sum){
            maxSum = sum;
            maxPos = i + 1;
        }
    }
  
    printf("%d %d", maxPos, maxSum);
 
    return 0;
}

// https://open.kattis.com/problems/pet?editresubmit=18866454
// I couldve applied what I learned about arrays full of zero but I flet like this is the most optimized way of ansering
