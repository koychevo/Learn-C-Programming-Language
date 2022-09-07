#include <stdio.h>

int main(){
    
   	int firstAngle, secondAngle, thirdAngle;
	   
	printf("Enter the angles of a triangle\n");
	printf("first angle: ");
	scanf("%d", &firstAngle);   		
	printf("second angle: ");
	scanf("%d", &secondAngle);
	printf("third angle: ");
	scanf("%d", &thirdAngle);
	
	if(firstAngle < 0 || secondAngle < 0 || thirdAngle < 0) {
		printf("All angles must be positive!");
	} else if(firstAngle + secondAngle + thirdAngle == 180){
		printf("Triangle with angles %d %d %d is valid", firstAngle, secondAngle, thirdAngle);
	} else {
		printf("Triangle with angles %d %d %d is not valid", firstAngle, secondAngle, thirdAngle);
	}
	
	return 0;
}
