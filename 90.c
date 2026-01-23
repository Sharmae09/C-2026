#include <stdio.h>
#include <string.h>

int main(){
    char str[1000];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    char *smile = strstr(str, ":)");
    char *sad = strstr(str, ":(");
    if(smile && sad){
        printf("double agent");
    } else if (smile){
        printf("alive");
    } else if (sad){
        printf("undead");
    } else {
        printf("machine");
    }
    return 0;
}/

// https://open.kattis.com/problems/undeadoralive?editresubmit=19009372
