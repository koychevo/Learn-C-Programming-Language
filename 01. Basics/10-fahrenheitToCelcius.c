#include <stdio.h>

int main() {
	
	float celcius, fahrenheit; 
	
	printf("Enter temperature in Fahrenheit: ");
	scanf("%f", &fahrenheit);
	
	celcius = (fahrenheit - 32) * 5 / 9;
	
	printf("%.2f degree Fahrenheit are %.2f degree Celcius", fahrenheit, celcius);
		
	return 0;
}