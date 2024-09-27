#include <stdio.h>

// int main() {
//     int score = 90; 
//     int passMark = 60;

//     if (score < passMark) {
//         printf("Failed exam please try again");
//     } else if (score == 60)
//     {
//        printf("You have passed the exam but please pull up your socks");
//     } else {
//         printf("You are doing an excellent job");
//     }
    
// }

/* Short hand for the if and else statements

variable = (condition) ? expressionTrue : expressionFalse*/


int main() {
    int score = 90; 
    int passMark = 60;

    // if (score < passMark) {
    //     printf("Failed exam please try again");
    // } else {
    //     printf("You are doing an excellent job");
    // }
    
    // Contains an alternative of the above if and else statements
    int switchStatements(void);
    switchStatements();



    (score < passMark) ? printf("\nFailed exam\n") : printf("\npassed exam\n");
}


int switchStatements() {

    int day = 4;

    switch (day)
    {
    case 1:
        printf("Today is Monday");
        break;
    case 2:
        printf("Today is Tuesday");
        break;
    case 3:
        printf("Today is Wednesay");
        break;

    default:
        printf("we are almost arriving in the weekend");
        break;
    }
    return 0;
}