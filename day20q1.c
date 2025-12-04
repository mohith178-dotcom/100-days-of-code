#include <stdio.h>

int main() {
    int n, temp, digit;
    long long product = 1;
    int has_odd = 0; 

    scanf("%d", &n);

    temp = n;

    while (temp > 0) {
        digit = temp % 10;        
        if (digit % 2 != 0) {     
            product = product * digit;
            has_odd = 1;
        }
        temp = temp / 10;       
    }

    if (has_odd)
        printf("Product of odd digits = %lld", product);
    else
        printf("No odd digits in the number");

    return 0;
}
