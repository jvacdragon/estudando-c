#include <stdio.h>

int main(){

    int testIfElse = 2;

    if(testIfElse == 1){
        printf("equals to 1");
    }
    else if(testIfElse == 2){
        printf("equals to 2");
    } else{
        printf("equals to %i", testIfElse);
    }

    while(testIfElse != 10){
        printf("\n%i", testIfElse);
        if(testIfElse>10) testIfElse--;
        else if(testIfElse<10) testIfElse++;
    }

    for(int i = 1, j =1; i<=10; ++i, j +=2){
        printf("\nfor loop\ni = %i\nj= %i", i, j);
        if(i==6) break;
    }

    getchar();

    return 0;
}