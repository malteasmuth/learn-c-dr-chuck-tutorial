/* Write a program which prints the words in its input, one per line. */

#include <stdio.h>

int main(){

	int input;
	int wc = 0;

	while((input = getchar()) != EOF){
	

		if(input == ' ' || input == '\t' || input == '\n'){
		
			input = '\n';
			wc++;
		}

		putchar(input);
	}

	printf("Anzahl Wörter: %d", (wc-1));
}
