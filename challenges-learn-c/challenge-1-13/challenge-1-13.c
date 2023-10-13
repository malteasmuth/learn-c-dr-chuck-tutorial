/* Exercise 1-13. Write a program to convert its input to lower case,
 *  using a function lower(c) which returns c if c is not a letter,
 *  and the lower case value of c if it is a letter.*/

/* Solution: In the ASCII uppercase letters start from value 65 to 90,
 * lowercase letters start from 97 to 122.
 * 
 * 97 - 65 = 32.
 * 
 * Expectation: Adding 32 to the ASCII value of input c should return
 * the value of the lowercase letter equivalent.
 *
 * A funtion lower(c) will take c, check if c is not a letter, and proceed
 * by adding 32 to it, if it is a letter. It then will have to get translated
 * into a char again and returned to main.
 */

#include <stdio.h>

/*to test lower(c)*/

int lower(int letter){

	if(letter < 65 || letter > 90){
		return letter;
	}

	return(letter + 32);
}


int main(){

 	int input;
 
 	while((input = getchar()) != EOF){

		printf("%c", lower(input));
	}	
	
}



