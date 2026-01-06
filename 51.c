#include <stdio.h>
int main(){
    int x, y, z;
    scanf("%d ", &x);
    scanf("%d ", &y);
    scanf("%d ", &z);
          
   if(x < y && x < z){
       printf("Monnei");
   } else   if(y < x && y < z){
       printf("Fjee");
   } else   if(z < x && z < y){
       printf("Dolladollabilljoll");
   }
    return 0;
}

// https://open.kattis.com/problems/millifaersla?editresubmit=18917631

// I made a mistake in my logic. I was meaning to use && but instead used ||
