#include <stdio.h>

int main(void)
{
    float loanAmount, interestRate, monthlyPayment,
    interestAmount, monthlyPaymentAmount;
    
    printf("Enter amount of loan: ");
    scanf("%f", &loanAmount);
    printf("Enter interest rate: ");
    scanf("%f", &interestRate);
    printf("Enter monthly payment: ");
    scanf("%f", &monthlyPayment);

    interestAmount = loanAmount / 100.0f * (interestRate / 12.0f);
    loanAmount = loanAmount + interestAmount - monthlyPayment;

    printf("Balance remaining after first payment: %.2f\n", loanAmount);

    interestAmount = loanAmount / 100.0f * (interestRate / 12.0f);
    loanAmount = loanAmount + interestAmount - monthlyPayment;

    printf("Balance remaining after second payment: %.2f\n", loanAmount);

    interestAmount = loanAmount / 100.0f * (interestRate / 12.0f);
    loanAmount = loanAmount + interestAmount - monthlyPayment;

    printf("Balance remaining after third payment: %.2f", loanAmount);

    return 0;
}