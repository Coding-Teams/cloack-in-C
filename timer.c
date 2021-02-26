#include <stdio.h>
#include <time.h>
#include <unistd.h>

void Timer();

void Timer(){

    int giorno = 0, ore = 0, minuti = 0, secondi = 0;

        for(giorno = 0; giorno < 31; giorno++){/*giorni*/
            for(ore = 0; ore < 24; ore++){/*ore*/
                for(minuti = 0; minuti < 60; minuti++){/*minuti*/
                    for(secondi = 0; secondi < 60; secondi++){/*secondi*/

                    printf("- ore: %d\n", ore);
                    printf("- minuti: %d\n", minuti);
                    printf("- secondi: %d\n", secondi);
                    sleep(1);
                    system("cls");

                    /*fine secondi*/
                }

            secondi = 0;
            /*fine minuti*/
        }

        minuti = 0;
        /*fine ore*/
        }

        ore = 0;
        /*fine giorni*/
        }

    printf("\n\nI cicli sono terminati tutti.");
    system("pause>null");

}

int main(){

    Timer();

    return 0;
}
