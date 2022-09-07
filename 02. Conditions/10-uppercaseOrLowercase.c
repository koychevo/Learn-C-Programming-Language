#include <stdio.h>

int main(){
    
    char letter;
    
    printf("Enter letter: ");
    scanf("%c", &letter);
    
    if(letter >= 'A' && letter <= 'Z'){
    	printf("%c is capital letter", letter);
	} else if(letter >= 'a' && letter <= 'z'){
		printf("%c is small letter", letter);
	} else {
		printf("%c is not alphabetic");
	}
    
	return 0;
}
