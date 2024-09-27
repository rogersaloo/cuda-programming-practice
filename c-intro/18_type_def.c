#include <stdio.h>
#include <string.h>


void typeDefStruct();
void typeDefPointers();
void typeDefArray();


// using the tpedef with a struct
typedef struct student {
    char name[50];
    char branch[50];
    int ID_no;
} stu;


int main () {
    typeDefStruct();
    typeDefPointers();
    typeDefArray();
    
}


void typeDefStruct () {
    stu st; // declaring a variable called st using the type def

    strcpy(st.name, "Mamma Bekele");
    strcpy(st.branch, "kyoto");
    st.ID_no = 90;

    printf("Name %s\n", st.name);
    printf("Branch %s\n", st.branch);
    printf("Id number %d\n", st.ID_no);

}


void typeDefPointers () {
    typedef int* ptr;

    ptr var;
    *var = 20;

    printf("Valur of the var is %d", *var);

}


void typeDefArray () {
    typedef int Array[4] ;

    Array temp = {3, 6, 8, 0};
    int i;

    for (i = 0; i < 4; i++) {
        printf("Value %d\n", temp[i]);
    }
}