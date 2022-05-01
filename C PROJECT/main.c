#include <stdio.h>
#include <stdlib.h>

int main()
{
    char person_name[20];
    double person_contact;
    int decide;
    int period_of_stay=0;
    int hotel_room_type=0;
    int hotel_room_number=0;
    int conference_room_type;
    int conference_room_number;
    float total;
    float grand_hall=500.00;
    float pleasure_garden=400.00;
    int duration;
    int other_program_number,other_program_time,facility;
    int other_program_price=0;
    int program_price=0;
    float total_cost;
    float basic_room=350.00,executive_room=700.00,VIP_room=1500.00;
    system("color 3F");
    system("title GROUP 29 RESORT");
    printf(".............HELLO,WELCOME TO GROUP 29 RESORT..............\n\n");
    printf(" Please enter your following details.\n ");
    printf(" Your full name:  \n\n");
    gets(person_name);
    printf("\nYour contact (with country code e.g. +233XXXXXXXXX):  \n\n");
    scanf("+%d",&person_contact);
   main_menu:
        system("cls");
    printf(" HI %s,\n WHAT CAN WE OFFER YOU? \n\n",person_name);
     printf("\n 1.Book a room\n 2.Book an Event/Program\n 3.Show my details\n 4.check out\n 5.About us.\n 6. Exit\n\n");
      scanf("%d",&decide);
      system("cls");
 switch(decide)
 {
     label10:
 case 1:

 type_of_room:
 printf(" WHAT TYPE OF ROOM WOULD YOU LIKE TO HAVE? \n\n");
 printf(" 1. Basic room, GHc%.2f per night.\n 2. Executive room, GHc%.2f per night.\n 3. VIP room, GHc%.2f per night.\n 0. Main menu.\n\n",basic_room,executive_room,VIP_room);
 scanf("%d",&hotel_room_type);
  printf(" How many nights would you like to stay here?.......\n");
 scanf("%d",&period_of_stay);
 system("cls");
 switch(hotel_room_type)
 {
 case 1:
    total=basic_room*period_of_stay;
    basicroom:
    printf(" Kindly select your preferred room's number. 101, 102, 103, 104, 105, 106, 107, 108, 109, 110. :  \n\n");
    scanf("%d",&hotel_room_number);
    system("cls");
    if(hotel_room_number>100 && hotel_room_number<111)
        {
    printf(" Room %d comes with a standard double bed, air conditioning, 32 inch curved television,\n shower with a heater and free Wi-Fi. \n\n",hotel_room_number );
    printf(" You have successfully booked this room for %d nights.  Enjoy your stay!!!\n\n",period_of_stay);
    goto exit;
    break;}
    else{
        printf("Incorrect input\n\n");
        goto basicroom;
    }
    break;

 case 2:
     total=executive_room*period_of_stay;
     executiveroom:
     printf(" Kindly select your preferred room's number. 201, 202, 203, 204, 205, 206, 207, 208, 209, 210. :  \n\n");
    scanf("%d",&hotel_room_number);
    system("cls");
    if(hotel_room_number>200 && hotel_room_number<211){
    printf(" Room %d comes with an extra wide double bed with heated blankets, air conditioning, 54 inch curved television,\n jacuzzi and shower with a heater,WiFi and an Italian leather duo couch. \n\n",hotel_room_number );
    printf(" You have successfully booked this room for %d nights.  Enjoy your stay!!!\n\n",period_of_stay);
    goto exit;
    break;}
    else{
        printf("Incorrect input\n\n");
        goto executiveroom;
    }
    break;
 case 3:
     total=VIP_room*period_of_stay;
     VIProom:
      printf(" Kindly select your preferred room's number. 301, 302, 303, 304, 305, 306, 307, 308, 309, 310. :  \n\n");
    scanf("%d",&hotel_room_number);
    system("cls");
    if(hotel_room_number>300&&hotel_room_number<311){
    printf(" Room %d comes with a king bed with heated blankets, air conditioning,\n 54 inch curved television with a sony sound system,\n jacuzzi and shower with a heater,WiFi, an Italian leather trio couch. \n star lights, breakfast in bed and the best view across the scenic environment. \n\n",hotel_room_number );
    printf(" You have successfully booked this room for %d nights.  Enjoy your stay!!!\n\n",period_of_stay);
    goto exit;
    break;}
    else{
        printf("Incorrect input\n\n");
        goto VIProom;
    }break;
 case 0:
    goto main_menu;
    break;
    }
    system("cls");
    label5:
 case 2:
     facility:
     printf(" WHERE WOULD YOU LIKE TO BOOK FOR YOUR EVENT?\n");
     printf(" 1. Conference Room.\n 2. Grand Hall.\n 3. Pleasure Garden.\n 5.Main menu.\n");
     scanf(" %d",&facility);
     system("cls");
     switch(facility)
     {
     case 1:
         label7:
        printf(" WHAT TYPE OF CONFERENCE ROOM WOULD YOU WANT?\n");
        printf(" 1. 20-seater, 150 cedis per day.\n 2. 50-seater, 200 cedis per day.\n 3. 75-seater, 250 cedis per day.\n 4. 100-seater, 300 cedis per day.\n 5. 150-seater, 400 cedis per day.\n 6. Move to previous menu\n");
        scanf("%d",&conference_room_type);
        system("cls");
        float conference1=150,conference2=200,conference3=250,conference4=300,conference5=400;
        switch(conference_room_type)
        {
        case 1:
             printf(" For how many days would you like to acquire the conference room?    \n");
            scanf("%d",&duration);
            system("cls");
            total=conference1*duration;
            printf(" You have successfully booked the 20-seater conference room for %d day(s). Enjoy your stay!!!\n",duration);
            printf(" This will amount to GHc%.2f.\n\n",total_cost);
            getch();
            goto main_menu;
            break;
        case 2:
             printf(" For how many days would you like to acquire the conference room?    \n");
            scanf("%d",&duration);
            total=conference2*duration;
            printf(" You have successfully booked the 50-seater conference room for %d day(s). Enjoy your stay!!!\n",duration);
             system("cls");
            printf(" This will amount to GHc%.2f.\n\n",total_cost);
            getch();
            goto main_menu;
            break;
        case 3:
             printf(" For how many days would you like to acquire the conference room?    \n");
             scanf("%d",&duration);
             system("cls");
             total=conference3*duration;
             printf(" You have successfully booked the 75-seater conference room for %d day(s). Enjoy your stay!!!\n",duration);
             printf(" This will amount to GHc%.2f.\n\n",total_cost);
             getchar();
            goto main_menu;
            break;
        case 4:
             printf(" For how many days would you like to acquire the conference room?    \n");
             scanf("%d",&duration);
             system("cls");
             total=conference4*duration;
             printf(" You have successfully booked the 100-seater conference room for %d day(s). Enjoy your stay!!!\n",duration);
             printf(" This will amount to GHc%.2f.\n\n",total_cost);
             getchar();
            goto main_menu;
            break;
        case 5:
             printf(" For how many days would you like to acquire the conference room?    \n");
             scanf("%d",&duration);
             system("cls");
             total=conference5*duration;
             printf(" You have successfully booked the 150-seater conference room for %d day(s). Enjoy your stay!!!\n",duration);
             printf(" This will amount to GHc%.2f.\n\n",total_cost);
             getchar();
            goto main_menu;
            break;
        case 6:
            goto main_menu;
            break;
        default:
            printf(" Incorrect input\n\n");
            goto label7;

        }
        system("cls");
    case 2:
        printf("\n");
        printf("\n");
        system("cls");
        printf(" Number of days for reservation?(Grand Hall)\n");
        scanf("%d",&duration);
        total=grand_hall*duration;
        system("cls");
        printf(" You have successfully booked the party grounds for %d day(s).\n Enjoy your stay!!!\n",duration);
        printf(" This will amount to  GHc%.2f.\n\n",total);
        goto facility;
        break;
    case 3:
        system("cls");
        printf(" Number of days for reservation(Pleasure Garden)\n");
        scanf("%d",&duration);
        total=pleasure_garden*duration;
        system("cls");
        printf(" You have successfully booked the our exquisite Pleasure garden for %d day(s).\n Enjoy your stay!!!\n",duration);
        printf(" This will amount to  GHc%.2f.\n\n",total);
        goto facility;
        break;
    case 4:

        break;
    case 5:
        goto main_menu;
        break;
    default:
        printf(" Incorrect input");
        goto facility;
        break;


     }
     system("cls");
    case 3:
       /* printf(" Your details are as follows.............\n");
        printf(" Name: %s \n",person_name);
        printf(" Contact: +%d \n",person_contact);

        if(hotel_room_type==1)
        {
            printf(" You have booked a Basic hotel room, room number %d.\n",hotel_room_number);
            }
        if(hotel_room_type==2)
        {
            printf(" You have booked an Executive room, room number %d.\n",hotel_room_number);
            }
        if(hotel_room_type==3)
        {
            printf(" You have booked a VIP room, room number %d.\n",hotel_room_number);
            }

        if(conference_room_type==2)
         {
             printf(" You have booked a 25-seater conference room, for %d day(s).\n",duration);
         }
         if(conference_room_type==3)
         {
             printf(" You have booked a 100-seater conference room, for %d day(s). This amounted to %.2f.\n",duration,total);
         }
         if(conference_room_type==4)
         {
             printf(" You have booked a 250-seater conference room, for %d day(s). This amounted to %.2f.\n",duration,total);
         }
         if(conference_room_type==5)
         {
             printf(" You have booked a 500-seater conference room, for %d day(s).This amounted to GHc%.2f.\n",duration,total);
         }

         if(total>0)
         {
             printf(" You have booked the party grounds, for %d day(s). This amounted to GHc%.2f.\n",duration,total);
         }
          if(total>0)
         {
             printf(" You have booked the wedding grounds, for %d day(s). This amounted to %d.00cedis.\n",duration,total);
         }
          if(other_program_price>0)
         {
             printf(" You have booked the programs venue, for %d day(s). This amounted to %d.00.\n",other_program_time,other_program_price);
         }
         printf(" Your total bill is %.2f.\n",total_cost);



         goto main_menu;



*/
    case 4:
        printf(" ..............Thank You...............\n\n");
        goto main_menu;

    case 5:
        label11:
        printf(" Group 29 Resort.\n An exquisite 5-star resort. .\n");
        printf(" Located in the heart of The Garden City, Kumasi.\n");
        printf(" We aim at providing the maximum level of comfort, with our ultra modern facilities such as;\n Luxurious rooms.\n Local and continental dish diner.\n Gym.\n Swimming pool.\n Tennis court.\n Spa.\n Casino.\n");
        printf(" Look no further than Group 29 Resort for the top-most level of comfort.\n\n");
        printf(" 1.Look at the features of our rooms\n 2. Book a room.\n 3. Book an event.\n0.Go back to main menu\n");
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
        }
        if(response==2)
        {
            goto label10;
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
        printf("Our Basic room features the following");
        break;
    case 6:
         break;
        }
total_cost+=total;
    exit:
            printf(" .............Thank you for patronizing Group 29 Resort. Come back again............ \n");
                return 0;
        }
