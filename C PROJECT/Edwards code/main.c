#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
//Function declaration
int payment();
void createacc();
void login();
//Global variables Declaration
    char fname[100],mname[100],lname[100];
    char person_contact[50],nationality[70];
    char password[50];
    char town[100],region[100],country[100];
    char email_id[100];
    char login_id[100],login_pass[100];
    int i;
int main()
{
   /* //Local Variables Declaration
    int decide;
    int period_of_stay=0;
    int hotel_room_type=0;
    int hotel_room_number=0;
    int conference_room_type;
    float total;
    float grand_hall=500.00;
    float pleasure_garden=400.00;
    int duration;
    int facility;
    float total_cost;
    float basic_room=350.00,executive_room=700.00,VIP_room=1500.00;
    int a;
    system("color 3F");
    system("title GROUP 29 RESORT");
    printf(".............HELLO,WELCOME TO GROUP 29 RESORT..............\n\n");
    createacc();
    login();
   main_menu:
        system("cls");
    printf(" HI, WELCOME TO GROUP 29 RESORT,\n WHAT CAN WE OFFER YOU? \n\n");
     printf("\n 1.Book a room\n 2.Book an Event/Program\n 3.Show my details\n 4.check out\n 5.About us.\n 6. Exit\n\n");
      scanf("%d",&decide);
      system("cls");
 switch(decide)
 {
 case 1:
    //ROOOM BOOKING
    book_room:
 type_of_room:
 printf(" WHAT TYPE OF ROOM WOULD YOU LIKE TO HAVE? \n\n");
 printf(" 1. Basic room, GHc%.2f per night.\n 2. Executive room, GHc%.2f per night.\n 3. VIP room, GHc%.2f per night.\n 0. Main menu.\n\n",basic_room,executive_room,VIP_room);
 scanf("%d",&hotel_room_type);

 //BASIC ROOM BOOKINGS
 switch(hotel_room_type)
 {
 case 1:
       printf(" How many nights would you like to stay here?.......\n");
 scanf("%d",&period_of_stay);
    total=basic_room*period_of_stay;
    total_cost+=total;
    basicroom:
    printf(" Kindly select your preferred room's number. 101, 102, 103, 104, 105, 106, 107, 108, 109, 110. :  \n\n");
    scanf("%d",&hotel_room_number);
    system("cls");
    if(hotel_room_number>100 && hotel_room_number<111)
        {
    printf(" Our Basic Room comes with a standard double bed, air conditioning, 32 inch curved television,\n shower with a heater and free Wi-Fi. \n\n");
            printf("Total cost of room chosen is GHc%.2f.\n\n",total);
            a=payment();
            switch(a)
            {
                case 1:
                printf("Payment success");
                break;
                case 2:
                printf("Reservation Canceled\n");
                printf("Press enter to go to Main Menu\n");
                getch();
                goto main_menu;
                break;
            }
    printf(" You have successfully booked this room %d for %d nights. Enjoy your stay!!!\n\n",hotel_room_number,period_of_stay);
    printf("Press enter to go to Main Menu\n");
    getch();
    goto main_menu;
        }
    else{
        printf("Incorrect input\n\n");
        goto basicroom;
    }
    break;
 case 2:
     //EXECUTIVE ROOM BOOKINGS
       printf(" How many nights would you like to stay here?.......\n");
 scanf("%d",&period_of_stay);
     total=executive_room*period_of_stay;
     total_cost+=total;
     executiveroom:
     printf(" Kindly select your preferred room's number. 201, 202, 203, 204, 205, 206, 207, 208, 209, 210. :  \n\n");
    scanf("%d",&hotel_room_number);

    system("cls");
    if(hotel_room_number>200 && hotel_room_number<211){
    printf(" Our Executive Room comes with an extra wide double bed with heated blankets, air conditioning, 54 inch curved television,\n jacuzzi and shower with a heater,Wi-Fi and an Italian leather duo couch. \n\n");
    printf("Total cost of room chosen is GHc%.2f.\n\n",total);
    a=payment();
    switch(a)
    {
        case 1:
        printf("Payment success");
        break;
        case 2:
        printf("Reservation Canceled\n");
        printf("Press enter to go to Main Menu\n");
        getch();
        goto main_menu;
        break;
    }
    printf(" You have successfully booked Room %d for %d nights.  Enjoy your stay!!!\n\n",hotel_room_number,period_of_stay);
    printf("Press enter to go to Main Menu\n");
    getch();
    goto main_menu;
    break;}
    else{
        printf("Incorrect input\n\n");
        goto executiveroom;
    }
    goto main_menu;
    break;
 case 3:
     //VIP ROOM BOOKING
       printf(" How many nights would you like to stay here?.......\n");
 scanf("%d",&period_of_stay);
     total=VIP_room*period_of_stay;
     total_cost+=total;
     VIProom:
      printf(" Kindly select your preferred room's number. 301, 302, 303, 304, 305, 306, 307, 308, 309, 310. :  \n\n");
    scanf("%d",&hotel_room_number);
    system("cls");
    if(hotel_room_number>300&&hotel_room_number<311){
    printf(" Our VIP room comes with a king bed with heated blankets, air conditioning, 54 inch curved television with a Sony sound system,\na jacuzzi and shower with a heater,Wi-Fi, an Italian leather trio couch. \n star lights, breakfast in bed and the best view across the scenic environment. \n\n");
    printf("Total cost of room chosen is GHc%.2f.\n\n",total);
    a=payment();
    switch(a)
            {
                case 1:
                printf("Payment success");
                break;
                case 2:
                printf("Reservation Canceled\n");
                printf("Press enter to go to Main Menu\n");
                getch();
                goto main_menu;
                break;
            }
    printf(" You have successfully booked Room %d for %d nights.  Enjoy your stay!!!\n\n",hotel_room_number,period_of_stay);
    printf("Press enter to go to Main Menu\n");
    getch();
    goto main_menu;
    break;}
    else{
        printf("Incorrect input\n\n");
        goto VIProom;
    }break;
 case 0:
    goto main_menu;
    break;
 default:
    goto type_of_room;
    break;
    }
 case 2:
    //BOOK AN EVENT
     facility:
    system("cls");
     printf(" WHERE WOULD YOU LIKE TO BOOK FOR YOUR EVENT?\n");
     printf(" 1. Conference Room.\n 2. Grand Hall.\n 3. Pleasure Garden.\n 0.Main menu.\n");
     scanf(" %d",&facility);
     system("cls");
     float conference1=150.00,conference2=200.00,conference3=250.00,conference4=300.00,conference5=400.00;
     switch(facility)
     {
     case 1:
        //CONFERENCE ROOM RESERVATION
         label7:
        printf(" WHAT TYPE OF CONFERENCE ROOM WOULD YOU WANT?\n");
        printf(" 1. 20-seater, GHc%.2f per day.\n 2. 50-seater, GHc%.2f per day.\n 3. 75-seater, GHc%.2f per day.\n 4. 100-seater, GHc%.2f per day.\n 5. 150-seater, GHc%.2f per day.\n 6. Move to previous menu\n",conference1,conference2,conference3,conference4,conference5);
        scanf("%d",&conference_room_type);
        system("cls");
        switch(conference_room_type)
        {
        case 1:
             printf(" For how many days would you like to acquire the conference room?    \n");
            scanf("%d",&duration);
            system("cls");
            total=conference1*duration;
            total_cost+=total;
            printf(" This will amount to GHc%.2f.\n\n",total);
            a=payment();
                switch(a)
            {
                case 1:
                printf("Payment success");
                break;
                case 2:
                printf("Reservation Canceled\n");
                printf("Press enter to go to Main Menu\n");
                getch();
                goto main_menu;
                break;
            }
            printf(" You have successfully booked Our 20-seater conference room(Room C1) for %d day(s). Enjoy your stay!!!\n",duration);
            printf("Press enter to go to Main Menu\n");
            getch();
            goto main_menu;
            break;
        case 2:
             printf(" For how many days would you like to acquire the conference room?    \n");
            scanf("%d",&duration);
            total=conference2*duration;
            total_cost+=total;
            printf(" This will amount to  GHc%.2f.\n\n",total);
            a=payment();
                switch(a)
            {
                case 1:
                printf("Payment success");
                break;
                case 2:
                printf("Reservation Canceled\n");
                printf("Press enter to go to Main Menu\n");
                getch();
                goto main_menu;
                break;
            }
            printf(" You have successfully booked our 50-seater conference room(Room C2) for %d day(s). Enjoy your stay!!!\n",duration);
            printf("Press enter to go to Main Menu\n");
            getch();
            goto main_menu;
            break;
        case 3:
             printf(" For how many days would you like to acquire the conference room?    \n");
             scanf("%d",&duration);
             system("cls");
             total=conference3*duration;
             total_cost+=total;
             printf(" This will amount to  GHc%.2f.\n\n",total);
             a=payment();
                switch(a)
            {
                case 1:
                printf("Payment success");
                break;
                case 2:
                printf("Reservation Canceled\n");
                printf("Press enter to go to Main Menu\n");
                getch();
                goto main_menu;
                break;
            }
             printf(" You have successfully booked our 75-seater conference room(Room C3) for %d day(s). Enjoy your stay!!!\n",duration);
             printf("Press enter to go to Main Menu\n");
            getch();
            goto main_menu;
            break;
        case 4:
             printf(" For how many days would you like to acquire the conference room?    \n");
             scanf("%d",&duration);
             system("cls");
             total=conference4*duration;
             total_cost+=total;
             printf(" This will amount to  GHc%.2f.\n\n",total);
             a=payment();
                switch(a)
            {
                case 1:
                printf("Payment success");
                break;
                case 2:
                printf("Reservation Canceled\n");
                printf("Press enter to go to Main Menu\n");
                getch();
                goto main_menu;
                break;
            }
             printf(" You have successfully booked our 100-seater conference room(Room C4) for %d day(s). Enjoy your stay!!!\n",duration);
             printf("Press enter to go to Main Menu\n");
             getch();
             goto main_menu;
            break;
        case 5:
             printf(" For how many days would you like to acquire the conference room?    \n");
             scanf("%d",&duration);
             system("cls");
             total=conference5*duration;
             total_cost+=total;
             printf(" This will amount to  GHc%.2f.\n\n",total);
             a=payment();
                switch(a)
            {
                case 1:
                printf("Payment success");
                break;
                case 2:
                printf("Reservation Canceled\n");
                printf("Press enter to go to Main Menu\n");
                getch();
                goto main_menu;
                break;
            }
             printf(" You have successfully booked our 150-seater conference room(Room C5) for %d day(s). Enjoy your stay!!!\n",duration);
             printf("Press enter to go to Main Menu\n");
            getch();
            goto main_menu;
            break;
        case 6:
            goto facility;
            break;
        default:
            printf(" Incorrect input\n\n");
            goto label7;

        }
        system("cls");
    case 2:
    //GRAND HALL RESERVATION
        printf("\n");
        printf("\n");
        system("cls");
        printf(" Number of days for reservation?(Grand Hall)\n");
        scanf("%d",&duration);
        total=grand_hall*duration;
        total_cost+=total;
        printf(" This will amount to  GHc%.2f.\n\n",total);
        system("cls");
        a=payment();
                switch(a)
            {
                case 1:
                printf("Payment success");
                break;
                case 2:
                printf("Reservation Canceled\n");
                printf("Press enter to go to Main Menu\n");
                getch();
                goto main_menu;
                break;
            }
        printf(" You have successfully booked our Grand Hall for %d day(s).\n Enjoy your stay!!!\n",duration);
        printf("Press enter to go to Main Menu\n");
        getch();
        goto main_menu;
        break;
    case 3:
        //PLEASURE GARDEN BOOKINGS
        system("cls");
        printf(" Number of days for reservation(Pleasure Garden)\n");
        scanf("%d",&duration);
        total=pleasure_garden*duration;
        total_cost+=total;
        printf(" This will amount to  GHc%.2f.\n\n",total);
        system("cls");
        a=payment();
                switch(a)
            {
                case 1:
                printf("Payment success");
                break;
                case 2:
                printf("Reservation Canceled\n");
                printf("Press enter to go to Main Menu\n");
                getch();
                goto main_menu;
                break;
            }
        printf(" You have successfully booked our exquisite Pleasure garden for %d day(s).\n Enjoy your stay!!!\n",duration);
        printf("Press enter to go to Main Menu\n");
        getch();
        goto main_menu;
        break;
    case 0:
        goto main_menu;
        break;
    default:
        printf(" Incorrect input");
        goto facility;
        break;


     }
     system("cls");
    case 3:
        //USER DETAILS
       printf(" Your details are as follows.............\n");
       if (strcmp(mname,"0")==0)
       {
        printf(" Name: %s %s \n\t",lname,fname);
       }
        else if (!strcmp(mname,"0")==0)
        {
         printf(" Name: %s %s %s \nt",lname,fname,mname);
        }
        printf(" MOBILE NUMBER: %s\n\t",person_contact);
        printf("ADDRESS:\n\t %s, %s , %s\n",town,region,country);
        printf("\nNATIONALITY:\n\t%s\n",nationality);
        printf("\nYour total cost is GHc%.2f\n",total_cost);
        printf("Press Enter to return to Main Menu");
        getch();
        goto main_menu;
        break;
    case 4:
        //USER CHECKOUT
        printf(" ..............Hope you enjoyed your stay\n...............\n\n");
        goto exit;

    case 5:
        //ABOUT HOSTEL
        label11:
        printf(" Group 29 Resort.\n An exquisite 5-star resort. .\n");
        printf(" Located in the heart of The Garden City, Kumasi.\n");
        printf(" We aim at providing the maximum level of comfort, with our ultra modern facilities such as;\n Luxurious rooms.\n Local and continental dish diner.\n Gym.\n Swimming pool.\n Tennis court.\n Spa.\n Casino.\n");
        printf(" Look no further than Group 29 Resort for the top-most level of comfort.\n\n");
        printf("Enter \n 1. To look at the features of our rooms\n 2. Book a room.\n 3. Book an event.\n0. Go back to main menu\n");
        int response;
        scanf("%d",&response);
         system("cls");
        if(response==0)
        {
            goto main_menu;
            break;
        }
        if(response==1)
        {
            goto features;
            break;
        }
        if(response==2)
        {
            goto book_room;
            break;
        }
        if(response==3)
        {
            goto facility;
            break;
        }
        else
        {
            printf(" Incorrect input.\n");
            goto label11;
             break;
        }
    features:
        printf("Our Basic room features the following\n");
        printf("1. A Standard double bed \n2. Full air conditioning\n3. A 32 inch curved television\n4. Shower with a heater and\n5. Free Wi-Fi.  ");
        printf("\n\nOur executive room features the following\n");
        printf("1. An extra wide double bed with heated blankets\n2. Full air conditioning\n3. 54 inch curved television");
        printf("\n6. An Italian leather duo couch\n7. A jacuzzi and shower with a heater and\n8. Free Wi-Fi.");
        printf("\n\nOur VIP room features the following\n");
        printf("1. A king bed with heated blankets\n2. Full air conditioning\n3. 54 inch curved television with a Sony 3D sound system\n4.Free Wi-Fi");
        printf("\n5. A Jacuzzi and shower with a heater\n6. An Italian leather trio couch\n7. Star lights\n8. Breakfast in bed and the best view across the scenic environment.");
        printf("\n\nPress Enter to continue");
        getch();
        printf("\n\nWe have 5 Conference rooms for your meetings, programs and more\n");
        printf("These are:\n 1. A 20-seater conference room going for a cool GHc%.2f per day.",conference1);
        printf("\n 2. 50-seater conference room, going for a cool GHc%.2f per day.",conference2);
        printf("\n 3. 75-seater conference room, going for a cool GHc%.2f per day.",conference3);
        printf("\n 4. 100-seater conference room going for a cool GHc%.2f per day.",conference4);
        printf("\n 5. 150-seater conference room going for a cool GHc%.2f per day.",conference5);
        printf("\n\nPress Enter to continue");
        getch();
        printf("\n\nWe also have a Grand hall and a Pleasure garden");
        printf("\n Our Grand hall cost GHc%.2f per day and\n Our Pleasure garden cost GHc%.2f per day",grand_hall,pleasure_garden);
        printf("Thank you, Hope you choose our services for your top most comfort");
        printf("\n\nPress Enter to go to Main menu");
        getch();
        goto main_menu;
        break;

    case 6:
         break;
    default:
        printf("Wrong Input");
        printf("Press enter to try again\n");
        getch();
        goto main_menu;
        }
    exit:
            printf(" .............Thank you for patronizing Group 29 Resort. Come back again............ \n");*/



            //Escape sequence
            printf("\t\tHello My Friends");
            printf("\005 welcome to GFG");
    return 0;
}



