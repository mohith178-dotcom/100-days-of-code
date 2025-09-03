#include <stdio.h>
#include <math.h>   // for pow()

int main() {
    float principal, rate, time;
    float simpleInterest, compoundInterest;

    // --- User Inputs ---
    printf("Enter Principal amount: ");
    scanf("%f", &principal);

    printf("Enter Rate of interest (in %%): ");
    scanf("%f", &rate);

    printf("Enter Time (in years): ");
    scanf("%f", &time);

    // --- Operations ---
    // Simple Interest Formula: SI = (P × R × T) / 100
    simpleInterest = (principal * rate * time) / 100;

    // Compound Interest Formula: CI = P * ( (1 + R/100)^T - 1 )
    compoundInterest = principal * (pow((1 + rate / 100), time) - 1);

    // --- Output ---
    printf("\nSimple Interest = %.2f\n", simpleInterest);
    printf("Compound Interest = %.2f\n", compoundInterest);

    return 0;
}
