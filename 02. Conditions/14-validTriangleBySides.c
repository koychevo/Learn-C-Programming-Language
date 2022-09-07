#include <stdio.h>

int main(){
    
	int sideA, sideB, sideC;
	
	printf("Enter all sides of a triangle \n");
	printf("side a: ");
	scanf("%d", &sideA);
	printf("side b: ");
	scanf("%d", &sideB);
	printf("side c: ");
	scanf("%d", &sideC);
	
	if(sideA + sideB > sideC && sideA + sideC > sideB && sideB + sideC > sideA){
		printf("The triangle with sides %d %d %d is valid.", sideA, sideB, sideC);
	} else {
		printf("The triangle with sides %d %d %d is not valid.", sideA, sideB, sideC);
	}
	
	return 0;
}
