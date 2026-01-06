#include <stdio.h>
#include <string.h> 
int main(){
    
    char s[1000];
    scanf("%s", s);
    int len = strlen(s);
    for (int i = len-1; i >= 0; i--){
        printf("%c", s[i]);
    }
    return 0;
}
// I forgot how to use strlen()
// I also made the mistake in using "%s" instead of %c
// https://open.kattis.com/problems/vidsnuningur?editresubmit=18917611
