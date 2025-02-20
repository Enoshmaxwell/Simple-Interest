/*
Author: Enosh Maxwell
Reg No:D33-2453-2023
Program to find simple interest
Date: 19th Feb 2025
*/
#include <stdio.h>
#include <math.h>  // For the pow() function

int main() {
    int principal, rate, time, amount, interest;

    printf("Enter the principal amount: ");
    scanf("%d", &principal);

    printf("Enter the rate of interest: ");
    scanf("%d", &rate);

    printf("Enter the time (years): ");
    scanf("%d", &time);

    // Calculating compound interest (using integer math)
    amount = principal * pow((1 + rate / 100.0), time); 
    interest = amount - principal;

    printf("Compound Interest: %d\n", interest);

    return 0; //excussion successful
}
