#include<stdio.h>

int main(){
  char buffer[256];
  printf("Geben Sie das Wort ein\n");
  fgets(buffer, 255, stdin);


  //laenge des strngs ausrechnen

  int length =0;

  for(int i =0; i <256 && buffer[i] != '\0'; i++){
    length++;
  }

  char inverted_string[length+1];
  inverted_string[length+1] = '\0';

  for(int i = length-1,  k=0; i >= 0; i--, k++){
    inverted_string[k]  = buffer[i];
  }

  printf("%s\n", inverted_string);
  return 0;
}
