#include <stdio.h>
#include <string.h>

int main() {
    char str[1001];
    scanf("%s", str);

    if (strstr(str, "COV") != NULL) {
        printf("Veikur!");
    } else {
        printf("Ekki veikur!");
    }

    return 0;
}

// https://open.kattis.com/problems/hradgreining?editresubmit=18914800

// my mistake was I made the str so small 250 when it shouldve been 1000
