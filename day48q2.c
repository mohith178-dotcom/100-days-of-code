#include <stdio.h>
#include <string.h>

int main() {
    char sentence[200];
    int start, end, i;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    
    int len = strlen(sentence);
    if(sentence[len - 1] == '\n')
        sentence[len - 1] = '\0';

    i = 0;
    while(sentence[i] != '\0') {
        
        start = i;

        
        while(sentence[i] != ' ' && sentence[i] != '\0') {
            i++;
        }
        end = i - 1;

        
        while(start < end) {
            char temp = sentence[start];
            sentence[start] = sentence[end];
            sentence[end] = temp;
            start++;
            end--;
        }

        
        if(sentence[i] == ' ')
            i++;
    }

    printf("Sentence after reversing each word: %s\n", sentence);

    return 0;
}
