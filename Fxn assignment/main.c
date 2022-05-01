#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//DECLARATION OF FUNCTION
    float ROQ(int a,int b,int c);
int main()
{
    int a,b,c,d;
        FXN:
    printf("Enter the coefficients of the quadratic equation:\n");
    scanf("%i %i %i",&a,&b,&c);
    float R= ROQ(a,b,c);
    printf("\nThe roots of the equation are: %f\n");
    /*int g;
    for(g=0;g<=1;g++)
    {
        printf("%.3f  ",R[g]);
    }*/
    printf("\nEnter 1 to try another sample or 2 to exit\n");
    scanf("%i",&d);
    switch(d)
    {
    case 1:
        goto FXN;
    case 2:
        break;
    }
    return 0;
}
//FUNCTION DEFINITION
    float ROQ(int a,int b,int c)
{
    int kk=4;
    int k= (b*b)-(kk*a*c);
    int s= sqrt(k);
    float R1=(-b+s)/2, R2=(-b-s)/2;
    float m[2]={R1,R2};
    printf("ROQ=");
        int g;
    for(g=0;g<=1;g++)
    {
        printf("%.3f  ",m[g]);
    }
    return m[1],m[2];
}
