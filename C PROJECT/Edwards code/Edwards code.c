#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
    // CAR RENTAL MANAGEMENT SYSTEM	`
    //Declaring of variables
    //Member details
    int Acc1;
    char User1[50],User[50];
    int pincode1;
    int accnum;
    int pin,me;
    //REGISTER
    register1:
    printf("Welcome to KNUST Car Rental\n");
    printf("\nFill The following\n");
    printf("\nEnter your First name and Last name\n\t");
    scanf("%s %s",User1,User);
    printf("Choose a 4-digit pincode\n\t");
    scanf("%d",&pincode1);
    printf("Choose a 10-digit account number\n(NB: Account number will  needed during your login)\n\t");
    scanf("%d",&Acc1);
    me=0;
    //Login
    login:
    printf("Welcome to KNUST Car Rental Login Page\n");
    printf("Please enter your account details\n\n ");
    printf("Account number:\n\t");
    scanf("%d",&accnum);
    printf("\nPincode:\n\t");
    scanf("%d",&pin);
    //Validation of login details
    if (accnum==Acc1 && pin==pincode1)
    {
        printf("\n\nWelcome %s, What car would you like to rent today?\n",User1);
        goto options;
    }
    else
    {
        printf("\n\nWrong input details\n Try again\n\n");
        goto login;
    }
    //Car Rental Options
    int opt;
    int slt;
    int hrs;
    float cost;
    int con;
    options:
        printf("Select your car type\n");
        printf(" \n 1. Sedan\n 2. Hatchback\n 3. Minivan\n 4. SUV\n 5. Pickup\n 6. Sports car\n 7. Convertible\n 8. Coupe\n 9. Limousine\n 10.Log out\n 0. Exit (Note enter only the associated number to car model)\n\n");
        scanf("%d", &opt);
    switch(opt)
    {
        case 1:
             slt_1:
             printf("Cars and their prices per hour\n");
             printf("List of car\n");
             printf(" \n 1. Mercedes-Benz A-Class-Ghc300\n 2. Hyundai Accent-Ghc100\n 3. Nissan Versa-Ghc100\n 4. Honda Civic-Ghc150\n 5.Back (Note enter only the associated number to car model)\n\n");
             printf("Select your car and enter number of hours\n");
             scanf("%d", &slt);
             scanf("%d", &hrs);
             if(slt==1)
               {
                   cost=hrs*300;
                   printf("\n Car:Mercedes-Benz A-Class\n Duration:%d\n Cost:Ghc %.2f\n",hrs,cost);
                   printf("Press 1 to confirm rental 0r 0 to decline\n");
                   scanf("%d",&con);
                   if(con==1)
                      {
                       printf("Thank you for choosing us. Enjoy your ride\n");
                       goto login;
                      }
                   else if(con==0)
                      {
                       goto slt_1;
                      }
               }
             else if(slt==2)
               {
                   cost=hrs*100;
                   printf("\n Car:Hyundai Accent\n Duration:%d\n Cost:Ghc %.2f\n",hrs,cost);
                   printf("Press 1 to confirm rental 0r 0 to decline\n");
                   scanf("%d",&con);
                   if(con==1)
                      {
                       printf("Thank you for choosing us. Enjoy your ride\n");
                       goto login;
                      }
                   else if(con==0)
                      {
                       goto slt_1;
                      }
               }
             else if(slt==3)
               {
                   cost=hrs*100;
                   printf("\n Car:Nissan Versa\n Duration:%d\n Cost:Ghc %.2f\n",hrs,cost);
                   printf("Press 1 to confirm rental 0r 0 to decline\n");
                   scanf("%d",&con);
                   if(con==1)
                      {
                       printf("Thank you for choosing us. Enjoy your ride\n");
                       goto login;
                      }
                   else if(con==0)
                      {
                       goto slt_1;
                      }
               }
              else if(slt==4)
               {
                   cost=hrs*150;
                   printf("\n Car:Honda Civic\n Duration:%d\n Cost:Ghc %.2f\n",hrs,cost);
                   printf("Press 1 to confirm rental 0r 0 to decline\n");
                   scanf("%d",&con);
                   if(con==1)
                      {
                       printf("Thank you for choosing us. Enjoy your ride\n");
                       goto login;
                      }
                   else if(con==0)
                      {
                       goto slt_1;
                      }
               }
             else if(slt==5)
               {
                   goto options;
               }
             else
               {
                 printf("Invalid selection!!!\n");
                 goto slt_1;
               }
          break;
       case 2:
             slt_2:
             printf("Cars and their prices per hour\n");
             printf("List of car\n");
             printf(" \n 1. Volkswagen Golf GTI-Ghc100\n 2. Ford Focus-Ghc100\n 3. Ford Figo-Ghc100\n 4. Back (Note enter only the associated number to car model)\n\n");
             printf("Select your car and enter number of hours\n");
             scanf("%d", &slt);
             scanf("%d", &hrs);
             if(slt==1)
               {
                   cost=hrs*100;
                   printf("\n Car:Volkswagen Golf GTI\n Duration:%d\n Cost:Ghc %.2f\n",hrs,cost);
                   printf("Press 1 to confirm rental 0r 0 to decline\n");
                   scanf("%d",&con);
                   if(con==1)
                      {
                       printf("Thank you for choosing us. Enjoy your ride\n");
                       goto login;
                      }
                   else if(con==0)
                      {
                       goto slt_2;
                      }
               }
             else if(slt==2)
               {
                   cost=hrs*100;
                   printf("\n Car:Ford Focus\n Duration:%d\n Cost:Ghc %.2f\n",hrs,cost);
                   printf("Press 1 to confirm rental 0r 0 to decline\n");
                   scanf("%d",&con);
                   if(con==1)
                      {
                       printf("Thank you for choosing us. Enjoy your ride\n");
                       goto login;
                      }
                   else if(con==0)
                      {
                       goto slt_2;
                      }
               }
             else if(slt==3)
               {
                   cost=hrs*100;
                   printf("\n Car:Ford Figo\n Duration:%d\n Cost:Ghc %.2f\n",hrs,cost);
                   printf("Press 1 to confirm rental 0r 0 to decline\n");
                   scanf("%d",&con);
                   if(con==1)
                      {
                       printf("Thank you for choosing us. Enjoy your ride\n");
                       goto login;
                      }
                   else if(con==0)
                      {
                       goto slt_2;
                      }
               }
              else if(slt==4)
               {
                   goto options;
               }
             else
               {
                 printf("Invalid selection!!!\n");
                 goto slt_2;
               }
             break;
       case 3:
             slt_3:
             printf("Cars and their prices per hour\n");
             printf("List of car\n");
             printf(" \n 1. Honda Odyssey-Ghc200\n 2. Chrysler Voyager-Ghc200\n 3. Kia Carnival-Ghc200\n 4. Back (Note enter only the associated number to car model)\n\n");
             printf("Select your car and enter number of hours\n");
             scanf("%d", &slt);
             scanf("%d", &hrs);
             if(slt==1)
               {
                   cost=hrs*200;
                   printf("\n Car:Honda Odyssey\n Duration:%d\n Cost:Ghc %.2f\n",hrs,cost);
                   printf("Press 1 to confirm rental 0r 0 to decline\n");
                   scanf("%d",&con);
                   if(con==1)
                      {
                       printf("Thank you for choosing us. Enjoy your ride\n");
                       goto login;
                      }
                   else if(con==0)
                      {
                       goto slt_3;
                      }
               }
             else if(slt==2)
               {
                   cost=hrs*200;
                   printf("\n Car:Chrysler Voyager\n Duration:%d\n Cost:Ghc %.2f\n",hrs,cost);
                   printf("Press 1 to confirm rental 0r 0 to decline\n");
                   scanf("%d",&con);
                   if(con==1)
                      {
                       printf("Thank you for choosing us. Enjoy your ride\n");
                       goto login;
                      }
                   else if(con==0)
                      {
                       goto slt_3;
                      }
               }
             else if(slt==3)
               {
                   cost=hrs*200;
                   printf("\n Car:Kia Carnival\n Duration:%d\n Cost:Ghc %.2f\n",hrs,cost);
                   printf("Press 1 to confirm rental 0r 0 to decline\n");
                   scanf("%d",&con);
                   if(con==1)
                      {
                       printf("Thank you for choosing us. Enjoy your ride\n");
                       goto login;
                      }
                   else if(con==0)
                      {
                       goto slt_3;
                      }
               }
               else if(slt==4)
               {
                   goto options;
               }
             else
               {
                 printf("Invalid selection!!!\n");
                 goto slt_3;
               }
             break;
       case 4:
             slt_4:
             printf("Cars and their prices per hour\n");
             printf("List of car\n");
             printf(" \n 1. Jeep H6-Ghc250\n 2. Kia Seltos-Ghc250\n 3. Hyundai Palisade-Ghc250\n 4. Back (Note enter only the associated number to car model)\n\n");
             printf("Select your car and enter number of hours\n");
             scanf("%d", &slt);
             scanf("%d", &hrs);
             if(slt==1)
               {
                   cost=hrs*250;
                   printf("\n Car:Jeep H6\n Duration:%d\n Cost:Ghc %.2f\n",hrs,cost);
                   printf("Press 1 to confirm rental 0r 0 to decline\n");
                   scanf("%d",&con);
                   if(con==1)
                      {
                       printf("Thank you for choosing us. Enjoy your ride\n");
                       goto login;
                      }
                   else if(con==0)
                      {
                       goto slt_4;
                      }
               }
             else if(slt==2)
               {
                   cost=hrs*250;
                   printf("\n Car:Kia Seltos\n Duration:%d\n Cost:Ghc %.2f\n",hrs,cost);
                   printf("Press 1 to confirm rental 0r 0 to decline\n");
                   scanf("%d",&con);
                   if(con==1)
                      {
                       printf("Thank you for choosing us. Enjoy your ride\n");
                       goto login;
                      }
                   else if(con==0)
                      {
                       goto slt_4;
                      }
               }
             else if(slt==3)
               {
                   cost=hrs*250;
                   printf("\n Car:Hyundai Palisade\n Duration:%d\n Cost:Ghc %.2f\n",hrs,cost);
                   printf("Press 1 to confirm rental 0r 0 to decline\n");
                   scanf("%d",&con);
                   if(con==1)
                      {
                       printf("Thank you for choosing us. Enjoy your ride\n");
                       goto login;
                      }
                   else if(con==0)
                      {
                       goto slt_4;
                      }
               }
               else if(slt==4)
               {
                   goto options;
               }
             else
               {
                 printf("Invalid selection!!!\n");
                 goto slt_4;
               }
             break;
       case 5:
             slt_5:
             printf("Cars and their prices per hour\n");
             printf("List of car\n");
             printf(" \n 1. TATA Xenon Yodha-Ghc250\n 2. Isuzu D-Max-Ghc250\n 3. Mahindra Imperio-Ghc250\n 4. Back (Note enter only the associated number to car model)\n\n");
             printf("Select your car and enter number of hours\n");
             scanf("%d", &slt);
             scanf("%d", &hrs);
             if(slt==1)
               {
                   cost=hrs*250;
                   printf("\n Car:TATA Xenon Yodha\n Duration:%d\n Cost:Ghc %.2f\n",hrs,cost);
                   printf("Press 1 to confirm rental 0r 0 to decline\n");
                   scanf("%d",&con);
                   if(con==1)
                      {
                       printf("Thank you for choosing us. Enjoy your ride\n");
                       goto login;
                      }
                   else if(con==0)
                      {
                       goto slt_5;
                      }
               }
             else if(slt==2)
               {
                   cost=hrs*250;
                   printf("\n Car:Isuzu D-Max\n Duration:%d\n Cost:Ghc %.2f\n",hrs,cost);
                   printf("Press 1 to confirm rental 0r 0 to decline\n");
                   scanf("%d",&con);
                   if(con==1)
                      {
                       printf("Thank you for choosing us. Enjoy your ride\n");
                       goto login;
                      }
                   else if(con==0)
                      {
                       goto slt_5;
                      }
               }
             else if(slt==3)
               {
                   cost=hrs*250;
                   printf("\n Car:Mahindra Imperio\n Duration:%d\n Cost:Ghc %.2f\n",hrs,cost);
                   printf("Press 1 to confirm rental 0r 0 to decline\n");
                   scanf("%d",&con);
                   if(con==1)
                      {
                       printf("Thank you for choosing us. Enjoy your ride\n");
                       goto login;
                      }
                   else if(con==0)
                      {
                       goto slt_5;
                      }
               }
               else if(slt==4)
               {
                   goto options;
               }
             else
               {
                 printf("Invalid selection!!!\n");
                 goto slt_5;
               }
             break;
       case 6:
             slt_6:
             printf("Cars and their prices per hour\n");
             printf("List of car\n");
             printf(" \n 1. Chevrolet Corvette-Ghc300\n 2. Audi R8-Ghc300\n 3. Porsche Cayman-Ghc300\n 4. Back (Note enter only the associated number to car model)\n\n");
             printf("Select your car and enter number of hours\n");
             scanf("%d", &slt);
             scanf("%d", &hrs);
             if(slt==1)
               {
                   cost=hrs*300;
                   printf("\n Car:Chevrolet Corvette\n Duration:%d\n Cost:Ghc %.2f\n",hrs,cost);
                   printf("Press 1 to confirm rental 0r 0 to decline\n");
                   scanf("%d",&con);
                   if(con==1)
                      {
                       printf("Thank you for choosing us. Enjoy your ride\n");
                       goto login;
                      }
                   else if(con==0)
                      {
                       goto slt_6;
                      }
               }
             else if(slt==2)
               {
                   cost=hrs*300;
                   printf("\n Car:Audi R8\n Duration:%d\n Cost:Ghc %.2f\n",hrs,cost);
                   printf("Press 1 to confirm rental 0r 0 to decline\n");
                   scanf("%d",&con);
                   if(con==1)
                      {
                       printf("Thank you for choosing us. Enjoy your ride\n");
                       goto login;
                      }
                   else if(con==0)
                      {
                       goto slt_6;
                      }
               }
             else if(slt==3)
               {
                   cost=hrs*300;
                   printf("\n Car:Porsche Cayman\n Duration:%d\n Cost:Ghc %.2f\n",hrs,cost);
                   printf("Press 1 to confirm rental 0r 0 to decline\n");
                   scanf("%d",&con);
                   if(con==1)
                      {
                       printf("Thank you for choosing us. Enjoy your ride\n");
                       goto login;
                      }
                   else if(con==0)
                      {
                       goto slt_6;
                      }
               }
               else if(slt==4)
               {
                   goto options;
               }
             else
               {
                 printf("Invalid selection!!!\n");
                 goto slt_6;
               }
             break;
       case 7:
             slt_7:
             printf("Cars and their prices per hour\n");
             printf("List of car\n");
             printf(" \n 1. Porsche Boxster-Ghc300\n 2. BMW 2-Series-Ghc300\n 3. Chevrolet Camaro-Ghc300\n 4. Back (Note enter only the associated number to car model)\n\n");
             printf("Select your car and enter number of hours\n");
             scanf("%d", &slt);
             scanf("%d", &hrs);
             if(slt==1)
               {
                   cost=hrs*300;
                   printf("\n Car:Porsche Boxster\n Duration:%d\n Cost:Ghc %.2f\n",hrs,cost);
                   printf("Press 1 to confirm rental 0r 0 to decline\n");
                   scanf("%d",&con);
                   if(con==1)
                      {
                       printf("Thank you for choosing us. Enjoy your ride\n");
                       goto login;
                      }
                   else if(con==0)
                      {
                       goto slt_7;
                      }
               }
             else if(slt==2)
               {
                   cost=hrs*300;
                   printf("\n Car:BMW 2-Series\n Duration:%d\n Cost:Ghc %.2f\n",hrs,cost);
                   printf("Press 1 to confirm rental 0r 0 to decline\n");
                   scanf("%d",&con);
                   if(con==1)
                      {
                       printf("Thank you for choosing us. Enjoy your ride\n");
                       goto login;
                      }
                   else if(con==0)
                      {
                       goto slt_7;
                      }
               }
             else if(slt==3)
               {
                   cost=hrs*300;
                   printf("\n Car:Chevrolet Camaro\n Duration:%d\n Cost:Ghc %.2f\n",hrs,cost);
                   printf("Press 1 to confirm rental 0r 0 to decline\n");
                   scanf("%d",&con);
                   if(con==1)
                      {
                       printf("Thank you for choosing us. Enjoy your ride\n");
                       goto login;
                      }
                   else if(con==0)
                      {
                       goto slt_7;
                      }
               }
               else if(slt==4)
               {
                   goto options;
               }
             else
               {
                 printf("Invalid selection!!!\n");
                 goto slt_7;
               }
             break;
       case 8:
             slt_8:
             printf("Cars and their prices per hour\n");
             printf("List of car\n");
             printf(" \n 1.  BMW 2 Series-Ghc300\n 2. Jaguar F-Type-Ghc300\n 3.  Mercedes-Benz E-Class-Ghc300\n 4. Back (Note enter only the associated number to car model)\n\n");
             printf("Select your car and enter number of hours\n");
             scanf("%d", &slt);
             scanf("%d", &hrs);
             if(slt==1)
               {
                   cost=hrs*300;
                   printf("\n Car: BMW 2 Series\n Duration:%d\n Cost:Ghc %.2f\n",hrs,cost);
                   printf("Press 1 to confirm rental 0r 0 to decline\n");
                   scanf("%d",&con);
                   if(con==1)
                      {
                       printf("Thank you for choosing us. Enjoy your ride\n");
                       goto login;
                      }
                   else if(con==0)
                      {
                       goto slt_8;
                      }
               }
             else if(slt==2)
               {
                   cost=hrs*300;
                   printf("\n Car:Jaguar F-Type\n Duration:%d\n Cost:Ghc %.2f\n",hrs,cost);
                   printf("Press 1 to confirm rental 0r 0 to decline\n");
                   scanf("%d",&con);
                   if(con==1)
                      {
                       printf("Thank you for choosing us. Enjoy your ride\n");
                       goto login;
                      }
                   else if(con==0)
                      {
                       goto slt_8;
                      }
               }
             else if(slt==3)
               {
                   cost=hrs*300;
                   printf("\n Car: Mercedes-Benz E-Class\n Duration:%d\n Cost:Ghc %.2f\n",hrs,cost);
                   printf("Press 1 to confirm rental 0r 0 to decline\n");
                   scanf("%d",&con);
                   if(con==1)
                      {
                       printf("Thank you for choosing us. Enjoy your ride\n");
                       goto login;
                      }
                   else if(con==0)
                      {
                       goto slt_8;
                      }
               }
               else if(slt==4)
               {
                   goto options;
               }
             else
               {
                 printf("Invalid selection!!!\n");
                 goto slt_8;
               }
             break;
       case 9:
             slt_9:
             printf("Cars and their prices per hour\n");
             printf("List of car\n");
             printf(" \n 1.  Standard size Limo-Ghc350\n 2. Back (Note enter only the associated number to car model)\n\n");
             printf("Select your car and enter number of hours\n");
             scanf("%d", &slt);
             scanf("%d", &hrs);
             if(slt==1)
               {
                   cost=hrs*350;
                   printf("\n Car:Standard size Limo\n Duration:%d\n Cost:Ghc %.2f\n",hrs,cost);
                   printf("Press 1 to confirm rental 0r 0 to decline\n");
                   scanf("%d",&con);
                   if(con==1)
                      {
                       printf("Thank you for choosing us. Enjoy your ride\n");
                       goto login;
                      }
                   else if(con==0)
                      {
                       goto slt_9;
                      }
               }
             else if(slt==2)
             {
                 goto options;
             }
             else
               {
                 printf("Invalid selection!!!\n");
                 goto slt_9;
               }
             break;
       case 10:
        goto register1;
        break;
       case 0:
           printf("\n\n Goodbye, Have a nice day and come back soon");
           break;
       default:
        goto options;
    }

    return 0;
}
