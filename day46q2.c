#include <stdio.h>

int main() {
    char str[100];
    int count[26] = {0}; 
    int i = 0;
    int found = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 

    
    while(str[i] != '\0') {
        char ch = str[i];

        
        if(ch >= 'a' && ch <= 'z') {
            count[ch - 'a']++; 

            if(count[ch - 'a'] == 2) { 
                printf("First repeating lowercase alphabet: %c\n", ch);
                found = 1;
                break;
            }
        }
        i++;
    }

    if(!found)
        printf("No repeating lowercase alphabet found.\n");

    return 0;
}
