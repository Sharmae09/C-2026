#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    scanf("%s", str);
    if(strstr(str, "ss")
     ){
        printf("hiss");
    } else {
        printf("no hiss");
    }
    return 0;
}

// https://open.kattis.com/problems/hissingmicrophone?editresubmit=18914676
// I did not read the instruction properly
