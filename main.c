/*
clock application
spicoli piersilvio - uniba
*/
#include <stdio.h>
#include <time.h>
#include <unistd.h>

void TimeDay();
void Timer();
int x;
int ch;

int main(){

    do{
        printf("      Cloack!       \n\n");
        printf("Choises       \n\n");
        printf("1 - : what time is it?? \n");
        printf("2 - : timer \n");
        printf("3 - : countdown of birthday! \n");
        printf("4 - : exit \n");

        scanf("%d", &ch);
        switch(ch){

            case 1:
                TimeDay();
            break;
            case 2:
                system("start C:\\..\\..\\..\\cloack\\timer.exe"); //your path of repository
            break;
            case 3:
                system("start C:\\..\\..\\..\\cloack\\countdown.exe");
            break;
            case 4:
                return 0;
            break;
        }

        printf("\n\n:: do u want to continue? (1-yep) (2-no)");
        scanf("%d", &ch);
        system("cls");

    }while(ch == 1);

}

void TimeDay(){

    time_t t = time(NULL);
    printf("%s", ctime(&t));
}









