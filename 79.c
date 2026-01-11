// https://open.kattis.com/problems/hakkari?editresubmit=18935208

#include <stdio.h>

int main(){
    int x, y, k=0;
    scanf("%d %d", &x, &y);
    char s[10000];
    int a[10000][10000];
    for(int i =0; i < x; i++){
        scanf("%s", s);
        for(int j=0; j < y; j++){
           if( s[j] == '*'){
               a[k][0] = i;
               a[k][1] = j;
               k++;
           }
        }
    }
    printf("%d\n", k);
    for(int i =0; i < k; i++){
           printf("%d %d\n", a[i][0] +1, a[i][1] +1 );
    }
    return 0;
}
// I used k in printing instead of i
