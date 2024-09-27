/* Variables declared inside a function use the stack memory not the static memory
Recussion that appears too many times may take up alot of memory and when that occurs it 
is reffered to as stack overflow

GENERAL RULES
1. Remember to check for errors.
2. Prevent memory leaks - free memeory that is no longer in use.
3. set the pointer to NULL so that you dont accidentally continue using it. 
*/

#include <stdio.h>
#include <stdlib.h>


int main (){
    void allocateMemory();
    void reAllocateMemory();
    void errorCheckingMemoryAllocation();

    allocateMemory();
    reAllocateMemory();  
    errorCheckingMemoryAllocation();
    
}

void memoryAllocation () {
    int *ptr1, *ptr2;

    // Both the pointers utilize the allocation size and the calculation size
    ptr1 = malloc(sizeof(*ptr1)); // shows the amount of memory to allocate
    ptr2 = calloc(1, sizeof(*ptr2)); // shows the number and ammount of memory to allocate
}

void allocateMemory () {
    int *students;
    int numStudents = 10;

    students = calloc(numStudents, sizeof(*students));
    printf("%lu\n", numStudents * sizeof(*students));


}

void reAllocateMemory () {
    int *ptr1, *ptr2, size;

    size = 4 * sizeof(*ptr1);
    ptr1 = malloc(size);

    printf("%d bytes allocated at address %p \n", size, ptr1);

    // Resize the memory to 6 
    size = 6 * sizeof(*ptr1);
    ptr2 = realloc(ptr1, size);
    

    printf("%d bytes allocated at address %p \n", size, ptr2);

}

void errorCheckingMemoryAllocation () {
    int *ptr1, *ptr2, size;

    ptr1 = malloc(4);

    ptr2 = realloc(ptr1, 8);

    if (ptr1 == NULL) {
        printf("Unable to reallocate the memory of pointer 1\n");
    } else {
        printf("Success 8 bytes reallocatted at address %p \n", ptr2);
        ptr1 = ptr2;
        printf("size of value at pointer 1 is : %lu\n", sizeof(ptr1));
        printf("size of value at pointer 2 is : %lu\n", sizeof(ptr2));
    }
    // Free pointer and good practice to avoid using it
    free(ptr1);
    ptr1 == NULL;
    printf("size of value at pointer 1 is : %lu\n", sizeof(ptr1));
}