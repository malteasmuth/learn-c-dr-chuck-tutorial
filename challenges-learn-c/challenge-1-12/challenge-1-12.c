/* Exercise 1-12. Write a  program to print a histogram of the lengths of words in its input.
 *  It is easiest to draw the histogram horizontally; a vertical orientation is more challenging.*/

#include <stdio.h>

int main(){

	/*Solution 1: We read the input. 
	 * While input is not EOF, if input is not \n, \t or "",
	 * We increment wordLength by 1.
	 * If input is \n, \t or "", we print "-" with a for loop  and set counter to 0.
	 * Then start with the next word until we hit EOF */

	/*Solution 2: We read the input, char by char.
	 * 
	 * Computation.
	 * If input is not \n, \t or ' ', we increment wordLength by 1.
	 * If input is \n, \t or ' ', we store wordLength at array position i and and switch to position i++
	 *
	 * Output.
	 * We iterate over the array. With a for loop, we print '*' as many times as the wordLength stored in the array position.
	 * */

	/* declaration */
	int input, wordLength, i, j;
	int histogram[30];
	int wordCounter = 0;

	/* initialization*/
	wordLength = i = j = 0;	
	for(i = 0; i < 30; i++){
		histogram[i] = 0;
	}

	/* get input */    

	while((input = getchar()) != EOF){
	
		if(input == '\n' || input == '\t' || input == ' '){

			histogram[j] = wordLength;
			wordLength = 0;
			wordCounter++;
			j++;
			
		}

		else{
			wordLength++;
		}	
	}

	/* create output*/

	printf("Length of words\n");
	printf("---------------\n");

	for(i = 0; i <= wordCounter; i++){
	
		printf("%d\t| ", i + 1);

		for(j = 0; j < histogram[i]; j++){
		
			printf("*");
		}

		printf("\n");

	}

}


