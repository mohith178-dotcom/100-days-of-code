#include <stdio.h>

int main() {
    int n, temp, digit;
    int rev = 0;       
    int result = 0;    

    scanf("%d", &n);   
    temp = n;

    
    while (temp > 0) {
        digit = temp % 10;

        if (digit == 0)
            digit = 1;
        else if (digit == 1)
            digit = 0;
        else {
            printf("Invalid binary number");
            return 0;
        }

        rev = rev * 10 + digit; 
        temp = temp / 10;
    }

    
    while (rev > 0) {
        digit = rev % 10;
        result = result * 10 + digit;
        rev = rev / 10;
    }

    printf("1's Complement = %d", result);

    return 0;
}
