#include <stdio.h>
#include <string.h>
int main(){
    char str[50];
    scanf("%s", str);
    int len = strlen(str);
    char ext[20];
    char p = '.';
    int j= 0;
    for(int i = len -1; i >= 0; i--){
     if(str[i] == p) {
         for(int h = i; h < len; h++){
             ext[j] = str[h];
             j++;
         }
         break;
     }
    }
    ext[j] = '\0';
       printf("%s", ext);
    
        return 0;
    
}
// https://open.kattis.com/problems/nafnauki?editresubmit=18874453
// I need to put '\0' after I make a string
// I cant compare using "." it will retiurn to the pointer
// instead use p = '.' if I need to compare
