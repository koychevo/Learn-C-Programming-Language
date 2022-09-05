#include <stdio.h>

int main() {
	
	float firstNumber, secondNumber;
	
	printf("Enter two real numbers: \n");
	scanf("%f %f", &firstNumber, &secondNumber);
	
	printf("The sum of %f and %f is %f\n", firstNumber, secondNumber, firstNumber + secondNumber);
	printf("The difference of %f and %f is %f\n", firstNumber, secondNumber, firstNumber - secondNumber);
	printf("The product of %f and %f is %f\n", firstNumber, secondNumber, firstNumber * secondNumber);
	
	if(secondNumber){
		printf("The division of %f and %f is %f\n", firstNumber, secondNumber, firstNumber / secondNumber);
	}
	
	return 0;
}