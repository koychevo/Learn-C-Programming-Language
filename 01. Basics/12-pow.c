#include <stdio.h>
#include <math.h>

int main() {
	
	int x, y;
	printf("Enter two integer numbers: ");
	scanf("%d %d", &x, &y);
	
	int result = pow(x, y);
	printf("%d ^ %d = %d", x, y, result); 
		
	return 0;
}