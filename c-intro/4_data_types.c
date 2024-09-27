#include <stdio.h>

int main() {
    int charAsASCII(void);
    int scientificNumbers(void);

    int ascii = charAsASCII();
    int scintific = scientificNumbers();

    // printf("The converted ascii character is defined as : %c\n", ascii);
    printf("%d", scintific);
    return 0;
}


int charAsASCII () {
    char a = 65;
    char b = 66; 
    char c = 67;

    printf("%c", a);
    return a;
}


double scientificNumbers () {
    double d1 = 12.008;
    printf("%d", d1);
//     return 0;
}