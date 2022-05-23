//Part III - Item 1
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

void scan_word (int occurrences[26]);
bool is_anagram(int occurrences1[26], int occurrences2[26]);

int i;

int main(void){
    int occurrences1[26] = {0},
    occurrences2[26] = {0};

    printf("Please enter the first word.\n> ");
    scan_word(occurrences1);

    printf("Please enter the second word.\n> ");
    scan_word(occurrences2);

    if(is_anagram(occurrences1, occurrences2)){
        printf("\nYay! The words are anagrams!\n");
        system("PAUSE");
        return 0;
    }
    else{
        printf("\nUh oh! It seems that the words are not anagrams.\n");
        system("PAUSE");
        return 0;
    }
}
void scan_word(int occurrences[26]){
    char c;
    while ((c = getchar()) != '\n'){
        if(isalpha(c)){
            occurrences[toupper(c) - 'A']++;
        }
    }
}

bool is_anagram(int occurrences1[26], int occurrences2[26]){
    for(i = 0; i < 26; i++){
        if(occurrences1[i] != occurrences2[i]){
            return false;
        }
    }
}
