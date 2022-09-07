#include <stdio.h>
#include <ctype.h>

int main(){
    
    char letter; 
    printf("Type a letter from english alphabet here: ");
    scanf("%c", &letter);
    
    letter = tolower(letter);
    
    if(letter < 97 || letter > 122) {
    	printf("Your did  not enter a letter from the english alphabet");
	} else if(letter == 97 || letter == 101 || letter == 105 || letter == 111 || letter == 117){
		printf("the letter %c is vowels", letter);
	} else {
		printf("the letter %c is consonant", letter);
	}
    
	return 0;
}
