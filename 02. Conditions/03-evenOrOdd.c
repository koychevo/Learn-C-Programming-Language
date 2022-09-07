#include <stdio.h>

int main() {
	
	int number;

	printf("Enter integer number:\n");
	scanf("%d", &number);
	
	printf("The number %d is ", number);
	
	(number % 2) ? printf("odd.") : printf("even.");			
	
	return 0;
}