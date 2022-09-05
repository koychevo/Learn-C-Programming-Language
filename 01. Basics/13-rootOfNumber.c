#include <stdio.h>
#include <math.h>

int main() {
	
	int number;
	printf("Enter positive integer number: ");
	scanf("%d", &number);
	
	printf("Square root of %d is %.2f", number, sqrt(number));
		
	return 0;
}