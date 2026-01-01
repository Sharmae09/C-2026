#include <stdio.h>
int main(){
    int lawn;
    double width, cost, length;
    double totalArea= 0.0;
    int i = 0;
    scanf("%lf", &cost);
    scanf("%d", &lawn);
    while(i < lawn){
        scanf("%lf %lf", &width, &length);
        totalArea += (width * length);
        i++;
    }
    double totalCost = (double) cost *totalArea;
    printf("%lf",totalCost );
    return 0;
    
    
}

// https://open.kattis.com/problems/grassseed?editresubmit=18903659
// I forgot &
//  I use the data type
