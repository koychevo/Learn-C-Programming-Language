#include <stdio.h>
#include <math.h>

int main() {
	
	float side, area;
	
	printf("Enter the side of a rectangle: \n");
	scanf("%f", &side);
	
	area = sqrt(3) / 4 * side * side;
	
	printf("The area of an equilateral triangle with side %.2f is %.2f", side, area);
	
	return 0;
}