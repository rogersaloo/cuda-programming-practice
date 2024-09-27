#include <stdio.h>
#include <string.h>

int main () {
    int stringArrays(void);

    stringArrays();
}


int stringArrays () {

    char greetings [] = "aloo aloo aloo aloo aloo";
    printf("%s\n", greetings);

    // Strings are arrays in C and you can access them using the index
    printf("%c\n", greetings[0]);

    // It takes a single words and allocates it to one byte
    printf("%lu", sizeof(greetings));

    int stringLength = strlen(greetings);
    printf("String length %d\n", stringLength);

    int i;
    for ( i = 0; i < 20; i++ ) {
        printf("%c\n", greetings[i]);
    }
    // for (i = 0, i) 
    return 0;
}