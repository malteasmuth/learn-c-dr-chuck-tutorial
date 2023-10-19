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

int read_line(char line[], int length){

  int input;
  int i = 0;

  while((input = getchar()) != EOF && input != '\n' && i <= length - 1){

    if(i == 0 && (input == '\t' || input == ' ')){
      ;
    }

    else{
      line[i] = input;
      ++i;
    }
  }

  if(line[i-1] == '\t' || line[i-1] == ' '){
    line[i-1] = '\0';
  }

  else{
    line[i] = '\0';
  }

  return i;
}

int main() {

  int maxlength = MAXLENGTH;
  char currentLine[MAXLENGTH];
  int len, i;

  while((len = read_line(currentLine, maxlength)) > 0){
    printf("%s", currentLine);
  }
}
