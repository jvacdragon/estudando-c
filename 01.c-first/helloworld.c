#include <stdio.h>

int num1, num2;
float sum;

int a(){
    num1 = 2;
    num2 = 3;
    sum = num1 + num2 + 0.5;

    printf("A soma dos numeros é %f", sum);
    return 0;
}

int main(){
        
    printf("hello word \n");
    a();

    return 0;
}
