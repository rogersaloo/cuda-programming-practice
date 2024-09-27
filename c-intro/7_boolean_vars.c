/*Booleans are returned as integers and therefore they utilize the 
integers format specifiers*/

#include <stdbool.h>
#include <stdio.h>

int main () {
    bool isProgrammigFun = true;
    bool isRamenTasty = false;


    printf("%d\n", isProgrammigFun);
    printf("%d\n", isRamenTasty);

    //Comparison operators
    printf("%d\n", 7 > 5);


    // Realife example cosider if a person has passed JPLT
    int score = 66;
    int passMark  = 90;

    if (score >= passMark) {
        printf("Passed the examination");
    } else {
        printf("Failed examination please try again");
    }
}

