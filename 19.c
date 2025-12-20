#include <stdio.h>
#include <string.h>

int main(){
    // stores the sentence
    char str[500];
    // 2d array - to store 100 words
    char words[100][100];
    int count[100] = {0};
    // Track how many unique words 
    int unique = 0;
    
    // get sentece input
    fgets(str, sizeof(str), stdin);
    
    // Remove newline from fgets
    str[strcspn(str, "\n")] = '\0';
    
    // get first word; split by space
    char *word = strtok(str, " ");
    
    // loop as long there is a word
    while(word != NULL){
        // Check if word already exists
        int found = 0;
        for(int i = 0; i < unique; i++){
            // compare the word to each of the words in the str
            if(strcmp(words[i], word) == 0){
                // compare current word
                count[i]++;
                // mark found
                found = 1;
                break;
            }
        }
        
        // If not found, add the current word 
        //to the array of unique word
        if(!found){
            strcpy(words[unique], word);
            count[unique] = 1;
            unique++;
        }
        
        word = strtok(NULL, " ");
    }
    
    // Check if any word appears more than once
    for(int i = 0; i < unique; i++){
        if(count[i] > 1){
            printf("no\n");
            return 0;
        }
    }
    
    printf("yes\n");
    return 0;
}
