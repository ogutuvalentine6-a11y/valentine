// sample of Exameligibiliy
/*
   Name : VALENTINE OTIENO OGUTU 
   Reg  : PA106/G/28813/25
   Discribtion : Exameligibiliy
*/
#include<stdio.h>
int main() 
{
  int attendances; 
  int average_marks;
  
   printf("enter attendance");
   scanf("%d",&attendances);
   
   printf("enter average_marks");
   scanf("%d",&average_marks);
   
   	if (attendances>=75&&average_marks>=40) 
	   {
		   printf("cogratulations you are eligible");
		   
	   }
   else
   {
	   printf("you are not eligiable");
	   
   }
	return 0;
}
   
   
   
