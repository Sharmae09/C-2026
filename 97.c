#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    getchar(); // consume newline

    char input[10000];
    fgets(input, sizeof(input), stdin);

    // ABCDEF keyboard
    char abcdef[]  = "abcdefghijklmnopqrstuvwxyz";
    // QWERTY keyboard
    char qwerty[]  = "qwertyuiopasdfghjklzxcvbnm";

    for(int i = 0; i < n; i++) {
        char c = input[i];
        if(c >= 'a' && c <= 'z') {
            // find index in ABCDEF and replace with QWERTY
            int index = c - 'a';
            input[i] = qwerty[index];
        }
    }

    printf("%s", input);
    return 0;
}
