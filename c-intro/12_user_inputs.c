#include <stdio.h>

int main () {
    int stringCalling(void);
    int multipleStringsCalling(void);


    stringCalling();
    multipleStringsCalling();
}


int integerCalling () {
    int myNum;

    printf("please enter your number here");
    // Use the & to get and save the number and the character of the user types
    scanf("%d", &myNum);
    return 0;
}


int stringCalling () {
    char myName [30];

    printf("Please eneter your name here\n");

    scanf("%s", myName);

    printf("Good morning %s\n", myName );

    return 0;
}

int multipleStringsCalling () {
    char fullName [30];

    printf("Please enter your full name here: \n");
    fgets(fullName, sizeof(fullName), stdin);

    printf("Hello %s", fullName);
    return 0;
}