#include <stdio.h>
int main(){
    int x, y, z;
    scanf("%d %d", &x, &y);
    int sum =0;
    for(int i =0; i < y;i++){
        scanf("%d", &z);
        sum += z;
    }
    double min = (double) (sum + (x -y)*-3)/x;
    double max = (double) (sum + (x -y)*3)/x;
    printf("%lf %lf", min, max);
    return 0;
}
// https://open.kattis.com/problems/ratingproblems?editresubmit=18940763
