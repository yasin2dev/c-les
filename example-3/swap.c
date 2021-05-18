#include <stdio.h>

//Create swap function.
void swap(int *a, int *b);

int main() {

    //Declare two variable m and n
    int m = 10, n = 20;
    //Print first values of m and n
    printf("m = %d\n", m);
    printf("n = %d\n\n", n);

    //Send addresses of m and n to swap function
    swap(&m, &n);

    printf("After Swapping:\n\n");
    printf("m = %d\n", m);
    printf("n = %d\n", n);
    return 0;
}

void swap(int *a, int *b) {
    //Declare empty temporary variable.
    int temp;
    //Temp value is value of variable A.
    temp = *a;
    //A value is value of variable B.
    *a = *b;
    //B value is value of variable Temp.
    *b = temp;
}
