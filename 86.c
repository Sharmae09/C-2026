#include <stdio.h>
#include <string.h>

int main() {
    char s[10000];
    scanf("%s", s);

    int len = strlen(s);

    // Find the last '.'
    for (int i = len - 1; i >= 0; i--) {
        if (s[i] == '.') {
            printf("%s\n", s + i);  // print from the dot onward
            break;
        }
    }

    return 0;
}
// https://open.kattis.com/problems/nafnauki?editresubmit=18949887
// It will keep printing until the last .
// My strategy can work but its very unoptimized and complicated
