#include <stdio.h>
#include <string.h>
int main() {
    int x;
    scanf("%d", &x);
    char c;
    scanf(" %c", &c);   // Added a space before %c to skip whitespace
    char s[10000];
    scanf("%s", s);
    if (strchr(s, c) != NULL) {  // Fixed: if found (not NULL)
        printf("Unnar fann hana!");
    } else {  // Fixed: if not found (NULL)
        printf("Unnar fann hana ekki!");
    }
    return 0;
}

// https://open.kattis.com/problems/heysata?editresubmit=18935168
// my wrong version
#include <stdio.h> 
#include <string.h> 
int main() { 
  int x; scanf("%d", &x); 
  char c; scanf("%c", &c); 
  char s[1000]; scanf("%s", s); 
  if (strchr(s, c)) { 
      printf("Unnar fann hana ekki!"); 
  } else { 
    printf("Unnar fann hana!"); 
  } 
    return 0; 
}
