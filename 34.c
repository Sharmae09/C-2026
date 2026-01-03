#include <stdio.h>
#include <string.h>
int main(){
    int n; 
    scanf("%d", &n);
    char s[200];
    int nautakjot = 0;
    int kjuklingur = 0;
    
    for(int i = 0; i < n; i++){
        scanf("%s", s);
        if(strcmp(s, "kjuklingur") == 0){
            kjuklingur +=1;
        }
        else if(strcmp(s, "nautakjot") == 0){
            nautakjot +=1;
        }
    }
    if(nautakjot > 0 && kjuklingur == 0){
        printf("nautakjot");
    } else if(kjuklingur > 0 && nautakjot == 0){
        printf("kjuklingur");
    } else if(kjuklingur > 0 && nautakjot > 0){
        printf("blandad best");
    }
    return 0;
}

// https://open.kattis.com/problems/blandadbest?editresubmit=18907369
// I remembered the difference between strstr and strcmp
// strstr finds if the substring exist on the strin
// strcmp checks if the strings are equal
