#include <stdio.h>

int main() {
    int i, j, space, star;

    
    for(i = 1; i <= 3; i++) {
        star = 2*i - 1;          
        for(j = 1; j <= star; j++)
            printf("*");
        printf("\n");
    }

    for(i = 2; i >= 1; i--) {
        star = 2*i - 1;       
        for(j = 1; j <= star; j++)
            printf("*");
        printf("\n");
    }

    return 0;
}
