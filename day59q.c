#include <stdio.h>

int main() {
    int n, k;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter value of k: ");
    scanf("%d", &k);

    if(k > n || k <= 0) {
        printf("Invalid window size\n");
        return 0;
    }

    
    int windowSum = 0;
    for(int i = 0; i < k; i++) {
        windowSum += arr[i];
    }

    int maxSum = windowSum;

    
    for(int i = k; i < n; i++) {
        windowSum += arr[i] - arr[i - k]; 
        if(windowSum > maxSum)
            maxSum = windowSum;
    }

    printf("Maximum sum of a subarray of size %d is: %d\n", k, maxSum);

    return 0;
}
