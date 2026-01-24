#include <stdio.h>
// It's like converting the n to binary then we counted how many ones are there
int main() {
    int n;
    scanf("%d", &n);

    int count = 0;
    while (n > 0) {
        // '&' is the bitwise AND operator.
        // (n & 1) checks the least significant bit of n.
        // If it is 1, n is odd and we add 1 to count.
        // If it is 0, n is even and we add 0.
        count += n & 1;

        // Right shift by 1 bit.
        // This removes the last bit of n and is equivalent to n = n / 2.
        n >>= 1;
    }

    // 'count' is the number of 1s in the binary representation of n,
    // which is the minimum number of squirrels needed.
    printf("%d\n", count);
    return 0;
}
// https://open.kattis.com/problems/goingnuts?editresubmit=19017112
