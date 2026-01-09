#include <stdio.h>
int main(){
    int v;
    char s[100];
    scanf("%d ", &v);
    for(int i = 0; i < v; i++){
        scanf("%s ", s);
        printf("Takk %s\n", s);
    }
    return 0;
}

//  https://open.kattis.com/problems/takkfyrirmig?editresubmit=18927448 
// I put an ! in Takk %s\n
