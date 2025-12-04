#include <stdio.h>

int main() {
    int a, b, x, y, temp;

    scanf("%d %d", &a, &b);

    x = a;
    y = b;

    
    while (y != 0) {
        temp = y;
        y = x % y;
        x = temp;
    }

    int hcf = x;
    int lcm = (a * b) / hcf;

    printf("LCM = %d", lcm);

    return 0;
}
