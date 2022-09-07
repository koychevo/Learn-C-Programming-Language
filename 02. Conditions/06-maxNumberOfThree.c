#include <stdio.h>


int main(){
	
	int firstNumber, 
		secondNumber, 
		thirdNumber, 
		maxNumber;

	printf("Enter three numbers: \n");
	scanf("%d %d %d", &firstNumber, &secondNumber, &thirdNumber);
	
	maxNumber = firstNumber;
	
	if(maxNumber < secondNumber){
		 maxNumber = secondNumber;
	}
	
	if(maxNumber < thirdNumber){
		maxNumber = thirdNumber;
	}
	
	printf("max number: %d", maxNumber);
	
	return 0;
}
