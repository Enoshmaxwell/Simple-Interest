/*
Author: Enosh Maxwell
Reg No:D33-2453-2023
Program to find simple interest
Date: 19th Feb 2025
*/
#include <stdio.h>

int main() {
    int principal, time, rate, simple_interest;

    // Get user input
    printf("Enter the principal amount: ");
    scanf("%d", &principal);

    printf("Enter the time period (in years): ");
    scanf("%d", &time);

    printf("Enter the rate of interest (per annum): ");
    scanf("%d", &rate);

    // Calculate simple interest
    simple_interest = (principal * time * rate) / 100;

    // Display the result
    printf("The Simple Interest is: %d\n", simple_interest);

    return 0;
}
