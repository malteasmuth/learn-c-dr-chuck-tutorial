/* Exercise 1-15. Write a program to print all lines that are longer than 80 characters. */

/* SOLUTION:
 *
 * READ a line, check if it is longer than 80 chars
 * IF so, print it
 * ELSE do nothing.
 * Continue with next line.
 *
 * */

#include <stdio.h>

#define LENGTH 1000


/*get input into line, return length of current line*/
int readLine (char currentLine[]){

	int c = 0;
	int i = 0;

	while((c = getchar()) != EOF && c != '\n' &&  i <= LENGTH){

		currentLine[i] = c;
		i++;
	}
	return i;
}


/*prints current line to output screen */
int printLine(char line[], int len){

	for(int i = 0; i < len; i++){
		putchar(line[i]);
	}
}


int main(){

	int minLength;
	int input;
	int len; /*current line length */
	char line[LENGTH];

	minLength = 5;

	while((len = readLine(line)) > 0){
	
		if (len >= minLength)
			printLine(line, len);
	}
}
