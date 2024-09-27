#include <stdio.h>


int main () {
    int whileLoop(void);
    int doWhileLoop(void);
    int forLoop(void);

    whileLoop();
    doWhileLoop();
    forLoop();
}

int whileLoop () {
    int i = 0;
    int value = 5;

    while (i < value) {
        printf("%d\n", i);
        i++;
    }
    return 0;
}


int doWhileLoop () {
    int i = 0;
    int value = 5;

    do {
        printf("Execute the condition once before the loop\n");
        i++;
    } while (i < value);
    {
        printf("%d\n", i);
       
    }
    
    return 0;
    
}

int forLoop () {
    int i;

    for ( i = 0; i <5; i++) {
        printf("%d\n", i);
    }
    return 0;
}