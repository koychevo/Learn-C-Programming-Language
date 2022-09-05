#include <stdio.h>

int main() {
	
	int integerNumber = 100;
	float floatNumber = 100.0;
	double doubleNumber = 100.0;
	char symbol = 'q';
	
	printf("The size of integer number is %d bytes.\n", sizeof(integerNumber));
	printf("The size of float number is %d bytes.\n", sizeof(floatNumber));
	printf("The size of double number is %d bytes.\n", sizeof(doubleNumber));
	printf("The size of char type is %d bytes.\n", sizeof(symbol));
		
	return 0;
}