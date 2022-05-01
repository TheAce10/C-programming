#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* AN ATM MACHINCE*/
printf("Hello there, welcome to my ATM machine\n");
int pin;
printf("Enter your pin code\n");
scanf("%d",&pin);
if (pin>=1000 && pin<=2000)
{
       printf("Hello trusted agent\n what do you to do\n");
       int choice;
       start:
       printf("Enter\n 1 to withdraw\n 2 to deposit\n 3 to check balance\n");
       scanf("%d",&choice);
         switch (choice)
         {
             float amount;
            case 1 : printf("Enter the amount you want to withdraw\n");
                     scanf("%g",&amount);
                     amount-=100;
                     printf("Your current balance is  Ghs %g\n",amount);
                            break;
            case 2 : printf("Enter the amount you want to deposit\n");
                     scanf("%g",&amount);
                     amount+=100;
                     printf("Your current balance is  Ghs %g\n",amount);
                            break;
            case 3 : printf("You current balance is 0.00\n");\
                            break;
            default: printf("You entered a wrong number\n");
                     goto start;
         }
}
     else
        {
            printf("your password is incorrect\n");
            printf("Try again in the next year\n");
        }

        puts("Thank you for making transactions with my ATM");
    return 0;
}
