#include<stdio.h>
#include<stdlib.h>

int main()
{
 /*function declarations*/
/*char *fname;
char *lname;
char *mname;
int gender;
char *town[50],region[20],country[30];
char *email_id[30],*domain[20];
char *nationality[30];
int dd,mm,yyyy;
int roomno,momonum;
int days,noofrooms,pay;
float price1,price2,price3,price4,price5,price6,price7,price8,price9,price10,total;
price1=75;
price2=145;
price3=250;
price4=250;
price5=200;
price6=150;
printf(".......................BREDY LUXURY HOTEL.......................\n");
printf("Your home away from home\n");
printf("Please enter your details to move to our main page\n");
printf("PLEASE ENTER YOUR FULL NAME:\n");
printf("LAST NAME: ");
scanf("%s",&lname);
printf("FIRST NAME: ");
scanf("%s",&fname);
printf("OTHER NAMES IF APPLICABLE: ");
scanf("%s",&mname);
gender:
printf("\nGENDER (please enter 1 for male and 2 for female):\n");
scanf("%i",&gender);
if (gender==1 || gender==2)
{
}
else
{
    printf("Wrong Input");
    goto gender;
}
printf("\nADDRESS (town/city,region/state,country):\n ");
scanf("%s,%s,%s",&town,&region,&country);
printf("\nNATIONALITY: ");
scanf("%s",&nationality);
printf("\nEMAIL ADDRESS (Username@gmail.com): ");
scanf("%s@%s",&email_id,&domain);

 if (gender==1)
 {
     printf("\nWELCOME Master. %s %s %s",lname,fname,mname);
 }
 if (gender==2)
 {
     printf("WELCOME Miss. %s %s %s",lname,fname,mname);
 }
 printf(" to our homepage.\n\n");
 printf("Before you proceed we would like to take you on a little tour, to read our ABOUT & SERVICES\n");
 printf("Enter 1 to proceed or 2 to skip\n");
 int dec1,dec2,dec3,dec4,dec5,dec6,dec7,dec8,dec9,dec10;//decision variable 1
 scanf("%i",&dec1);
 if (dec1==1)
 {
    goto Aboutandservices;
 }
if (dec1==2)
 {
 goto continue1;
 }
 Aboutandservices:
     system("cls");
printf("************************************************************************************************************************");
printf("\n\n\tWelcome to BREDY Hostel |your home away from home|\n\tWe offer you the best of accommodation.\n\tWe offer grades of room types namely");
printf(" Basic, Executive and Luxury. \n\t");
printf("Press any key to continue\n");
getch();
system("cls");
printf("************************************************************************************************************************");
printf("\n\n\tWe also have 3 conference rooms of holding capacities 10, 20 and 50 people respectively.\n");
printf("\tWe also have a Grand hall with holding capacity of 500 people for any event of your choice. \n");
printf("");
 continue1:
     system("cls");
     printf("\nWhat can we do for you please");
     printf("\n1. Reserve a room");
     printf("\n2. Book an event/programme");
     printf("\n3. Exit\n\n");
     printf("Enter your choice:  ");
     scanf("%i",&dec2);

     switch(dec2)
     {
     case 1:
         system("cls");
        printf("\n\n\tWhich type of room will you like to reserve\n");
        printf("\t1. Basic (priced at GHc%g per night)\n",price1);
        printf("\t2. Executive (priced at GHc%g per night)\n",price2);
        printf("\t3. Luxury (priced at GHc%g per night)\n\t",price3);
        scanf("%i",&dec3);
        goto form1;
        break;
     case 2:
        system("cls");
        printf("\n\n\tWhich type of room will you like to reserve for your event/programme\n");
        printf("\n1. Conference Room");
        printf("\n2. Grand Hall\n\n");
        printf("Enter your choice:  ");
        scanf("%i",&dec4);
        goto form2;
        break;
     }



     form1:
         system("cls");
         printf("ACCOMMODATION DETAILS\n");
         printf("Number of rooms to be booked:  \n");
         scanf("%i",&noofrooms);
         printf("Date to resume (e.g. 24/07/2021):  \n");
         scanf("%d/%d/%d",&dd,&mm,&yyyy);
         printf("Number of days to spend:  \n");
         scanf("%i",&days);
         if (dec2==1 && dec3==1)
         {
             total=price1*noofrooms*days;
             printf("Total cost of stay is GHc%g", total);
         }
         if (dec2==1 && dec3==2)
         {
             total=price2*noofrooms*days;
             printf("Total cost of stay is GHc%g", total);
         }
         if (dec2==1 && dec3==3)
         {
             total=price3*noofrooms*days;
             printf("Total cost of stay is GHc%g", total);
             printf(" and you'll resume on %d/%d/%d\n",dd,mm,yyyy);
         }
         goto payment;
    form2:
        printf("RESERVATION DETAILS");
         printf("Type of room to be booked is:  ");
         printf("Date of Event/Programme (e.g. 24/07/2021):  ");
         scanf("%d/%d/%d",&dd,&mm,&yyyy);
         printf("Number of days to spend:  ");
         scanf("%i",&days);
         if (dec2==2 && dec4==1)
         {
             total=price4*days;
             printf("Total cost of reservation is GHc%g\n", total);
         }
         payment:
             printf("Select Payment method and confirm to approve your choice:  ");
             printf("\t1. Mobile Money");
             printf("\t1. Credit Card");
             scanf("%d",&pay);
             if (pay==1)
             {
                 printf("\t1. Enter Mobile money number with country(+233xxxxxxxxx)");
                 scanf("+%i",&momonum);
             }
     printf("\tbyebye");*/
 char credit[1000];
 scanf("%s",credit);
 printf("%s",credit);
}

