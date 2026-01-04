#include <stdio.h>
#include <string.h>
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    char say[100];
    for(int i = 0; i < a; i++){
        fgets(say, sizeof(say), stdin);
    }
    say[strcspn(say, "\n")] = '\0';

    printf("%d", b);
    
    return 0;
}

// I can only return 0, I cant use 6 7
// I forgot the coma between ints in the scanf
// I forgot to put string.h #include
//  I missed a lot of semi clolons
// I got confuse with the strcspn
// I now have to keep in mind that  I need to write the
// var name first then array then inside the array I have to put the strcspn
// .then inside the function I need to put the war name in the first param
// in seconfd para I need to put new line
// then outside the var array should equal to the eof '\0;
// Strcspn returns how many characters until the program encounter the second param character 
//    say[strcspn(say, "\n")] = '\0';
// say[10] = '\0
