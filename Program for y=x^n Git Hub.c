//Write a c program that will read in numerical values for x and n , evaluate the formula y=x^n
//25-09-2024

#include <stdio.h>
#include <math.h>

// Function prototype
double power(double x, int n);

int main() {
    double x;
    int n;
    double y;

    // Prompt the user for input
    printf("Enter a value for x: ");
    scanf("%lf", &x);
    printf("Enter an integer value for n: ");
    scanf("%d", &n);

    // Call the power function
    y = power(x, n);

    // Output the result
    printf("y = %.2lf^%d = %.2lf\n", x, n, y);

    return 0;
}

// Function to calculate x^n
double power(double x, int n) {
    return pow(x, n);
}
