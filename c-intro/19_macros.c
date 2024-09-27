#include <stdio.h>


void objectLikeMacro();
void chaninedMacros();
void multiLIneMacros();
void functionLikeMacros();


int main () {
    objectLikeMacro();
    chaninedMacros();
    multiLIneMacros();
    functionLikeMacros();

}

void objectLikeMacro() {
    #define INSTAGRAM 31

    printf("They have %dk followers on instagram \n", INSTAGRAM);
}


void chaninedMacros () {

    #define FACEBOOK FOLLOWERS
    #define FOLLOWERS 32

    printf("They have a total of %dk facebook followers \n", FACEBOOK);
}

void multiLIneMacros () {
    #define NUM 1, \
                2, \
                3

    int array[3] = { NUM };

    for (int i = 0; i <3; i++) {
        printf("The numbers are %d\n", array[i]);
    }

}

void functionLikeMacros() {
    #define AREA(a, b) (a * b)
    #define CONDITION(a,b) (a > b ? a : b )

    printf(" The are of the circle is: %d\n ", AREA(2,4));

    printf("The condition is %d\n", CONDITION(5, 6));
}