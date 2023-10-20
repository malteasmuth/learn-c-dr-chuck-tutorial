/*Write a program detab which replaces tabs in the input with the proper number
of blanks to space to the next tab stop. Assume a fixed set of tab stops,
say every n positions.*/

#include <stdio.h>

#define TABSTOP 4

int sformat(char line[], char copy[], int length){

  int i, position, k, distanceNextTab;

  i = position = k = 0;
  distanceNextTab = TABSTOP;

  while (i <= 100){

    if(line[i] == '\t'){
      i++;
      while(distanceNextTab > 0) {
        copy[k] = ' ';
        k++;
        distanceNextTab--;
      }
      distanceNextTab = TABSTOP;
    }

    else{
      copy[k] = line[i];
      k++;
      i++;
      distanceNextTab--;
    }
  }
}

int get_line(char line[]){

  int c, i;

  i = 0;
  while(i < 100-1 && (c = getchar()) != EOF && c != '\n'){
    line[i] = c;
    i++;
  }

  if(c == '\n'){
    line[i] = c;
    i++;
  }

  line[i] = '\0';
  return i;
}


int main(){

  char line[100];
  char copy[100];
  int len;

  while((len = get_line(line)) > 0){
    sformat(line, copy, len);
    printf("%s", line);
    printf("%s", copy);
  }
}
