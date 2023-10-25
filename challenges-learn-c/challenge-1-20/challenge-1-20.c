/*Write the program entab which replaces strings of blanks by the minimum number
 of tabs and blanks to achieve the same spacing.
 Use the same tab stops as for detab.*/

/*As with the last exercise, we need a function to get input
and another one, to check and replace strings of blanks.
I assume that the exercise talks about strings of blanks with a defined
length that is the same as a tabstop.*/

/*Meaning that we need the input string for a substring of "    "(4 blanks)*/

#include <stdio.h>

#define MAXBLANKS 4

int entab(char line[], char copy[], int length){


  int k, i, blankCounter;

  i = k = blankCounter = 0;

  for(i = 0; i < length; i++){

    if(blankCounter >= MAXBLANKS){
      copy[k - blankCounter] = '\t'; /*put a tab at place of first blank*/
      k = (k - blankCounter) + 1; /*put k position back to positon after first blank*/
      blankCounter = 0; /*reset blankCounter*/
    }

    copy[k] = line[i];

    if(line[i] == ' '){
      printf("Blanks in a row: %d\n", blankCounter);
      blankCounter++;
    }
    k++;
  }

  copy[k] = '\0';
}

/*get current input line and save it in line*/
int get_line(char line[]){

  int c, i;

  i = 0;

  while(i < 100-1 && (c = getchar()) != EOF && c != '\n'){
    line[i] = c;
    i++;

    if(c == '\n'){
      line[i] = c;
      i++;
    }
  }

  line[i] = '\0';
  return i;
}


/*organize program flow and call other fuctions*/
int main(){

  char line[100];
  char copy[100];
  int len = 0;

  printf("TabLength:1\t2\n");

  while((len = get_line(line)) > 0){
    entab(line, copy, len);
    printf("Line: %s\n", line);
    printf("Copy: %s\n", copy);
  };
}
