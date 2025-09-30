//Program to output the water bill
/*
Name:Valentine Otieno ogutu
Reg:PA106/G/28813/25
Description: Output the water bill
*/

#include<stdio.h>
int main(){
    int water_units;
    float bills;

    printf("Enter number of water units:");
    scanf("%d",&water_units);

    if (water_units>0&&water_units<=30)
    {
      bills=20*water_units;
      printf("your total bill is %.2f",bills);
    }
    else if (water_units>=31&&water_units<=60)
    {
        bills=25*water_units;
        printf("your total bill is%.2f",bills);
    }
    else if (water_units>60)
    {
       bills=30*water_units;
       printf("your total bill is%.2f",bills);
    }
    else{
        printf("invalid choice");
    }
    
    return 0;

}
