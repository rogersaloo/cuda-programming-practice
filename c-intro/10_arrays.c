#include <stdio.h>

int main () {
    int singleArray(void);
    int multidimesionalArray(void);
    int stringArrays(void);


    // singleArray();
    // multidimesionalArray();
    stringArrays();
}

int singleArray () {
     int myNumbers[] = {10, 40, 58, 59, 66, 77};

    printf("%d\n", myNumbers[3]);


    /* Loop through and array*/
    int i;
    printf("Started printing the array\n");

    int wholeSize = sizeof(myNumbers);
    int singleSize = sizeof(myNumbers[0]);

    int length = wholeSize / singleSize;


    printf("size of the whole array %d\n", wholeSize);
    printf("size of a single element in array %d\n", singleSize);
    printf("Size of the array %d\n", length);

    for (i = 0; i < length; i++) {
        printf("A index %d\n", myNumbers[i]);
    }
    return 0;
}

int multidimesionalArray () {
    int array [2] [3] = {{ 1, 2, 4 }, { 5, 6, 7 }};

    printf("%d\n", array[1][2]);

    int i, j;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++)
        {
            printf("%d\n", array[i][j]);
        }
        
    }

    return 0;
}


