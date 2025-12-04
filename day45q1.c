#include <stdio.h>

int main() {
    char str[100], ch;
    int i = 0, count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 

    printf("Enter the character to count: ");
    scanf("%c", &ch);


    while(str[i] != '\0') {
        if(str[i] == ch)
            count++;
        i++;
    }

    printf("Character '%c' occurs %d times in the string.\n", ch, count);

    return 0;
}
