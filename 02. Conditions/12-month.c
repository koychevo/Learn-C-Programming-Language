#include <stdio.h>

int main(){
    
   	int month;
   	printf("Enter number between 1 and 12: ");
   	scanf("%d", &month);
   	
   	switch(month){
   		case 1:
		   printf("month: January \n");
		   printf("days: 31 \n");
		   break;	
		case 2:
		   printf("month: February \n");
		   printf("days: 28 or 29 \n");
		   break;
		case 3:
		   printf("month: March \n");
		   printf("days: 31 \n");
		   break;
		case 4:
		   printf("month: April \n");
		   printf("days: 30 \n");
		   break;
		case 5:
		   printf("month: May \n");
		   printf("days: 31 \n");
		   break;
		case 6:
		   printf("month: June \n");
		   printf("days: 30 \n");
		   break;
		case 7:
		   printf("month: July \n");
		   printf("days: 31 \n");
		   break;
		case 8:
		   printf("month: August \n");
		   printf("days: 31 \n");
		   break;
		case 9:
		   printf("month: September \n");
		   printf("days: 30 \n");
		   break;
		case 10:
		   printf("month: Octomber \n");
		   printf("days: 31 \n");
		   break;
		case 11:
		   printf("month: November \n");
		   printf("days: 30 \n");
		   break;
		case 12:
		   printf("month: December \n");
		   printf("days: 31 \n");
		   break;
		default:
			printf("Wrong input, number must be between 1 and 12");
			break;
	}
   	
   	return 0;
}
