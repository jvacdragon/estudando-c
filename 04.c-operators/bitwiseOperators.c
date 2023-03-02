#include <stdio.h>;

int main(){

    int a = 60; // 11 1100
    int b = 13; // 00 1101

/*    int a;
    int b;

     printf("digite valor a\n");
    scanf("%lf", &a);

    printf("digite valor b\n");
    scanf("%lf", &b); */

    int result = 0;

    result = a & b;
    //the & will compare the binary numbers and create a new 
    // just compare each number using && and if true return 1
    // 11 1100
    // 00 1101
    // 00 1100 = 12

    printf("\nresult is %d", result); 

    result = a | b;
    //the | will compare the binary numbers and create a new
    // just compare each number using || and if true return 1
    // 11 1100
    // 00 1101
    // 11 1101 = 61

    printf("\nresult is %d", result); 

    result = ~a;
    //the ~ will reverse the 0 and 1 turning into a negative number and decrease 1

    printf("\nresult is %d", result); 

    result = a ^ b;
    //the ^ will compare the binary numbers and create a new
    // if only one of the the sides is 1 than will return 1
    // 11 1100
    // 00 1101
    // 11 0001 = 49

    printf("\nresult is %d", result); 

    
    result = a << 2;
    //Will shift the binary to the left 2 times
    // 11 1100 = 60 -> 1111 0000 = 240
    // other way to think is it will multiple the number by 2**(number you chosed)
    // in this case: 60*2**2

    printf("\nresult is %d", result); 

    result = a >> 3;
    //it shift the binary to the right 3 times
    //11 1100 -> 111
    
    printf("\nresult is %d", result); 

    printf("\n%zd", sizeof(long));
    
    getchar();
    getchar();
    return 0;
}