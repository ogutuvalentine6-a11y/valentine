/*
NAME:Felix Onyancha Moinde 
REG NO:PA106/G/28821/25
DESCRIPTION:A program yo calculate the electric bill per the units cosumed
*/

#include <stdio.h>
//calculateElectricBill() function
float calculateElectricBill(int units) {
    float bill;
    //if-elae-if functions
    if (units <= 100) //1st 100 units 10/unit
    {
        bill = units * 10;
    } else if (units <= 200)//next 100 units 15/ unit
    {
        bill = (100 * 10) + ((units - 100) * 15);
    } else //above 200 units 20 per unit
    {
        bill = (100 * 10) + (100 * 15) + ((units - 200) * 20);
    }

    return bill;
}

int main() {
    int units;
    //prompt the user to enter no. of units consumed
    printf("Enter number of units consumed: ");
    scanf("%d", &units);
    //total bill in 2 d.p
    printf("The total Bill = KSh. %.2f\n", calculateElectricBill(units));
    return 0;
}