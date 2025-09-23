// simple  volume and surface area of a given cylinnder
 /*
 Name : valentine otieno ogutu 
 Reg no : PA106/28813/25
 Description: Simple Program displaying a volume  and surface area of a given cylinder 
 volume =p1* radius *height  
 surface_area = 2*p1 + 2p1 *radius *height 
 */
 #include<stdio.h> // preprocessing directive: scanf(), printf ()
  #include<math.h>
  
  int main () 
  {
  float  principle; 
  float rate;
  float time;
  int  n;
  float amount;
  float compound_interest;
  
  printf("enter principle");
  scanf("%f",&principle);
  
  printf("enter rate");
  scanf("%f",&rate);
   
   printf("enter n");
   scanf("%d",&n);
   
   printf("enter time");
   scanf("%f",&time);
  amount=principle*pow(1+rate/n,n*time) ;
   printf("amount is %f",amount);
   
   compound_interest=amount-principle;
   printf("compound_interest is %f",compound_interest);
  return 0;
  }