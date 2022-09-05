#include <stdio.h>

int main() {
	
	int firstNumber, secondNumber;
	
	printf("Enter two numbers: \n");
	scanf("%d %d", &firstNumber, &secondNumber);
	
	printf("Your numbers are: %d %d\n", firstNumber, secondNumber);
	
	firstNumber = firstNumber + secondNumber;
	secondNumber = firstNumber - secondNumber;
	firstNumber = firstNumber - secondNumber;
	
	printf("The swapped numbers are: %d %d\n", firstNumber, secondNumber);
		
	return 0;
}