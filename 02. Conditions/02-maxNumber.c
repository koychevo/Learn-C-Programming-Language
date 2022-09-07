#include <stdio.h>

int main() {
	
	int firstNumber, secondNumber, maxNumber;
	
	printf("Enter two integer numbers: \n");
	scanf("%d %d", &firstNumber, &secondNumber);
	
	maxNumber = firstNumber > secondNumber ? firstNumber : secondNumber;
	
	printf("max number is %d", maxNumber);
		
	return 0;
}