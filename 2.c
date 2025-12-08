#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    char str[100];

    for (int i = 0; i < n; i++) {
        scanf("%s", str);
        if (i % 2 == 0) {      // print 0th, 2nd, 4th, ...
            printf("%s\n", str);
        }
    }

    return 0;
}


// I learned tht there is a massive difference between printf "%s\n" and  "%s"
  
