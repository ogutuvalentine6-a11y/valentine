//A program  of data bundles
/*
Name:VALENTINE OTIENO OGUTU
Reg:PA106/G/28813/25
Description: MORE OF DATA BUNDLES
*/

#include<stdio.h>
int main()
{
    int choice;

    printf("Select data bundles:\n",choice);
    printf("1.100MB @ 50 KES\n",choice);
    printf("2.500MB @ 200 KES\n",choice);
    printf("3.1GB @ 350 KES\n",choice);
    printf("4.2GB @ 600 KES\n",choice);

    printf("Enter your choice(1-4):\n");
    scanf("%d",&choice);

    if (choice==1)
    {
        printf("Your selected 100MB");
    }
    else if (choice==2)
    {
        printf("Your selected 500MB");
    }
    else if (choice==3)
    {
        printf("you selected 1GB");
    }
    else if (choice==4)
    {
        printf("Your selected 2GB");
    }
    else {
        printf("Invalid choice");
    }
  return 0;  

}
