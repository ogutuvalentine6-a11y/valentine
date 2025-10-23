/*
NAME:Valentine Otieno Ogutu 
REG NO:PA106/G/28813/25
DESCRIPTION:A program to calculate the total fare per the distance covered
*/

#include <stdio.h>
//calculatefare() function
float calculatefare(int distance){
    //fare is Ksh. 50 per km
    float fare = distance * 50;
    
    return fare;
}

int main(){
    float distance;
    //prompt the user to enter the distance covered
    printf("Enter the distance covered in km: ");
    scanf("%f", &distance);
    //display the total fare 
    printf("The tatal fare is Ksh. %.2f\n", calculatefare(distance));
    return 0;
}
