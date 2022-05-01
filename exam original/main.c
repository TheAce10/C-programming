#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float findAngle(float a,float b);
float findHypotanuse(float c,float d);

int main()
{
 /* int x=23%-5;
  char a;*/
  /*printf("%i",x);*/
/*float b=sizeof(a);
printf("%i",x);
sin(x)=sqrt(2)/2;
printf("%i",x);
*/
/* float opposite,adjacent,hypotenuse,angle;
 Label1:
 printf("enter the opposite\n");
 scanf("%f",&opposite);
 if (opposite <0)
 {
     printf("You entered a negative number\n");
     goto Label1;
 }
 Label2:
  printf("enter the adjacent\n");
 scanf("%f",&adjacent);
 if (adjacent <0)
 {
     printf("You entered a negative number");
     goto Label2;
 }
  angle=findAngle(opposite,adjacent);
  printf("Angle= %.2f\n\n\n\n",angle);*/

  int i=17,j=-7,ang;
  char c='D',d='C';
  ang=/*(3*i-2*j)%*/(d*2-c);
  printf("=========%i",ang);


    return 0;
}
 float findAngle(float a,float b)
 {
     float y;
     y=asin(a/b);
     return y;
 }
