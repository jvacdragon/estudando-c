#include <stdio.h>

int main(){

    double num [10];

    for (int i = 0; i < 10; i++)
    {
        num[i] = i;
        printf("\n%.2lf", num[i]);
    }
    
    int arrayInit = {1,2,3,4,5};

    for (int i = 0; i <= 5; i++){
        num[i] = i;
        printf("\n%8.2lf", num[i]);
    };

    int twoDimensionArray[5][2] = {
        {2,3},
        {5,7},
        {-5,10},
        {23,8},
        {7,15}
    };
    
    for(int i=0, j = 0; i < 5; i++){
        printf("\n Eixo x = %i e eixo y = %i", 
        twoDimensionArray[i][0],
        twoDimensionArray[i][1]);
    }

    printf("\n %zd", sizeof(twoDimensionArray));
    printf("\n %zd", sizeof(arrayInit));

    return 0;
}