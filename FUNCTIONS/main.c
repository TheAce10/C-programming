#include <stdio.h>
#include <stdlib.h>
//DECLARATION
    int addnum(int,int);
    int mean(int a,int b);

int main()
{
    int k=20, m=10 ,c;
    c= addnum(k,m);//actual parameters
    printf("%i",c);
    return 0;
}
    //DEFINITION
    int addnum(int a,int b)//Formal parameters
{
        int result;
        result=a+b;
        return result;
}