//Payment Function Definition
    int payment()
    {
        int pay_method,confirm;
        char accnum[1000];
        pay:
            system("cls");
            printf("Choose method of payment");
            printf("\n1. Mobile money\n2. Credit Card\n");
            scanf("%i",&pay_method);
        switch (pay_method)
        {
        case 1:
                printf("Enter mobile money account number\n");
                scanf("%s",accnum);
                break;
        case 2:

                printf("Enter Credit Card number\n");
                scanf("%s",accnum);
                break;
        default:
            printf("Wrong Input\n");
            goto pay;
            }
            printf("Enter \n1. To confirm payment \n2. to cancel\n");
            scanf("%i",&confirm);
            return (confirm);
    }

    //Createacc Function Definition
    void createacc()
    {
    printf(" Please enter your following details.\n\n ");
    printf(" FULL NAME  \n");
    printf("\t LAST NAME:  \n\t\t");
    scanf("%s",lname);
    printf("\t FIRST NAME:  \n\t\t");
    scanf("%s",fname);
    printf("\t MIDDLE NAME: (Enter 0 if none)\n\t\t");
    scanf("%s",mname);
    printf("\nMOBILE NUMBER:  \n\n\t");
    scanf("%s",person_contact);
    printf("\nADDRESS\n ");
    printf("\n\tTOWN/CITY:\n\t\t ");
    scanf("%s",town);
    printf("\tREGION:\n\t\t");
    scanf("%s",region);
    printf("\tCOUNTRY:\n\t\t ");
    scanf("%s",country);
    printf("\nNATIONALITY: ");
    scanf("%s",nationality);
    printf("\nEMAIL ADDRESS (Username@gmail.com): ");
    scanf("%s",email_id);
    printf("\nPASSWORD(It must 8 characters):  \n\n");
    for(i=0;i<=7;i++)
    {
        password[i]=getch();
        printf("*");
    }
    system("cls");
    printf("\nAccount created successfully\n");
    printf("Press Enter to proceed");
    getch();
    return;
    }
// LOGIN FUNCTION DEFINITION
    void login()
    {
        login:
        system("cls");
        printf("Enter Your Login Details\nEmail Address:\n");
        scanf("%s",login_id);
        printf("Password:\n");
         for(i=0;i<=7;i++)
    {
        login_pass[i]=getch();
        printf("*");
    }
        if (strcmp(login_id,email_id)==0 && strcmp(login_pass,password)==0)
        {
            system("cls");
            printf("\n\nLogin successful\n Press Enter to continue");
            getch();
        }
        else
        {
            system("cls");
            printf("Wrong credentials\n Press Enter to try again");
            getch();
            goto login;
        }
    }
    /*
3032320	KONLAN, Yoeman
3032420	KONLANBIK, David Ninfandam
3032520	KORANTENG, Enoch Kofi
3032620	KORDAH, Retsu Kodjo
3032720	KRAPAH, Bless Elikem
*/
