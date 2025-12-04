#include <stdio.h>

int main() {
    int i, j;

    for(i = 1; i <= 5; i++) {       // 5 rows
        for(j = 1; j <= 5; j++) {   // 5 stars in each row
            printf("*");
        }
        printf("\n");               // Move to next line
    }

    return 0;
}

