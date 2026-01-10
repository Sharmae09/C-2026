#include <stdio.h>

int main(){
    char s[100];
    scanf("%s", s);
    int i = 0, b = 0,  k = 0;
    while (s[i]!= '\0'){
        if(s[i] == 'b'){
            b+=1;
        }
        if(s[i] == 'k'){
            k+=1;
        }
        i++;
    }
    // if all b no k
    if(b > 0 && k == 0){
        printf("boba");
    }
    // if all k no b
    else if(k > 0 && b == 0){
        printf("kiki");
    }
    // if all equal num of b and k
    else if(b > 0 && k == b){
        printf("boki");
    }
    // if no b or k
    else if(b == 0 && k == 0){
        printf("none");
    }
    
    return 0;
}

// correct
// https://open.kattis.com/problems/kikiboba?editresubmit=18931193
// I have logic error in imy if else

#include <stdio.h>

int main() {
    char s[1001];  // large enough to hold the word
    scanf("%1000s", s);  // read the word

    int b = 0, k = 0;

    // count b's and k's
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == 'b') b++;
        else if (s[i] == 'k') k++;
    }

    if (b == 0 && k == 0) {
        printf("none");
    }
    else if (b > k) {
        printf("boba");
    }
    else if (k > b) {
        printf("kiki");
    }
    else {  // b == k and both > 0
        printf("boki");
    }

    return 0;
}

// not working complete
