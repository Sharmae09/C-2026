#include <stdio.h>
int main(){
    int x, y[1000], z;
    int sum = 0;
    scanf("%d", &x);
    if(x%2 != 0){
        printf("still running");
        return 0;
    }
    for(int i = 0; i < x; i++){
        scanf("%d", &y[i]);
    }
    
    // Sum all running intervals
    for (int i = 0; i < x; i += 2) {
        sum += y[i + 1] - y[i];
    }

    printf("%d", sum);
    return 0;
}
// I can actually directly scanf into an array. 
// Unlike what I did usually scanf var the arr
// https://open.kattis.com/problems/stopwatch?editresubmit=18949821
