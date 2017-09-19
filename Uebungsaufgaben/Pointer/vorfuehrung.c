#include<stdio.h>

int changes_nothing(int c){
  c=2; // der kopierte Wert von my_vribale wird überschrieben
  return c;
}

void this_works(int* c){
  *c = 13; //der Wert, der am Speicherort von my_variable (der Speicherort ist ja in c gespeichert) liegt wird überschrieben
}

void this_does_not_work(int* c){
  c =16; //unsere Variable, die den Speicherort als Wert hatte, wird auf 13 gesetzt
}


int main(){
  int my_variable = 1;
  printf("Die Variable hat den Wert %d\n", my_variable);
  changes_nothing(my_variable);
  printf("Die Variable hat immernoch den Wert %d\n", my_variable);
  this_works(&my_variable);
  printf("Die Variable hat jetzt den Wert %d\n", my_variable);
  this_does_not_work(&my_variable);
  printf("Die Variable hat immernoch den Wert %d\n", my_variable);
  return 0;
}
