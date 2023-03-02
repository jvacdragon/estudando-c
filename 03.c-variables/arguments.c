#include <stdio.h>

int main(int argc, char *argv){
    //*argv needs to be the pointer type

    int numberOfArguments = argc;
    char argument1 = argv[0];
    char argument2 = argv[1];

    printf(" Number of arguments %i \n Argument 1 is the program name: %s \n Argument 2 is the command line argument: %s", numberOfArguments, argument1, argument2);

    getchar();
    return 0;
}