#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*printf("Hello world!\n");
    // RECAP This is how to allow data input

    char a="";
    printf("Please enter an alphabet:");
    scanf("%c",&a);
    printf("This is your favorite alphabet: %c\n",a);
    */
    // IF AND ELSE
    //IF STATEMENT FOR RAIN
    char rain;
    char check='y';
    printf("Did it rain today y or n\n");
    scanf("%c",&rain);

    if (rain == check)
    {
        printf("hurraaaay! NO CLASS");
         }
    else {
            printf("CLASS DEY!;");
    }
    //CONDITIONAL IF STATEMENT FOR CALL AND ANSWERING
    /*char call;
    char answer;
    char true1='y';
    char true2='y';
    printf("Did he call today?If yes, did you answer y or n\n");
    scanf("%c %c",&call,&answer);

    if ((call == true1 && answer == true1))
    {
        printf("We'll meet");
         }
    else {
            printf("Byes to him");
    }
    */
    //IF,ELSEIF AND ELSE
    char elvis[5]="elvis";
    char micheal[7]="micheal";
    char name1[]="";
    char name2[]="";
    printf("who came by my call/n");
    scanf("%d",name1);
    if(name1==elvis)
    {
        printf("Give elvis 2000");
    }
    else if (name1==micheal)
    {
        printf("Give micheal 1000");
    }
    else
    {
        printf("give %s 500",name1);
    }
    return 0;


}
