#include <stdio.h>

int main() {
    int ch;

    while ((ch = getchar()) != EOF && ch != '\n') {
        if (ch != ' ') {
            putchar(ch);
        }
    }

    return 0;
}

// https://open.kattis.com/problems/leynithjonusta?editresubmit=18931188
