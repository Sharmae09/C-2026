#include <stdio.h>

int main(){
    
    int n;
    scanf("%d", &n);
    char str[20];
    
    snprintf(str, sizeof(str), "%d", n);
    
    int isFive = 1;
    
    for(int i =0; i < 3; i++){
        if(str[i] != '5'){
            isFive = 0;
        }
    }
    printf("%d", isFive);
    
    return 0;
}


// I relearned snprintf which is used to convert int to string
// it has for paramaeters (the string, sizeofthe string), "%d", the int)
// the string will be the new storage of the int
// https://open.kattis.com/problems/fyi?editresubmit=18845867
