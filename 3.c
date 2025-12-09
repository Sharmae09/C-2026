#include <stdio.h>
#include <stdlib.h>

int main() {
    long long x, y;

    while (scanf("%lld %lld", &x, &y) == 2) {
        printf("%lld\n", llabs(x - y));
    }

    return 0;
}

// The program is EOF which means to keep reading until inpur ends
// unlike those other prblems I encounter where the it specifies the number of lines or inluts
// https://open.kattis.com/problems/different?editresubmit=18842463
