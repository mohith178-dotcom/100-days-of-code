#include <stdio.h>

int main() {
    int n, i, pos;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position of the element to delete (1 to %d): ", n);
    scanf("%d", &pos);

    if(pos < 1 || pos > n) {
        printf("Invalid position\n");
        return 0;
    }
