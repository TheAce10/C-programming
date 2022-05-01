#include <stdio.h>
#include <stdlib.h>

int main()
{
    char day;
    char fname[100]="";
    printf("Please enter your first name\n");
    scanf("%s",&fname);
    input: printf("Hi %s, kindly enter your favourite day of the week\nEnter M-Monday\n      T-Tuesday\n      W-Wednesday\n      H-Thursday\n      F-Friday\n      S-Saturday\n      U-Sunday\n",fname);
    scanf("%s",&day);
    switch(day)
    {
        case 'M':
        case 'm':
            printf("Monday");
        break;
        case 'T':
        case 't':
            printf("Tuesday");
        break;
        case 'W':
        case 'w':
            printf("Wednesday");
        break;
        case 'H':
        case 'h':
            printf("Thursday");
        break;
        case 'F':
        case 'f':
            printf("Friday");
        break;
        case 'S':
        case 's':
            printf("Saturday");
        break;
        case 'U':
        case 'u':
            printf("Sunday");
        break;
        default:
            goto input;
        break;
    }
    return 0;
}
