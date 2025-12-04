#include <stdio.h>

int main() {
    long long n, temp;
    int count[10] = {0};  
    int i, maxCount = 0;

    printf("Enter a number: ");
    scanf("%lld", &n);

    if(n < 0)
        n = -n; 

    temp = n;

    
    while(temp > 0) {
        int digit = temp % 10;
        count[digit]++;
        temp /= 10;
    }

    
    for(i = 0; i < 10; i++) {
        if(count[i] > maxCount)
            maxCount = count[i];
    }

    
    printf("Digit(s) that occur the most (%d times): ", maxCount);
    for(i = 0; i < 10; i++) {
        if(count[i] == maxCount)
            printf("%d ", i);
    }

    return 0;
}
