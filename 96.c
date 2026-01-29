
#include <stdio.h>

int main(){
    int h, w, l, c;
    
    scanf("%d %d %d %d",  &h, &w, &l, &c);
    int vol = h*w*l ; 
    if(vol  == c){
        printf("COZY");
    }
    else if(vol  < c){
        printf("TOO TIGHT");
    }
    else if(vol  > c){
        printf("SO MUCH SPACE");
    }
    
    
    return 0;
}

// https://open.kattis.com/problems/catinabox?editresubmit=19054356
