#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    float cwa;
    char name[100]="";
    printf("What is your name?\n");
    scanf("%s",&name);
    printf("Enter your  age:\n");
    scanf("%d",&age);
    printf("Enter your CWA:\n");
    scanf("%f",&cwa);
    printf("Hi! my name is %s\nI am %d years old with a cwa\nof %f.",name,age,cwa);
    return 0;
}
