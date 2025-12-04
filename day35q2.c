#include <stdio.h>

int main() {
    int n, i, k;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter number of positions to rotate (k): ");
    scanf("%d", &k);

    k = k % n;  

    int temp[k];

    
    for(i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }

    
    for(i = n - 1; i >= k; i--) {
        arr[i] = arr[i - k];
    }

    
    for(i = 0; i < k; i++) {
        arr[i] = temp[i];
    }

    
    printf("Array after rotatin
