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

    printf("First negative integer in each window:\n");

    for(int i = 0; i <= n - k; i++) {
        int firstNeg = 0;  

        for(int j = i; j < i + k; j++) {
            if(arr[j] < 0) {
                firstNeg = arr[j];
                break;     
            }
        }

        printf("%d ", firstNeg);
    }

    printf("\n");
    return 0;
}
