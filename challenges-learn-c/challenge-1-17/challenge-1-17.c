/*Exercise 1-17. Write a function reverse(s) which reverses the character string s.
Use it to write a program which reverses its input a line at a time.*/

/*Pseudocode
  1. get a line of input and store it in array s
  2. write a function reverse that takes s, writes each letter backwords into reversed[]
  3. careful with '/0'

*/


#include <stdio.h>

#define MAXLENGTH 10

int reverse(char string[], int len){

  int i;
  int k = 0;
  char reversed[len];

  for(i = len-1; i >= 0; i--){

    reversed[k] = string[i];
    k++;
  }

  for(i = 0; i < len; i++){
    string[i] = reversed[i];
  }

  string[i] = '\0';

  return 0;
}

int getLine(char line[], int len){

  int input;
  int i;

  for(i = 0; i < MAXLENGTH-1 && (input = getchar()) != EOF && input != '\n'; ++i){

    line[i] = input;

    if(input == '\n'){
      line[i] == '\0';
    }
  }

  return i;
}

int main(){

  char s[MAXLENGTH];
  int sLength;

  while((sLength = getLine(s, MAXLENGTH)) > 0){
    reverse(s, sLength);
    printf("%s\n", s);
  }
}
