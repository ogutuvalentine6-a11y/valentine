//ATM Program to output the balance,windrowal and deposit money
/*
Name:
Reg No:
date:
Description:ATM Program to output the balance,windrowal and deposit money
*/

#include <stdio.h>

int main() {
    float balance ;
    float amount;

    printf("Enter initial balance: ");
    scanf("%f", &balance);
    printf("Initial balance: %.2f\n", balance);

    while (balance > 0)
    {
       printf("enter amount to withdraw: ");
       scanf("%f", &amount);
       balance-=amount;
       printf("Remaining balance: %.2f\n", balance);
       printf("New balance=%.2f\n", balance);
    }
    if (balance <= 0)
    {
        printf("Insufficient balance\n");
    }
    return 0;
}
    