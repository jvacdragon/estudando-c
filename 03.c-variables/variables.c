#include <stdio.h>
#include <stdbool.h>

int main(){

    int myAge = 19;
    char name[100] = "João";

    //FOR HEXADECIMAL NUMBERS FIRST USE ZERO AND x THEN START THE NUMBER
    int hex = 0xf;

    float num = 123456789.12;

    //DOUBLE ARE USED WHEN FLOAT IS NOT ENOUGH BECAUSE OF LARGER NUMBERS
    double d = 123456789.123456789f;

    //BOOLEANS VALUES
    _Bool verdade = 1;
    _Bool falso = 0;

    //USING THE PRE PROCESSOR #include <stdboll.h> ITS ALLOWED TO
    bool variable = true;
    bool otherVariable = false;

    //FORMATING THE DATA SO THE NUMBER HAVE DECIMALS
    //IT WORKS FOR FLOAT AND DOUBLE
    float dec = 10.345345;
    printf("%.2f \n", dec);
    double dbNum = 12.345;
    printf("%.1lf \n", dbNum);

    printf("%i, %s, %i, %f, %lf", myAge, name, hex, num, d);

    getchar();
    return 0;
}