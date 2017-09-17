#include<stdio.h>

int main(){
  char buffer[256];
  printf("Geben Sie das Wort ein\n");
  fgets(buffer, 255, stdin);

  for(int i =0; i <256 && buffer[i] != '\0'; i++){
    printf("%c", buffer[i]);
  }
  return 0;
}
