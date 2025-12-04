#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, k, len;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  

    
    len = strlen(str);
    if(str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }

    printf("All substrings of the string:\n");

    
    for(i = 0; i < len; i++) {        
        for(j = 1; j <= len - i; j++) { 
            for(k = i; k < i + j; k++) {
                printf("%c", str[k]);
            }
            printf("\n");
        }
    }

    return 0;
}
