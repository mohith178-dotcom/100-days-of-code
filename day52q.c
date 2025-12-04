#include <stdio.h>

int main() {
    int n, x;
    
    printf("Enter size of the sorted array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements of the sorted array in ascending order: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number x: ");
    scanf("%d", &x);

    int ceilIndex = -1;

    
    for(int i = 0; i < n; i++) {
        if(arr[i] >= x) {
            ceilIndex = i;
            break; 
        }
    }

    printf("Index of ceil of %d: %d\n", x, ceilIndex);

    return 0;
}
