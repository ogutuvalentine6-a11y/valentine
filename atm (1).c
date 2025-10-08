//ATM Program to output the balance,windrowal and deposit money
/*
Name:VALENTINE OTIENO OGUTU
Reg No:PAI06/G/28813/25
date:8/10/2025
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

    
