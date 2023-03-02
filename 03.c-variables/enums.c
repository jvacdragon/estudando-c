#include <stdio.h>

int main(){

    enum gender {male, female};

    enum gender myGender = 0;
    enum gender otherGneder = female;
    
    if(myGender == male){
        printf("true");
    } else{
        printf("false");
    };

    enum directions {UP, DOWN, LEFT = 10, RIGHT};



    printf("\nup is: %d\ndown is %d\nleft is %d\nright is %d", UP, DOWN, LEFT, RIGHT);


    getchar();
    getchar();

    return 0;
}