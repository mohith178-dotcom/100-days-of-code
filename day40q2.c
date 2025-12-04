#include <stdio.h>

int main() {
    int r1, c1, r2, c2, i, j, k;

    
    printf("Enter number of rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);

    
    printf("Enter number of rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);

    if(c1 != r2) {
        printf("Matrix multiplication is not possible.\n");
        return 0;
    }

    int matrix1[r1][c1], matrix2[r2][c2], product[r1][c2];

    
    printf("Enter elements of first matrix:\n");
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c1; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    
    printf("Enter elements of second matrix:\n");
    for(i = 0; i < r2; i++) {
        for(j = 0; j < c2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c2; j++) {
            product[i][j] = 0;
