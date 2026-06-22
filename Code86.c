#include <stdio.h>

int main() {
    char sentence[200];
    int i, words = 1;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    for(i = 0; sentence[i] != '\0'; i++) {
        if(sentence[i] == ' ' || sentence[i] == '\n') {
            words++;
        }
    }

    printf("Total number of words = %d\n", words);

    return 0;
}