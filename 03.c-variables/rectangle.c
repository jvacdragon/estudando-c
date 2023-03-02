#include <stdio.h>

int main(){
    double width;
    double height;

    printf("What is the width of the rectangle? \n");
    scanf("%lf", &width);

    printf("What is the width of the rectangle?\n");
    scanf("%lf", &height);

    double perimeter = width*2 + height*2;
    double area = width*height;

    printf("Your rectangle perimeter is %2.lf and the area is %2.lf", perimeter, area);

    getchar();
    getchar();

    return 0;
}