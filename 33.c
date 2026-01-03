#include <stdio.h>
#include <string.h>

int main() {
    char s[250];

    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';  // remove newline

    int j = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        if (i == 0 || s[i] != s[i - 1]) {
            s[j++] = s[i];
        }
    }

    s[j] = '\0';
    printf("%s\n", s);

    return 0;
}

#include <stdio.h>

int main(void) {
    char prev = 0;
    char c;

  // get char => read one character from the input
  // putchar => print one char
  // EOF end of input
  // While I can read a char that is not an eof and not new line then keep reading
  // get char read from the input file given by kattis
    while ((c = getchar()) != EOF && c != '\n') {
        if (c != prev) {
            putchar(c);
            prev = c;
        }
    }
// put char prints each char individually
    putchar('\n');
    return 0;
}


// https://open.kattis.com/problems/biladlyklabord?editresubmit=18907331
// my solution worked ubut failedoon the secret tests
// 
