#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    float a=5.6;
    float b=3.4;
    float c;
    float d;
    c = a + b;
    printf("c is %.2f\n",c);
    scanf("%f",&d);
    c = d + a;
    printf("c = %f\n",c);

    int x;
    int y;
    int z1=x+y;
    int z2=x-y;
    printf("Please enter two numbers\n");
    scanf("%d",&x);
    scanf("%d",&y);
    if(x>y)
    {
      printf("z is %d",z1);
    }
    else
    {
        printf("z is %d",z2);
    }

    return 0;
}
