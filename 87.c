#include <stdio.h>

int main() {
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);

    int thickness = 4;

    int a1 = z * y;
    int a2 = (x - z) * y;
    int a3 = z * (x - y);
    int a4 = (x - z) * (x - y);

    int max_area = a1;
    if (a2 > max_area) max_area = a2;
    if (a3 > max_area) max_area = a3;
    if (a4 > max_area) max_area = a4;

    int volume = max_area * thickness;

    printf("%d\n", volume);

    return 0;
}
// https://open.kattis.com/submissions/18977725
