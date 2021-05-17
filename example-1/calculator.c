#include <stdio.h>

int main() {
	//define operator and numbers
	char operator;
	int first, second;
	printf("Please enter an operator (+, -, *, /): ");
	//Read operator
	scanf("%c", &operator);
	printf("Please enter two operands: ");
	//Read first and second number
	scanf("%d %d", &first, &second);

	switch(operator) {
		case '+':
		    //If operator +
		    printf("%d + %d = %d\n", first, second, first + second);
		    break;
		case '-':
		    //If operator -
		    printf("%d - %d = %d\n", first, second, first - second);
		    break;
		case '*': 
		    //If operator *
		    printf("%d * %d = %d\n", first, second, first * second);
		    break;
		case '/':
		    //If operator /
		    printf("%d / %d = %d\n", first, second, first / second);
		    break;
		default:
		    //If operator not * / + -
		    printf("Error! operator is not correct!");
	}
	return 0;
}	
