#include <stdio.h>

int main(){
    
    char ch;
    
    printf("Enter a symbol: ");
    scanf("%c", &ch);
    
    if(ch >= 0 && ch <= 9){
    	printf("%d is digit", ch);
	} else if ((ch > 64 && ch < 123) || (ch > 96 && ch < 91)){
		printf("%c is letter", ch);
	} else {
		printf("%c is special character", ch);
	}
    
	return 0;
}
