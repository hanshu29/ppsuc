#include <stdio.h>

int main() {
    int principal, rate, time, simpleInterest;
    printf("Enter Principal amount: ");
    scanf("%d", &principal);
    printf("Enter Rate of Interest: ");
    scanf("%d", &rate);
    printf("Enter Time (in years): ");
    scanf("%d", &time);
    simpleInterest = (principal * rate * time) / 100;
    printf("Simple Interest = %d\n", simpleInterest);
    return 0;
}




