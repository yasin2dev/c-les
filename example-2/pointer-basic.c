#include <stdio.h>

int main() {
    //Pointers store addresses of variables.
    
    //Create a integer pointer (pc) and normal integer variable (c)
    //We need put * next of int type for declare a pointer.
    //Variables after the comma are normally declared.
    int* pointer, c;
    
    //C equal 10.
    c = 10;
    //For print address using '%p' expression and reference '&' expression.
    printf("Address of C: %p\n", &c);
    printf("Value of C: %d\n\n", c);

    //Now we are setting pointer (pc) is a address of (c) variable
    pointer = &c;

    //We no need reference expression if pointer is setted.
    printf("Address of C: %p\n", pointer);
    //if pointer using with *, its given value of variable instead of address
    printf("Value of C: %d\n\n", *pointer);

    //C equal 20.
    c = 20;
    printf("Address of C: %p\n", &c);
    printf("Value of C: %d\n\n", c);
    //Nothing changed, only c variable been 11.

    return 0;
}
