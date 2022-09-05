#include <stdio.h>

int main() {
	
	int firstNumber, secondNumber, sum = 0;
	
	printf("Enter two integer numbers: \n");
	scanf("%d %d", &firstNumber, &secondNumber);
	
	sum = firstNumber + secondNumber;
	printf("The sum of %d and %d is %d", firstNumber, secondNumber, sum);
	
	return 0;
}