#include <stdio.h>

int main() {
	
	float sideA, sideB;
	float perimeter, area;
	
	printf("Enter the sides ot a rectangle: \n");
	scanf("%f %f", &sideA, &sideB);
	
	perimeter = 2 * (sideA + sideB);
	area = sideA * sideB;
	
	printf("The perimeter of a rectangle with sides %.2f x %.2f is %.2f\n", sideA, sideB, perimeter);
	printf("The area of a rectangle with sides %.2f x %.2f is %.2f\n", sideA, sideB, area);
		
	return 0;
}