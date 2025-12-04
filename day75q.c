#include <stdio.h>

int main() {
    char filename[100];
    char line[1000];

    printf("Enter the filename: ");
    scanf("%s", filename);
    getchar(); 

    FILE *fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    
    printf("Enter text to append: ");
    fgets(line, sizeof(line), stdin);

    
    fputs(line, fp);

    
    fclose(fp);

    printf("Text appended successfully.\n");

    return 0;
}
