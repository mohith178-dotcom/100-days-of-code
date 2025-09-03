#include <stdio.h>
#include <ctype.h>   

int main() {
    char ch;

    
    printf("Enter an alphabet: ");
    scanf("%c", &ch);



    if (isalpha(ch)) {
    
        ch = tolower(ch);

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            
            printf("The character is a Vowel.\n");
        } else {
        
            printf("The character is a Consonant.\n");
        }
    } else {
        
        printf("Invalid input! Please enter an alphabet.\n");
    }

    return 0;
}
