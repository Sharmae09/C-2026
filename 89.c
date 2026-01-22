#include <stdio.h> 
#include <string.h> 
int main(){ 
    char str[1000]; 
    fgets(str, sizeof(str), stdin); 
    str[strcspn(str,"\n" )] = '\0'; 
    char *result = strstr(str, "tree"); 
    if(result){ 
        int index =  result - str;
        printf("%d", index);
    } 
    else{ 
        printf("no trees here"); 
        
    } 
    return 0; 

}

// https://open.kattis.com/problems/gettingwood?editresubmit=19003189
