#include <stdio.h>

int main() {
	char operator;
	int first, second;
	printf("Please enter an operator (+, -, *, /): ");
	scanf("%c", &operator);
	printf("Please enter two operands: ");
	scanf("%d %d", &first, &second);

	switch(operator) {
		case '+':
		    printf("%d + %d = %d\n", first, second, first + second);
		    break;
		case '-':
		    printf("%d - %d = %d\n", first, second, first - second);
		    break;
		case '*': 
		    printf("%d * %d = %d\n", first, second, first * second);
		    break;
		case '/':
		    printf("%d / %d = %d\n", first, second, first / second);
		    break;
		default:
		    printf("Error! operator is not correct!");
	}
	return 0;
}		
