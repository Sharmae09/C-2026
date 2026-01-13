#include <stdio.h>
#include <string.h>
int main(){
    int n;
    int max = 10;
    int min = 0;
    char s[100];
    scanf("%d\n", &n);
    int v = 7;
    for(int i = 0; i < n;i++){
        fgets( s, sizeof(s), stdin);
        s[strcspn(s, "\n")] = '\0';
        if(strstr(s, "Skru op!") != NULL && v < max){
            v++;
        } else if(strstr(s, "Skru ned!") != NULL && v > min){
            v--;
        }
    }
    printf("%d", v);
    return 0;
}

// I mas wrong because I did not put \n on my scanf.
// This happens if Im going to use fgets after scanf. the fgets absorns the \n which leads to wrog input,
// I should remember to feed scnaf if im going to use fgets later on
// strstr is a match if !NULL
