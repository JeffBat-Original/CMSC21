#include <stdio.h>
#include <ctype.h> /* toupper, isalpha */
#include <stdbool.h>

/* value */
int occurrences1[26], occurrences2[26];

/* For scanning the words */
void scan_word(int occurrences[26]){
    char c;
    // First Word
    printf("Enter first word: ");
    while ((c = getchar()) != '\n') {
        if (isalpha(c)){
            occurrences[toupper(c) - 'A']++;
            occurrences1[toupper(c) - 'A'] = occurrences[toupper(c) - 'A'];
        }
    }
    // Cleansing
    for (int i = 0; i < 26; i++){
        occurrences[i] = 0;
    }

    // Second word
    printf("Enter second word: ");
    while ((c = getchar()) != '\n') {
        if (isalpha(c)){
            occurrences[toupper(c) - 'A']++;
            occurrences2[toupper(c) - 'A'] = occurrences[toupper(c) - 'A'];
        }
    }
}

// Anagram or not --> true or false
bool is_anagram(int occurrences1[26],int occurrences2[26]){
    for (int i= 0; i < 26; i++){
        if (occurrences1[i] == occurrences2[i])
            return 1;
    }
    return 0;
}


/* MAIN */
int main(void) {

    int i,
        same = 1,
        letters[26] = {0};
    
    scan_word(letters);
    // Going to fucntion is_anagram to check if anagram or not
    same = is_anagram(occurrences1,occurrences2);

    if (same) {
        printf("The words are anagrams.\n");
        return 0;
    }
    printf("The words are not anagrams.\n");
    return 0;
}




