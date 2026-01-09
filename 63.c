#include <stdio.h>
int main(){
    int v;
    char s[100];
    scanf("%s ", s);
    
    scanf("%d ", &v);
    for(int i = 0; i < v; i++){
        printf("Hipp hipp hurra, %s!\n", s);
    }
    return 0;
}

// https://open.kattis.com/problems/hipphipphurra?editresubmit=18927441
// Order of input mistake
