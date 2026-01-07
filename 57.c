#include <stdio.h>
#include <string.h>

int main(){
    char str[1000];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    printf("%s", str);
    return 0;
}
