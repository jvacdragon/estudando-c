#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    time_t t;
    srand((unsigned) time(&t));
    int randomNumber= rand()%21;

    int chosed;

    for(int i = 1; i<6; ++i){

        printf("You have %i tries left \nEnter a guess: ", 6-i);
        scanf("%i", &chosed);

        if(chosed>randomNumber)
            printf("Sorry, %i is wrong. My number is less than that.", chosed);
        else if(chosed<randomNumber)
            printf("Sorry, %i is wrong. My number is greater than that.", chosed);
        else{
            printf("Congratulations!! You guessed the number.");
            break;
        }
    }
    

    return 0;
}