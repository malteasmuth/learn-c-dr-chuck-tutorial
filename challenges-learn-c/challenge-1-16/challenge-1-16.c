/* Exercise 1-16. Write a program to remove trailing blanks and tabs from each line of input,
 * and to delete entirely blank lines.*/


/* Pseudocode:

  1. store the first line of input in char array
  2. while doing so, check if first char is blank or tab, if so, don't store this char
  3. after storing check if last char is blank or tab, if so, replace with '\0'
  3.b if not, add '\0'
  4. return to main and print line
  5. repeate with next line

*/

#include <stdio.h>

#define MAXLENGTH 10

int read_line(char line[]){

  int input;
  int i;

  while((input = getchar()) != EOF && input != '\n'){

    line[i] = input;
  }


}

int main() {


}
