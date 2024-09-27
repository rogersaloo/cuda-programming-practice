/* Pointer is a varibale that stores the memory address of another variable as its value*/
#include <stdio.h>

// Function declaration
void pointersInArray();
void pointerBasics();


int main () {
    pointerBasics();
    pointersInArray();
    return 0;
}

void pointersInArray () {
    int myNumbers [4] = {10, 30, 50, 60};
    int i;
    int length = sizeof(myNumbers) / sizeof(myNumbers[0]);

    printf("\n\n --- Value and memory address of the array elements ---\n\n");
    for (i = 0; i < length; i++) {
        printf("My numbers are %d\n", myNumbers[i]);
        printf("The pointers are %p\n", &myNumbers[i]);
    }

    // Print the pointer of each variable
    printf("\n\n --- Pointer of each elelemt ---\n\n");
    printf("The variable pointer %p\n", &myNumbers);
    printf("The first element pointer %p\n", &myNumbers[0]);
    printf("The second element pointer %p\n", &myNumbers[0] + 1);

    // Get the values of all the items ny the use of pointer
    int *ptr = myNumbers;

    for (i = 0; i < length; i++) {
        printf("Value from pointer %d\n", *(ptr + i));
    }

    //Change the value of the variable element using a pointer
    *myNumbers = 13;
    *(myNumbers +2) = 46;
    printf("\n\n --- Changed value of element using pointers ---\n\n");
    printf("%d\n", *myNumbers);
    printf("%d\n", *(myNumbers +1));
}


void pointerBasics () {
    int myAge = 30;
    int* ptr = &myAge;

    // print the variable
    printf("Variable value : %d\n", myAge);

    // print the memory address
    printf("Varibale Memoruy Address : %p\n", &myAge);

    // Print the pointer of the variable myAge using the & refernce operator
    printf("Varible Pointer: %p\n", ptr);

    // YOu can get the value of the variable the pointer references to using the *
    printf("Variable value derefence %d\n", *ptr);

}






