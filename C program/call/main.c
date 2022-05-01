#include <stdio.h>
#include <stdlib.h>

int main()
{
   int t;
    printf("Pls enter the time the call came\n");
    scanf("%d",&t);
    if(t<5)
    {
        printf("You'll meet");
    }
    else if(t<7)
    {
        printf ("I will send someone to meet you");
    }
    else
    {
        printf("Meeting is canceled");
    }
    return 0;
}
