#include <stdio.h>

int main() {
    char name[100];
    int i = 0, lastSpace = -1;

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin); 


    int len = 0;
    while(name[len] != '\0') len++;
    if(name[len - 1] == '\n') name[len - 1] = '\0';

    
    for(i = 0; name[i] != '\0'; i++) {
        if(name[i] == ' ')
            lastSpace = i;
    }

    
    for(i = 0; i <= lastSpace; i++) {
        if(i == 0 && name[i] != ' ')
            printf("%c. ", name[i]);
        else if(name[i] == ' ' && name[i+1] != ' ' && name[i+1] != '\0')
            printf("%c. ", name[i+1]);
    }

    
    if(lastSpace != -1)
        printf("%s\n", &name[lastSpace + 1]);
    else
        printf("%s\n", name); 

    return 0;
}
