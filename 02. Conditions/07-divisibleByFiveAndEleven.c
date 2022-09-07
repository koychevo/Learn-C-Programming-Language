#include <stdio.h>


int main(){
	
	int number;
	
	printf("Enter integer number: ");
	scanf("%d", &number);
	
	if(number % 5 == 0 && number % 11 == 0) {
		printf("The number %d is divisible by 5 and 11.", number);
	} else {
		printf("The number %d is not divisible by 5 and 11.", number);
	}
	
	return 0;
}
