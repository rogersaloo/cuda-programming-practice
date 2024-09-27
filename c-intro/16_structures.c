/* Provides a way to be able to group several variables into one place*/
#include <stdio.h>
#include <string.h>


void assignIndividually();
void assignAtDeclaration();
void copyStructures();


struct MyStructure {    
    int myNum;
    char myLetter;
    char myString[30];
};


int main() {
   assignIndividually();
   assignAtDeclaration();
   copyStructures();
}


void assignIndividually () {
    struct MyStructure s1;
    // print the structure declaration without any value
    printf("%d\n", s1.myNum);

    // Assign values to the members of the structure and print out the values
    s1.myNum = 24;
    s1.myLetter = 'B';

    printf("%d\n", s1.myNum);
    printf("%c\n", s1.myLetter);

    // TO asign the members of a string we can be able to use the strcpy
    strcpy(s1.myString, "Where are you from?");
    printf("%s\n", s1.myString);
}


void assignAtDeclaration () {
    struct MyStructure s2 = {25, 'A', "I am from Kenya"};

    printf("Number : %d\n ", s2.myNum);
    printf("Character : %c\n", s2.myLetter);
    printf("Stirng : %s\n", s2.myString);
}


void copyStructures () {
    struct MyStructure s2 = {25, 'A', "I am from Kenya"};
    struct MyStructure s3;

    s3 = s2;

    printf("I am a copy of the original struct %d\n ", s3.myNum);
}