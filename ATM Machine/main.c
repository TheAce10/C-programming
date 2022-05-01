#include <stdio.h>
#include <stdlib.h>

int main()
{ // ATM MACHINE CODE
    //Declaring of variables
    //Member details
    int Account1=100001;
    float Balance1=100;
    char User1[6]= "Bless";
    int pincode1=11111;
    int Account2=100002;
    float Balance2=100;
    char User2[7]= "elikem";
    int pincode2=22222;
    int loginaccnum;
    int loginpin;

    //Login
    login:
    printf("Please enter your account details\n ");
    printf("Account number:\n");
    scanf("%d",&loginaccnum);
    printf("Password:\n");
    scanf("%d",&loginpin);
    printf("%d %d \n",loginaccnum,loginpin);
    printf("%d %d \n",Account1,pincode1);
    //Validation of login details
    if (loginaccnum==Account1 && loginpin==pincode1)
    {
        printf("Welcome %s, What would you like to do today",User1);
        goto transaction;
    }
    else if (loginaccnum==Account2 && loginpin==pincode2)
    {
        printf("Welcome %s, what would you like to do today\n",Account2);
        goto transaction;
    }
    else
    {
        printf("wrong input details\n Try again\n\n");
        goto login;
    }
    //Bank Transactions
    int transaction1;
    transaction:
        printf("\n 1. Check Balance\n 2. Transfer Money\n 3. Deposit\n 4. Withdraw\n 5. Exit(Note enter only the associated number to transaction)\n");
        scanf("%d", &transaction1);
    //Check balance
    switch(transaction1)
    {
    case 1:
         if (loginaccnum==Account1)
         {
             printf("Your current balance is:%.2f",Balance1);
         }
         else if (loginaccnum==Account2)
         {
             printf("Your current balance is:%.2f",Balance2);
         }
         scanf("");
         goto transaction;
         float Deposit;
    case 2:
           printf("Enter amount to deposit (e.g. 100.00)\n");
           scanf("%f",&Deposit);
         if (loginaccnum==Account1)
         {
             Balance1+=Deposit;
             printf("Your current balance is:%.2f\n",Balance1);
         }
         else if (loginaccnum==Account2)
         {
             Balance2+=Deposit;
             printf("Your current balance is:%.2f",Balance2);
         }
         goto transaction;
    //WITHDRAWAL
         float Withdraw;
    case 3:
        printf("Enter amount to withdraw (e.g. 100.00)\n");
           scanf("%f",&Withdraw);
         if (loginaccnum==Account1)
         {
             Balance1-=Withdraw;
             printf("You've successfully withdrawn GHc%.2f, your current balance is GHc%.2f\n",Withdraw,Balance1);
         }
         else if (loginaccnum==Account2)
         {
             Balance2-=Withdraw;
             printf("You've successfully withdrawn GHc%.2f, your current balance is GHc%.2f\n",Withdraw,Balance2);
         }
         goto transaction;
    //TRANSFER
         float Transfer;
        int accnumber;
    case 4:
        printf("Enter amount to tranfer (e.g. 100.00)\n");
           scanf("%f\n",&Transfer);
        printf("Enter account number:");
        scanf("%d\n",&accnumber);
         if (loginaccnum==Account1)
         {
             switch(accnumber)
             {
                 case 'Account1':
                 {
                    printf("Transaction error\n");
                    goto transaction;
                 }
                 case 'Account2':
                 {
                     Balance2+=Transfer;
                     Balance1-=Transfer;
                     printf("Amount sent to %s succesfully, your account balance is GHc%.2f\n",User1,Balance2);
                 }
             }
         }
         if (loginaccnum==Account2)
         {
             switch(accnumber)
             {
                 case 'Account2':
                 {
                    printf("Transaction error\n");
                    goto transaction;
                 }
                 case 'Account1':
                 {
                     Balance1+=Transfer;
                     Balance2-=Transfer;
                     printf("Amount sent to %s succesfully, your account balance is GHc%.2f\n",User1,Balance2);
                 }
             }
         }
         case 5:
         {
             goto end;
         }
    }

 end:
     printf("Goodbye have a nice day\n");
    return 0;
}
