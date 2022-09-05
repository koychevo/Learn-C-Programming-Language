#include <stdio.h>
#include <math.h>

int main() {
	
	float radius, circumference, area;
	
	printf("Enter the radius of the circle: \n");
	scanf("%f", &radius);
	
	circumference = 2 * M_PI * radius;
	area = M_PI * radius * radius;
	
	printf("The circle with radius %.2f has circumference %.2f and area %.2f", radius, circumference, area);
		
	return 0;
}