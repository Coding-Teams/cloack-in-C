
#include <stdio.h>
#include <stdlib.h>
#include<dos.h>

int main()
{
    void sec();
    void start();
    int mint,secnd,counter;

    start();
    system("cls");
    printf("Enter Minute and Second (using Space) : ");
    scanf("%d %d",&mint,&secnd);
    if(secnd<=60)
        {
    sos:

        while(secnd!=-1)
        {
             sec();
            system("cls");
             printf("\n\n\n\t\t\t\t\t          Min. : Sec.");
            printf("\n\t\t\t\t\tCountdown = %d : %d\n",mint,secnd);

           if(secnd==60)
            printf("\t\t\t*\n");
            else if(secnd==59)
            printf("\t\t\t**\n");
            else if(secnd==58)
            printf("\t\t\t***\n");
             else if(secnd==57)
            printf("\t\t\t****\n");
            else if(secnd==56)
            printf("\t\t\t*****\n");
            else if(secnd==55)
            printf("\t\t\t******\n");
             else if(secnd==54)
            printf("\t\t\t*******\n");
            else if(secnd==53)
            printf("\t\t\t********\n");
            else if(secnd==52)
            printf("\t\t\t*********\n");
             else if(secnd==51)
            printf("\t\t\t**********\n");
             else if(secnd==50)
            printf("\t\t\t***********\n");
            else if(secnd==49)
            printf("\t\t\t************\n");
            else if(secnd==48)
            printf("\t\t\t*************\n");
            else if(secnd==47)
            printf("\t\t\t**************\n");
            else if(secnd==46)
            printf("\t\t\t***************\n");
            else if(secnd==45)
            printf("\t\t\t****************\n");
            else if(secnd==44)
            printf("\t\t\t*****************\n");
            else if(secnd==43)
            printf("\t\t\t******************\n");
            else if(secnd==42)
            printf("\t\t\t*******************\n");
            else if(secnd==41)
            printf("\t\t\t********************\n");
            else if(secnd==40)
            printf("\t\t\t*********************\n");
            else if(secnd==39)
            printf("\t\t\t**********************\n");
            else if(secnd==38)
            printf("\t\t\t***********************\n");
            else if(secnd==37)
            printf("\t\t\t************************\n");
            else if(secnd==36)
            printf("\t\t\t*************************\n");
            else if(secnd==35)
            printf("\t\t\t**************************\n");
            else if(secnd==34)
            printf("\t\t\t***************************\n");
            else if(secnd==33)
            printf("\t\t\t****************************\n");
            else if(secnd==32)
            printf("\t\t\t*****************************\n");

            //diff condition
            secnd--;
             if(secnd==0)
        {

            mint--;
            secnd = 60;
            goto sos;
        }
        }
        }

        else{
            printf("Invalid Second format !\nPlease Enter second under 60\n");
        }

        getch();
    return 0;
}
void sec()
{
    long double i;
    for(i=0;i<=200000000;i++);
}
void start()
{
    long double i;
    for(i=0;i<=500000000;i++);
}
