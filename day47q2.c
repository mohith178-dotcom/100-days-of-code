#include <stdio.h>
#include <string.h>

int main() {
    char sentence[200];
    int i = 0, maxLength = 0, currentLength = 0, startIndex = 0, maxStartIndex = 0;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    while(sentence[i] != '\0') {
        if(sentence[i] != ' ' && sentence[i] != '\n') {
            currentLength++;
        } else {
            if(currentLength > maxLength) {
                maxLength = currentLength;
                maxStartIndex = startIndex;
            }
            currentLength = 0;
            startIndex = i + 1;
        }
        i++;
    }

    
    if(currentLength > maxLength) {
        maxLength = currentLength;
        maxStartIndex = startIndex;
    }

    printf("Longest word: ");
    for(i = maxStartIndex; i < maxStartIndex + maxLength; i++) {
        printf("%c", sentence[i]);
    }
    printf("\n");

    return 0;
}
