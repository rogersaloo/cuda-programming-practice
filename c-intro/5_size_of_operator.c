#include <stdio.h>

int main(){

    int myInt;
    float myFloat;
    double myDouble;
    char myChar;


    printf("%lu\n", sizeof(myInt));
    printf("%lu\n", sizeof(myFloat));
    printf("%lu\n", sizeof(myDouble));
    printf("%lu\n", sizeof(myChar));
}

/* cotains the representation of the size of different datatypes where there is the
determination of the memotu in bytes that are allocated */