// https://open.kattis.com/problems/isithalloween?editresubmit=18900073

#include <stdio.h>
#include <string.h>
int main(){
    
    char month[10];
    int day;
    
    scanf("%s %d", month, &day);
    
    if((strcmp(month, "OCT") == 0 && day == 31) ||
    (strcmp(month, "DEC") == 0 && day == 25)
    ){
        printf("yup");
    } else{
        printf("nope");
    }
    return 0;
}

// I forgot that I cant use == to compare strings
// I need to use the string.h function strcmp
// I was reminded that I dont need to add ampersand when using scanf for string

