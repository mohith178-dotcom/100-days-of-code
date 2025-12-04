#include <stdio.h>

int main() {
    char str[100];
    int count = 0, i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 

    
    while(str[i] != '\0') {
        
        if(str[i] != '\n')
            count++;
        i++;
    }

    printf("Number of characters in the string = %d\n", count);

    return 0;
}
