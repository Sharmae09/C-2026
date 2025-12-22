#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    
    char str[20];
    scanf("%19s", str);
    int x, y, z;
    char xstr[10], ystr[10], zstr[10];
    int j = 0, i = 0;
    while(str[i] != 'd'){
        xstr[j] = str[i];
        j++;
        i++;
    }
    xstr[j] = '\0';
    j = 0;
    while(str[i] != '+'){
        ystr[j]  = str[i];
        j++;
        i++;
    }
    ystr[j] = '\0';
    j = 0;
    while(str[i] != '\0'){
        zstr[j] = str[i];
        j++;
    }
    zstr[j] = '\0';

    x = atoi(xstr);
    y = atoi(ystr);
    z = atoi(zstr);
    
    int min = (1 * (x-1)) + y;
    int max = (x*y)+ z;
    printf("%d", (min + max)/2);
    printf("%d", min);
    printf("%d", max);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main() {

    char str[20];
    scanf("%19s", str);

    char xstr[10], ystr[10], zstr[10];
    int x, y, z;
    int i = 0, j = 0;

    // get x (before 'd')
    while (str[i] != 'd') {
        xstr[j++] = str[i++];
    }
    xstr[j] = '\0';

    i++; // skip 'd'
    j = 0;

    // get y (before '+')
    while (str[i] != '+') {
        ystr[j++] = str[i++];
    }
    ystr[j] = '\0';

    i++; // skip '+'
    j = 0;

    // get z (rest)
    while (str[i] != '\0') {
        zstr[j++] = str[i++];
    }
    zstr[j] = '\0';

    x = atoi(xstr);
    y = atoi(ystr);
    z = atoi(zstr);

    int min = (1 * x) + z;
    int max = (x * y) + z;

    printf("%.1f", (float)(min + max) / 2);


    return 0;
}
// https://open.kattis.com/problems/rollingthedice?editresubmit=18881855
