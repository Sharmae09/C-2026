#include <stdio.h>

int main() {
    int n, w;
    scanf("%d", &n);   
    scanf("%d", &w);   
    int count = (n * 5280)  / w;

    printf("%d\n", count);
    return 0;
}
// https://open.kattis.com/problems/mclimbroad?editresubmit=19063235
