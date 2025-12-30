// https://open.kattis.com/problems/autori?editresubmit=18900173
#include <stdio.h>
int main(){
    char str[100];
    char wrd[100];
    int i = 0, j = 1;
    scanf("%s", str);
    wrd[0] = str[0];
    while(str[i] != '\0'){
        if(str[i] == '-'){
            wrd[j] = str[i+1];
            j++;
        }
        i++;
    }
    wrd[j] = '\0';
    printf("%s", wrd);
    return 0;
}
