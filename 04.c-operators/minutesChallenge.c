#include <stdio.h>

int main(){

    int minutes;

    printf("please type the minutes to convert into days and years: \n");

    scanf("%i", &minutes);

    int days = minutes/(60*24);
    int years = minutes/(60*24*365);

    printf("\n%i minutes is equal to: %i years and %i days", minutes, years, days);

    getchar();
    getchar();
    return 0;
}