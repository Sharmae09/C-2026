#include <stdio.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);

    char grid[r][c+1]; // +1 for null terminator
    for(int i = 0; i < r; i++) { 
        scanf("%s", grid[i]); // input the string
    }

    for(int j = 0; j < c; j++) { // check the char 
        for(int i = 0; i < r; i++) {
            if(grid[i][j] != '.') {
                printf("%c", grid[i][j]);
                break; // move to next column
            }
        }
    }
    printf("\n");

    return 0;
}

// https://open.kattis.com/problems/snakeystring?editresubmit=19022236
