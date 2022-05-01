#include<stdio.h> /*header files*/
#include<conio.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>
 /*function declarations*/
void begin();
void program();
void show_details();
void complaints_suggestions();
void book_room();
void mini_casino();
void GuessGame();
struct { /*structure that stores details of persons*/
char name[20];
char address[50];
char email_id[30];
char nationality[25];
int roomno;
char *roomtype;
int billprice;
char *program;
}person;
int main(){
person.roomno =0;
person.billprice =0;
person.program = "notchosen";
printf(".............WELCOME TO GHUMTEE RIVIERA RESTAURANT AND LODGE..............\n");
printf("Please enter your details before moving to the main page!\n");
printf("please enter your name:");
gets(person.name);
printf("enter your address:");
gets(person.address);
printf("enter your nationality:");
gets(person.nationality);
printf("enter your email_id:");
gets(person.email_id);
system("cls");
time_t timer = time(NULL);/*to get the present local time*/
begin();
return 0;
}
void begin(void){
int decide;
printf("\n-----------------------HOME PAGE--------------------------\n");
printf("\n HOW CAN WE HELP YOU?\n\n");
printf("\n1.Book a room\n2.Program\n3.mini casino\n4.show my details\n5.complaints or suggestions\n6.check out\n7.about us\n");
scanf("%d",&decide);
switch(decide)
{
case 1:
book_room();
break;
case 2:
program();
break;
/*case 3:
mini_casino();
break;
case 4:
show_details();
break;
case 5:
complaints_suggestions();
printf("Thank you for your valuable suggestions!\n");
begin();
break;*/
case 6:
printf("Visit again!");
printf("Thank you for trusting our service.\n");
break;
case 7:
printf("GHUMTEE RIVERA RESORT:\n");
printf(" A beautiful cosmopolitan destination for a picturesque natural scenario, a blend of Natural and Artificial effort located on the border of");
printf("Chitwan National park (A UNESCO World Heritage Site) allows you to enjoy the breeze of Rapti River flowing through the lap of Chitwan National Park.");
printf("Enjoying the spectacular sunset and its reflection on Rapti River along with grazing of deer on the bank by relaxing on our rugged cottages");
printf("is the memorable experience you could enjoy only at GHUMTEE RIVERA RESORT. \n");
printf("We would be more than happy to experience you Jungle Safari, canoe ride to Crocodile Breeding Farm and Ox-Cart ride.");
printf("Clean and Comfortable room, Hot and Cold Water facilities, beautiful garden, family environment, local food are our salient features to give you taste of our Nepalese Culture.");
printf("Satisfying you totally with our unique culture is our primary motto.\n");
begin();
break;
}
}
void book_room(void){
system("cls");
if(person.roomno == 0){
int type_of_rooms;
char ch,c;
ch="a";
printf("\nWhat type of room do u want to book?\n");
printf("\n1.Basic Room Rs 1000\n2.Medium room Rs 2000\n3.DELUXE ROOM Rs 3000\n4.I don't want to choose anything\n");
scanf("%d",&type_of_rooms);
fflush(stdin);
if(type_of_rooms==1){
printf("\nDo you accept this room?(y/n)\n");
fflush(stdin);
scanf("%c",&c);
if (c=='y'){
system("cls");
printf("\nYou choose basic room. Enjoy your stay\n");
printf("your room no is 121");
person.roomno = 121;
person.roomtype = "basic";
person.billprice += 1000;
begin();
}
else
begin();
}
if(type_of_rooms==2){
printf("\nDo you accept this room?(y/n)\n");
scanf("%c",&c);
if(c=='y'){
system("cls");
printf("\nYou choose medium room. Enjoy your stay\n");
printf("your room no is 212");
person.billprice += 2000;
person.roomno = 212;
person.roomtype = "medium";
begin();}
else
begin();
}
if(type_of_rooms==3){
printf("\nDo u accept this room?(y/n)\n");
scanf("%c",&c);
if(c=='y'){
system("cls");
printf("\nYou choose deluxe room. Enjoy your stay\n");
printf("your room no is 312");
person.billprice += 3000;
person.roomtype = "deluxe";
person.roomno = 312;
begin();
}
else
begin();
}
if(type_of_rooms==4)
begin();
}
else
printf("you have already booked a room");
}
void program(void){
system("cls");
int p;
printf("\nWhich program do you want to choose?\n");
printf("\n 1.Jungle Walk \n 2.Jungle Jeep Drive\n 3.Canoe ride \n 4. Cultural show ");
scanf("%d",&p);
switch(p){
case 1:
system("cls");
printf("\nYou choose jungle walk\n");
person.program = "Jungle walk";
person.billprice += 1000;
begin();
break;
case 2:
printf("\nYou choose jungle jeep drive\n");
person.program = "Jeep Drive";
person.billprice += 2000;
begin();
break;
case 3:
printf("\nYou choose canoe ride\n");
person.billprice+= 800;
person.program = "Canoe Ride";
begin();
break;
case 4:
printf("\nYou choose cultural show\n");
person.billprice+= 1000;
person.program = "Cultural show";
begin();
break;
default:
begin();
}
}
void show_details(void){
system("cls");
time_t timer = time(NULL);
printf("you can get your details in hotel.txt file\n");
FILE *ifp;
ifp = fopen("hotel.txt","w+");
if(ifp == NULL){
printf("file cant be opened\n");
}
else{
fprintf(ifp,"........DETAILS......\n");
fprintf(ifp,"Name : %s\n",person.name);
fprintf(ifp,"Nationality : %s\n",person.nationality);
fprintf(ifp,"Email id : %s\n",person.email_id);
fprintf(ifp,"Address : %s\n",person.address);
fprintf(ifp,"Arrival time: %s\n",ctime(&timer));
fprintf(ifp,"Roomno : %d\n",person.roomno);
fprintf(ifp,"Roomtype : %s\n",person.roomtype);
if(strcmp(person.program,"notchosen") != 0){
fprintf(ifp,"Program : %s\n",person.program);
}
fprintf(ifp,"your bill price is %d\n",person.billprice);
fprintf(ifp,"press p to print your details");
fflush(ifp);
fclose(ifp);
begin();
}
    }
