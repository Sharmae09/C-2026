#include <stdio.h>
#include <math.h>
int main(){
    int n, w, h;
    scanf("%d %d %d", &n, &w, &h);
    w = pow(w, 2);
    h = pow(h, 2);
    int hyp = sqrt(w+h);
    
    for(int i = 0; i < n; i++){
        int q;
        scanf("%d", &q);
        if(q <= hyp){
            printf("DA\n");
        } else{
            printf("NE\n");
        }
    }
    
    
    return 0;;
}

// https://open.kattis.com/problems/sibice?editresubmit=18906116
// I did not understood the problem at first
// turns out i only need to find the hypotenuse
