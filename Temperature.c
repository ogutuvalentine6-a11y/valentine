/*
NAME:Felix Onyancha Moinde 
REG NO:Pa106/G/28821/25
DESCRIPTION:A program to covert temp from fahrenheit to degrees 
*/

#include <stdio.h>
//convertToCelcius() function
float convertToCelcius(float fahrenheit){
    float celcius = (fahrenheit -32) * 5/9;
    
    return celcius;
}

int main(){
    float fahrenheit;
    //prompt the user to enter temperature in fahrenheit 
    printf("Enter the temperature in fahrenheit: ");
    scanf("%f", &fahrenheit);
    //display temp in celcius
    printf("Temperature in celcius = %2f°C", convertToCelcius(fahrenheit));
    
    return 0;
}