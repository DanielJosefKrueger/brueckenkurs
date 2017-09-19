#include<stdio.h>

void print_alle_noten(int array[], int anzahl){
  for(int i=0; i < anzahl; i++){
    printf("Die %d.Note lautet %d\n", i+1, array[i]);
  }
}

void print_alle_noten_pointer(int* pointer, int anzahl){
  for(int i=0; i < anzahl; i++){
    printf("Die %d.Note lautet %d\n", i+1, *(pointer+i));
  }
}

int main(){

  int noten[] = {
    2, 4, 1
  };
  printf("Die erste Note ist %d\n", noten[0]);
  printf("Die erste Note ist %d\n", *noten);

  printf("Die zweite Note ist %d\n", noten[1]);
  printf("Die zweite Note ist %d\n", *(noten+1));

  printf("Die zweite Note ist %d\n", noten[2]);
  printf("Die zweite Note ist %d\n", *(noten+2));
  print_alle_noten(noten, 3);
  print_alle_noten_pointer(noten, 3);
  return 0;
}
