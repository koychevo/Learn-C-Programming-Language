#include <stdio.h>

int main() {
	
	float feets, meters;
	
	printf("Insert feets here: ");
	scanf("%f", &feets);
	
	meters = feets * 0.3048;
	
	printf("%.2f feets are %.2f meters. \n", feets, meters);
		
	return 0;
}