#include<stdio.h>


int length_string(char wort[]){
  int index =0;
  char c = wort[index];
  while(c != '\0'){
    index++;
    c = wort[index];
  }
  return index;

}


int main(){
  char wort[] = {
    "abcd"
  };
  int length = length_string(wort);
  printf("%s hat die laenge %d\n", wort, length );
  return 0;


}
