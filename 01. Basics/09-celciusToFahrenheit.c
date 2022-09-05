#include <stdio.h>

int main() {
	
	float celcius, fahrenheit; 
	
	printf("Enter temperature in Celcius: ");
	scanf("%f", &celcius);
	
	fahrenheit = celcius * 9 / 5 + 32;
	
	printf("%.2f degree Celcius are %.2f degree Fahrenheit", celcius, fahrenheit);
		
	return 0;
}