#include <stdio.h>

int main() {
    int rows, cols, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];

    
    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Diagonal traversal of the matrix:\n");

    
    for(int colStart = 0; colStart < cols; colStart++) {
        i = 0;
        j = colStart;
        while(i < rows && j >= 0) {
            printf("%d ", matrix[i][j]);
            i++;
            j--;
        }
    }

    
    for(int rowStart = 1; rowStart < rows; rowStart++) {
        i = rowStart;
        j = cols - 1;
        while(i < rows && j >= 0) {
            printf("%d ", matrix[i][j]);
            i++;
            j--;
        }
    }

    return 0;
}
