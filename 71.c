#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main(){
    char s[100];
    scanf("%s", s);
    int i = 0, sum = 0;
    while (s[i]!= '\0'){
        if(isalpha(s[i]) != 0){
            sum+=1;
        }
        i++;
    }
    printf("%d", sum);
    return 0;
}
// https://open.kattis.com/problems/fjoldibokstafa?editresubmit=18931133
// isalpha is stdlib
