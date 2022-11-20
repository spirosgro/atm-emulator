#include <stdio.h>
#define PIN 1234
#define MONEY 2340
int customer_pin=0,i=0,k;
float new_money=0,removed_money=0,final_money=0;
int main (void) {
printf ("Welcome!!!");

for (i=3;i>0;i--)
{ printf ("\n\nPlease insert your PIN: ");
    scanf ("%d", &customer_pin);
    if (customer_pin!=PIN) {
        printf ("Wrong pin: (%d tries remaining)", i-1);
         if (i==1) return 0;}
    else { printf ("\n\n\nClient Authenticated!\n\nPlease press one of the above numbers to complete your transaction");
    printf ("\n\n 1. Import Money\n 2. Deposit Money\n 3. Account Info \n\nYour number: ");
    int j=0;
    scanf ("%d", &j);
         if (j==1)
            {printf ("\nHow many money you want to add: ");
            scanf("%f", &new_money);
            final_money=MONEY+new_money;
            printf ("\n\nYour Balance is= %.2f EUR", final_money);
            printf("\n\n\nThanks for using our system\nTransaction ended!\n");
            printf ("Enter any key to exit: ");
            scanf ("%d", &k);
             break;
            }
            else if (j==2)
            {printf ("\nHow many money you want to deposit: ");
            scanf ("%f", &removed_money);
                if (removed_money>MONEY) {
                    printf ("\n\nNot enough money you will get only: %d EUR", MONEY);
                      final_money=MONEY-MONEY;
            printf ("\nYour Balance is= %.2f EUR", final_money);
            printf("\n\n\nThanks for using our system\nTransaction ended!\n");
            printf ("Enter any key to exit: ");
            scanf ("%d", &k);
            break;
                }
            final_money=MONEY-removed_money;
            printf ("\nYour Balance is= %.2f EUR", final_money);
            printf("\n\n\nThanks for using our system\nTransaction ended!\n");
            printf ("Enter any key to exit: ");
            scanf ("%d", &k);
            break;
            }
            else if (j==3)
                {printf ("\nYour Balance is= %d EUR", MONEY);
                printf("\n\n\nThanks for using our system\nTransaction ended!\n");
                printf ("Enter any key to exit: ");
            scanf ("%d", &k);
                break;}

























} } }


