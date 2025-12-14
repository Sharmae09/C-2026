#include <stdio.h>
#include <string.h>

int main() {
    int count[10];
    char str[50];
    const char fbi[] = "FBI";
    int j = 0;
    
    for (int i = 0; i < 5; i++) {
        scanf("%49s", str);   
        if (strstr(str, fbi)) {
            count[j] = i;
            j++;
        }
    }

    if (j > 0){
        for(int h = 0; h < j; h++){
            printf("%d ", count[h] + 1);
        }
    } else{
        printf("HE GOT AWAY!");
    }
    return 0;
}
// Imade an in infinite loop for(int h = 0; h < j; j++)
// I did not consider the case sensitivity   const char fbi[] = "fbi";
// Sometimes I sstruggle to understand the question
// I made the wrong logic. I counted how many fbi not print the indexes of the fbi
// I learned about strstr() where you can check if a sucstring match somewhere in the  orig string
// I learned that you can just put it inside the if() and there is no need to put it in char *str
https://open.kattis.com/problems/avion?editresubmit=18857816
