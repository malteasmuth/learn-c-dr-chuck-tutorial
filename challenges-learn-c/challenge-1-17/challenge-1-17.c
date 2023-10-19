/*Exercise 1-17. Write a function reverse(s) which reverses the character string s.
Use it to write a program which reverses its input a line at a time.*/

/*Pseudocode
  1. get a line of input and store it in array s
  2. write a function reverse that takes s and transformes the array
  3.

*/


#include <stdio.h>

#define MAXLENGTH 10

int reverse(char string[], int len){

  printf("running");

  int i;
  int k = 0;
  char reversed[len];

  for(i = len; i >= 0; i--){
    reversed[k] = string[i];
    k++;
  }

  for(i = 0; i <= len; i++){
    string[i] = reversed[i];
  }

  printf("still running\n");
  printf("%s", string);

  string[i] = '\0';
  return 0;
}

int getLine(char line[], int len){

  int input;
  int i = 0;

  while((input = getchar()) != EOF && input != '\n'){
    line[i] = input;
    i++;
  }
  
  printf("%d", i);
  return i;
}

int main(){

  char s[MAXLENGTH];
  int sLength;

  while((sLength = getLine(s, MAXLENGTH)) > 0){
    printf("%d", sLength);
    reverse(s, sLength);
    printf("%s\n", s);
  }
}
