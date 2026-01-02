#include <stdio.h>
int main(){
    char name[260], name2[260];
    scanf("%s", name);
    int i = 0, j=0, k = 0;
    name2[0] = name[0];
    char c = name[0];
    while(name[i] != '\0'){
        if(name[i] != name2[j]){
            j++;
            name2[j] = name[i];
        } else {
            c = name[i];
        }
        i++;
    }
    j++;
    name2[j] = '\0';
    printf("%s", name2);
    return 0;
}

// https://open.kattis.com/problems/apaxiaaans?editresubmit=18906087
// I forgot to increment i inside the while loop which resulted in an infinite loop 
