#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin); 

    int capitalizeNext = 1;  

    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            if (capitalizeNext) {
                str[i] = toupper(str[i]);
                capitalizeNext = 0;
            } else {
                str[i] = tolower(str[i]);
            }
        } else if (str[i] == '.' || str[i] == '!' || str[i] == '?') {
            capitalizeNext = 1;  
        }
    }

    printf("%s", str);

    return 0;
}
