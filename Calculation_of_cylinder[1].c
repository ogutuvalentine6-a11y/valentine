// simple  volume and surface area of a given cylinder 
 /*
 Name : valentine otieno ogutu 
 Reg no : PA106/28813/25
 Description: Simple Program displaying a volume  and surface area of a given cylinder 
 volume =p1* radius *height  
 surface_area = 2*p1 + 2p1 *radius *height 
 */
 #include<stdio.h> // preprocessing directive: scanf(), printf ()
  
  int main () {
  float  pi = 3.142 ;
  float radius, height, volume, surfacearea;
  
  //prompte the user to enter the radius 
  printf("enter radius:"); 
  scanf("%f",&radius);  
  
  //prompt the user to enter the height
  printf("enter height");
  scanf("%f",&height); 
  
   //calculation on surfacearea and volume 
   volume = pi*radius *radius *height;
   surfacearea= 2*pi *radius*radius + 2 * pi *radius * height;
   
  //display volume 
  printf("\n volumeis %.2f",volume);
  printf("\n surfacearea is %.2f",surfacearea);
  
  return 0 ;
  }