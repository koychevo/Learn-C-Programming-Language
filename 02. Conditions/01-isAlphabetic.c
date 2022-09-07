#include <stdio.h>

int main() {
	
	char ch;
	
	printf("Enter a symbol: ");
	scanf("%c", &ch);
	
	printf("The symbol you entered '%c' is ", ch);
	(ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122) ?
		printf("alphabetic. \n") :
		printf("not alphabetic. \n");
		
	return 0;
}