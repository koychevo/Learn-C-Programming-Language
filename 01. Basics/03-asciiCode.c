#include <stdio.h>

int main() {
	
	char symbol;
	
	printf("Enter a character: ");
	scanf("%c", &symbol);
	
	printf("The ASCII code of '%c' is %d", symbol, symbol);
	
	return 0;
}