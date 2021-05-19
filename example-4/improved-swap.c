#include <stdio.h>
#include <stdlib.h>

//Create swap method.
void swap(int *a, int *b);

int main() {

    //Declare two integer variable.
    int f, s;
    //Welcome.
    printf("Welcome to Swap program...\n\n");
    //Enter first number.
    printf("Please enter first number: ");
    scanf("%d", &f);
    
    //Enter second number.
    printf("Please enter second number: ");
    scanf("%d", &s);

    //Send f and s variables to swap method.
    swap(&f, &s);


    //Print after swapping.
    printf("After Swapping: \n\n");
    printf("First number = %d\n", f);
    printf("Second number = %d\n\n", s);

    return 0;
}

void swap(int *a, int *b) {
    //Declare integer temp.
    int temp;
    //Temp = A (f)
    temp = *a;
    //A (f) = B (s)
    *a = *b;
    //B = Temp (f)
    *b = temp;
}
