#include <stdio.h>
int main(){
    int a, b, c, d, e, f;
    scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
    if(a < 1){
        printf("%d ", (|a-1|));
    } else if(a > 1){
        printf("%d ", -|a-1|);
    } else if(a == 1){
        printf("0 ");
    }
    if(b < 1){
        printf("%d ", |a-1|);
    } else if(b > 1){
        printf("%d ", -|a-1|);
    } else if(b == 1){
        printf("0 ");
    }
    if(c < 2){
        printf("%d ", |a-2|);
    } else if(c > 2){
        printf("%d ", -|a-2|);
    } else if(c == 2){
        printf("0 ");
    }
    if(d < 2){
        printf("%d ", |a-2|);
    } else if(d > 2){
        printf("%d ", -|a-2|);
    } else if(d == 2){
        printf("0 ");
    }
    if(e < 2){
        printf("%d ", |a-2|);
    } else if(e > 2){
        printf("%d ", -|a-2|);
    } else if(e == 2){
        printf("0 ");
    } 
    if(f < 8){
        printf("%d ", |a-8|);
    } else if(f > 8){
        printf("%d ", -|a-8|);
    } else if(f == 8){
        printf("0 ");
    }
    return 0;
}


// My solution is so long and has errors, it could be long and right if I use the abs() function from stdlib
// unclean and unoptimized

#include <stdio.h>

int main() {
    int a, b, c, d, e, f;
    scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);

    printf("%d %d %d %d %d %d\n",
           1 - a,
           1 - b,
           2 - c,
           2 - d,
           2 - e,
           8 - f);

    return 0;
}

// This is chatgpt answer she just rearranged the formmula. and directly put it in the printf
