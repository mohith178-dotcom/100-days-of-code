#include <stdio.h>

int main() {
    int n, k;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter window size k: ");
    scanf("%d", &k);

    if(k > n || k <= 0) {
        printf("Invalid window size\n");
        return 0;
    }

    printf("Maximum of each subarray of size %d:\n", k);


    for(int i = 0; i <= n - k; i++) {
        int max = arr[i];

        
        for(int j = i; j < i + k; j++) {
            if(arr[j] > max)
                max = arr[j];
        }

        printf("%d ", max);
    }

    printf("\n");
    return 0;
}
