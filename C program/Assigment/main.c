#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Code to calculate Body Mass Index*/
    char name[]="";
    char gender;
    float weight,height;
    float obese=30;
    int age;
    printf("What is your name?\n");
    scanf("%s",&name);
    printf("Age:");
    scanf("%d",&age);
    printf("Enter your gender M for male and F for female\n ");
    scanf("%c",&gender);
    printf("%s, please enter your weight\n",name);
    scanf("%f",&weight);
    printf("%s, please enter your height\n",name);
    scanf("%f",&height);
    float BMI=(weight/(height*height));
    printf("%s, your Body Mass Index is %.2f kg/m3\n",name,BMI);
    if (BMI>=obese)
    {
        printf(" %s is obesed\n",name);
    }
    else
    {
        printf("%s is not obesed\n",name);
    }
    return 0;
}
