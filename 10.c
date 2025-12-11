#include <stdio.h>

int main() {
    int n, m, q;
    scanf("%d %d %d", &n, &m, &q);

    char characters[n][m + 1];   // store each character row
    int idx;
    char ans;

    // read characters
    for(int i = 0; i < n; i++){
        scanf("%s", characters[i]);
    }

    int qIndex[q];
    char qAns[q];

    // read queries
    for(int i = 0; i < q; i++){
        scanf("%d %c", &qIndex[i], &qAns[i]);
        qIndex[i]--; // convert to 0-based index
    }

    // --- matching logic ---
    int count = 0;
    int lastMatch = -1;

    for(int i = 0; i < n; i++){
        int ok = 1;
        for(int j = 0; j < q; j++){
            if(characters[i][qIndex[j]] != qAns[j]) {
                ok = 0;
                break;
            }
        }
        if(ok){
            count++;
            lastMatch = i + 1; // store 1-based index
        }
    }

    if(count == 1){
        printf("unique\n%d\n", lastMatch);
    } else {
        printf("ambiguous\n%d\n", count);
    }

    return 0;
}
