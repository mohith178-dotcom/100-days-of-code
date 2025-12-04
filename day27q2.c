#include <stdio.h>

int main() {
    int i, j, star;

    
    for(i = 1; i <= 4; i++) {
        star = 2*i - 1;     
        for(j = 1; j <= star; j++)
            printf("*");
        printf("\n");
    }

    
    for(i = 3; i >= 1; i--) {
        star = 2*i - 1;     
        for(j = 1; j <= star; j++)
            printf("*");
        printf("\n");
    }

    return 0;
}
