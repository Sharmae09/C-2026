#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);

    // Special case: x == 0
    if (x == 0) {
        printf("++\n++\n");
        return 0;
    }

    printf("+");
    for (int i = 0; i < x; i++) {
        printf("-");
    }
    printf("+\n");

    for (int i = 0; i < x; i++) {
        printf("|");
        for (int j = 0; j < x; j++) {
            printf(" ");
        }
        printf("|\n");
    }

    printf("+");
    for (int i = 0; i < x; i++) {
        printf("-");
    }
    printf("+\n");

    return 0;
}

// https://open.kattis.com/problems/asciikassi?editresubmit=19063307
