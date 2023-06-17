#include<stdio.h>
#include<conio.h>

void main()

{
   int pin,pin1=2315,p=1,i,balance=5000,amt;
   printf("---------Welcome to Sopno Sowa Bank--------------\n");
   start:
   printf("Enter the pin Number:\n");
   scanf("%d",&pin);
   if(pin==pin1)
   {
       printf("Please select option\n");
       printf("1.Deposit\n");
       printf("2.Withdraw\n");
       printf("3.Check Balance\n");
       printf("4.Change Pin\n");
       scanf("%d",&i);

         switch(i)
         {
         case 1:
             printf("Enter your Deposit Amount:");
             scanf("%d",&amt);
             if(amt<=25000)
             {
                balance=balance+amt;
                printf("current balance:%d taka\n",balance) ;

             }
             else
             {
                 printf("Limit of withdraw 25k\n");
             }
            break;
        case 2:
            printf("Enter your Withdraw Amount:\n");
             scanf("%d",&amt);
             if(amt<=25000)
             {
                 if(amt<=balance)
                 {
                   balance=balance-amt;
                   printf("After Dedructing balance:%d\n",amt) ;
                   printf("After current balance:%d\n",balance) ;
                 }
                 else
                 {
                     printf("Insufficient balance\n") ;
                 }
             }
             else
             {
               printf("Limit More then 25k\n")  ;
             }
            break;
        case 3:
            printf("Your Balance:%d taka\n",balance);

            break;
        case 4:
              printf("Enter your current pin:\n");
              scanf("%d",&pin);
            if(pin==pin1)
            {
              printf("Enter your New pin number:\n");
              scanf("%d",&pin1);
              printf("Your pin is updated successfully...\n login again\n");
              goto start;
            }
            else
            {
              printf("worong Pin");
            }
            break;
         }
   }
    else
    {
        printf("Pin number is Wrong\n.please enter the valid pin Number\n");
           if(p<3)
            {
            p++;
           goto start;
           }

    }
    printf("press 1 to continue\n");
    scanf("%d",&p);
    if(p==1)
    goto start;
    printf("Thanks for using sopno sowa bank");
}
