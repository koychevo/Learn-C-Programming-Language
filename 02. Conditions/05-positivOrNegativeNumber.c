#include <stdio.h>

int main(){
	
	int number;
	
	printf("Enter a number: ");
	scanf("%d", &number);
	
	if(number > 0){
		printf("The number %d is positive.", number);
	} else if(number < 0){
		printf("The number %d is negative.", number);
	} else {
		printf("The number is zero.");
	}
	
	return 0;
}
