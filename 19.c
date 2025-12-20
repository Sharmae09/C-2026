#include <stdio.h>
#include <string.h>
int main(){
    char str[500];
    char cpy[100];
    char cpy2[100];
    
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    
    
    int count[100] = {0};
    
    strcpy(cpy, str);
    strcpy(cpy2, str);
    
    char* wrd = strtok(cpy, " ");
    char* wrd2 = strtok(cpy, " ");
    int i = 0;
    while(wrd != NULL){
        // get each word
        *wrd = strtok(NULL, " ");
        while(wrd != NULL){
            // compare each word to the word in str
            if(strcmp(wrd, wrd2)){
                count[i] += 1;
            }
            *wrd2 = strtok(NULL, " ");
        }
        i++;
    }
    for(int j = 0; j < 100; j++){
       if(count[j] > 1){
           printf("no");
           return 0;
       }
    }
    printf("yes");
    return 0;
}

// Need to check if any of the ords have duplicate
// https://open.kattis.com/problems/nodup?editresubmit=18876463
