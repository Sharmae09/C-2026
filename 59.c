#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int days[] = {
        31, 28, 31, 30, 31, 30,
        31, 31, 30, 31, 30, 31
    };
    printf("%d", days[n-1]);
    
    
    return 0;
}
// https://open.kattis.com/problems/dagatal?editresubmit=18921841
