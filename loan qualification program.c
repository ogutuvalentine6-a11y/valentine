//simple program to show qualification for loan
/*
name:Valentine Otieno Ogutu
Reg:PA106/G/28813/25
Description:Simple program to show qualification for loan
*/

#include<stdio.h>

int main() {
	
	float income,age;
	
	printf("Enter the Annual Income:");
	scanf("%f",&income);
	
	printf("enter the age:");
	scanf("%f",&age);
	 
	 if(age>=21&&income>=21000){
		 printf("Congratulation,you qualify for loan");
	 }else{
		 printf("Unfortunately,we are unable to offer loan at this time");
	 }
	 return 0;
}