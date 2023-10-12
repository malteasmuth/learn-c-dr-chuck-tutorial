/* Exercise 1-12. Write a program to print a histogram of the lengths of words in its input.
 *  It is easiest to draw the histogram horizontally; a vertical orientation is more challenging.*/

#include <stdio.h>

int main(){

	/*Solution: We read the input. 
	 * While input is not EOF, if input is not \n, \t or "",
	 * We increment wordLength by 1.
	 * If input is \n, \t or "", we print "-" with a for loop  and set counter to 0.
	 * Then start with the next word until we hit EOF */

	/* declaration */
	int input, wordLength, i;

	wordLength = i = 0;	

	/* get input */    

	while((input = getchar()) != EOF){
	
		if(input == '\n' || input == '\t' || input == ' '){
		
			for(i = 0; i < wordLength; i++){
			
				printf("-");
			}
			
			printf("\n");
			wordLength = 0;
		}

		else{
		
			wordLength++;
		}	
	}

}


