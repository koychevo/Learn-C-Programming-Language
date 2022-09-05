#include <stdio.h>

int main() {
	
	int days, weeks, years, inputDays;
	
	printf("Enter days: ");
	scanf("%d", &inputDays);
	
	years = inputDays / 365;
	weeks = (inputDays % 365) / 7;
	days = inputDays - 365 * years - 7 * weeks;
	
	printf("%d days are %d years, %d weeks and %d days", inputDays, years, weeks, days); 
		
	return 0;
}