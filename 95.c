#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);
    int points = (int)pow(2, n) + 1;
    points = points * points;
    printf("%d\n", points);
    return 0;
}
