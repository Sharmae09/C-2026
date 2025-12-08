#include <stdio.h> 
#include <string.h>
int main(){ 
    char str[100000]; 
    scanf("%s", str); 
    int len = strlen(str); 
    printf("%d", len); 
    return 0; 
}

// I learned that in the scanf you dot need to put & sign in te prefix of the variable name 
// Arrays already act like pointers, so you simply wr
// You need to put size on the empty array
// if you are going to use strlen you need to #include <stdio.h>
