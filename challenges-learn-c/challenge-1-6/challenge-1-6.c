/* Exercise 1-6 */
/* write a program to count blanks, tabs, and newlines from input */

#include <stdio.h>

int main(){

	int blanks = 0;
	int tabs = 0;
	int newlines = 0;
	int input;

	while((input = getchar()) != EOF){

		if (input  == ' '){
			blanks++;
		}

		if (input  == '\t'){
			tabs++;
		}

		if (input  == '\n'){
			newlines++;
		}
	}

	printf("Blanks: %d, Tabs: %d, Newlines: %d", blanks, tabs, newlines); 
}


