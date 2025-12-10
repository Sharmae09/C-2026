#include <stdio.h>

int main(){
    int n, k, q, c;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d %d", &k, &q);
        c=0;
        for(int j = 1; j <= q; j++ ){
            c = c+j+1;
        }
        printf("%d %d\n", k, c);
    }
    return 0;
}

// I had problems with the symbols and semicolons
// My initial formula was also wrong
