// https://open.kattis.com/problems/umferd?editresubmit=18935119
#include <stdio.h>

int main(){
    int x, y;
    scanf("%d", &x);
    scanf("%d", &y);
    int car =0, empty = 0;
    char s[10000];
    for(int i = 0; i < y; i++){
        scanf("%s", s);
        int j =0;
        while(s[j] != '\0'){
            if(s[j] == '.'){
                empty++;
            } else if(s[j] == '#'){
                car++;
            }
            j++;
        }
    }
    printf("%lf\n", (double) empty / (empty + car));

    return 0;
}
// I did not get the formula on my own
// I needed to raise te the s size
