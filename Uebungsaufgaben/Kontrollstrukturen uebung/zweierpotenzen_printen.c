

#include<stdio.h>

int main(){
  long ergebnis = 1;
  for(int i = 0; i <=62; i++){
    printf("2 hoch %d ist %ld \n", i, ergebnis);

    ergebnis = ergebnis *2;

  }
  return 0;
}
