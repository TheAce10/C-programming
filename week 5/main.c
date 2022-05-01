#include <stdio.h>
#include <stdlib.h>

int main()
{
   /* printf("Hello world!\n");

    //SWITCH CASE
    int rnumber;
    printf("Enter a random number:");
    scanf("%d",&rnumber);
    switch(rnumber)
    {
        case'1 ... 100':
         printf("A");
        break;
        case '101 ... 1000':
         printf("B");
        break;
    }

    //TERNARY OPERATORS
    //(condition)?execute:else
    int a=20;
    int b=40;
    int c;
    c=(a>b)?a:b;
    //FOR LOOP
    //SYNTAX for (initialization, condition, increment/decrement)
    //{ statements; }
    int x;
    for(x=0, x==x; ++x)
    {
        printf("%d",x)
    }
    //infinite loop
    int q=1;
    for(;;)
    {
        printf("%d\n",q);
    }
    //WHILE LOOP
    int d=1;
    while (d<11)
    {
        printf("%d",d);
     //   ++d;
    }
    //DO WHILE LOOP
    int e=0;
    do {
        printf("%d\n",e);
        e++;
    }
    while (e<11);
    //LOOP CONTROL STATEMENT(continue,break,goto)
    //CONTINUE
    //continue; breaks a loop condition and returns to start to check conditions again
    //it breaks from all conditions beneath it
    //BREAK
    //break; stop execution of command
    //goto; sends to a specified destination
    //goto label;
    //label:
    int f=0;
    do {
            if (f==3)
    {continue;}
        printf("%d",f);
        ++f;

    }
    while (f<11);*/
    int i=0, x=0;
    while (i<10)
    {
        if (i%5==0)
        {
        x+=i;
        printf("%d\t",x);
        }
    ++i;
    }
    printf("\nx=%d",x);
    return 0;
    }
