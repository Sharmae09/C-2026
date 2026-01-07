#include <stdio.h>
#include <string.h>
int main(){
    int n, y, max =0;
    char name[100], maxName[100];
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%s %d", name, &y);
        if(max < y){
            max = y;
            strcpy(maxName, name);
        }
    }
    printf("%s", maxName);
    return 0;
}
// https://open.kattis.com/problems/bestagjofin?editresubmit=18921884
// i made mistake in the order of inputs
// i compared max to n instead of y
// i did not use strcpy
