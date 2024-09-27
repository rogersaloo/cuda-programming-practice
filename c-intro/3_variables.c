#include <stdio.h>

int main () {
    int variablesBasics(void);
    int changeVariableValue(void);
    int calculateTriangleArea(void);

    int basics = variablesBasics();
    int change = changeVariableValue();
    int area = calculateTriangleArea();
    
    printf("%d\n", basics);
    printf("%d\n", change);
    printf("The area of a the triangle is : %d\n", area);
    return 0;
}


int variablesBasics() {
     char myName = 'a';
    float myFloatNum = 9.99;
    int myNum = 15;

    printf("%d\n", myNum);
    printf("%f\n", myFloatNum);
    printf("The character is: %c\n", myName);

    printf("This is the substitution of format specifier: %d\n", myNum);
    printf("This does not contain the format specifier variable: %f\n", myFloatNum);
    return 0;
}


int changeVariableValue() {
    int x = 10;
    int y = 20;

    int sum = x + y;
    
    return sum;
}


int calculateTriangleArea() {
    int width = 4;
    int height = 7;
    int area;

    area = width * height;
    return area;
}
/*All c variables must be declared using a unique identifier that are unique names*/