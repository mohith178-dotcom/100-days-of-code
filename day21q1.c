#include <stdio.h>

int main() {
    int n, temp, first, last, digits = 0, multiplier = 1;
    int result;

    scanf("%d", &n);

    temp = n;

    
    last = temp % 10;

    
    while (temp >= 10) {
        temp = temp / 10;
        multiplier *= 10; 
    }
    first = temp;

    /
    temp = n;
    temp = temp % multiplier;    
    temp = temp / 10;            


    result = last * multiplier + temp * 10 + first;

    printf("Number after swapping first and last digits = %d", result);

    return 0;
}
