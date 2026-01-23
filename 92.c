#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int cmp_char(const void *a, const void *b) {
    return (*(char*)a - *(char*)b); 
}

int main(){
    char s1[1000], s2[1000];
    scanf("%s", s1);
    scanf("%s", s2);
    
    // concatenate
    strcat(s1, s2);
    
    int len = strlen(s1);
    
    // loop through news 
    qsort(s1, len, sizeof(char), cmp_char);
    
    printf(s1);
    
    return 0;
}
