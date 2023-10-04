/*Write a program to copy its input to its output, replacing
 * each string of one or more blanks by a single blank*/

#include <stdio.h>

int main(){

	int input;
	int str_counter = 0;

	while((input = getchar()) != EOF){
		
		if(input == ' ' && str_counter >= 1){
			str_counter++;
		}

		else if(input == ' '){
			str_counter++;
			putchar(input);
		}

		else{
			putchar(input);
			str_counter = 0;
		}
			
	}
}
