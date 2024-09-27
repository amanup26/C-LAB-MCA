#include <stdio.h>

// Function to calculate compound interest
double calculate_compound_interest(double principal, double rate, int time, int n)
{
    // Calculate compound interest using the formula: A = P (1 + r/n)^(nt)
    double amount = principal * pow((1 + rate / n), (n * time));
    double interest = amount - principal;
    return interest;
}

int main()
{
    double principal, rate;
    int time, n;

    // Input values
    printf("Enter the principal amount: ");
    scanf("%lf", &principal);
    printf("Enter the annual interest rate (in decimal): ");
    scanf("%lf", &rate);
    printf("Enter the time period (in years): ");
    scanf("%d", &time);
    printf("Enter the number of times interest is compounded per year: ");
    scanf("%d", &n);

    // Calculate compound interest
    double interest = calculate_compound_interest(principal, rate, time, n);

    // Display result
    printf("The compound interest is: $%.2f\n", interest);

    return 0;
}