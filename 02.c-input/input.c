#include <stdio.h>

int main(){
    char name[100];
    int age;

    printf("Enter your age: ");
    scanf("%i", &age);

    printf("Enter your name: ");
    scanf("%s", &name);

    printf("Your name is %s and you are %i years old", name, age);


    getchar();
    getchar();
    return 0;
};