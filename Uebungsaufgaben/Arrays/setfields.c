#include<stdio.h>


void set_array(int array[], int wert, int laenge_array){
  for(int i =0; i < laenge_array; i++){
    array[i]= wert;
  }
}

void load_array(int array[], int laenge){
  for(int i =0; i < laenge; i++){
    printf("Geben Sie den %d. Wert ein:\n", i+1);
    scanf("%d", &array[i]);
  }
}

void print_array(int array[], int laenge){
  for(int i =0; i < laenge; i++){
    printf("Der %d.te Wert war %d:\n", i+1, array[i]);
  }
}


int main(){
  int array[5];
  int wert;
  printf("Geben Sie den Wert ein auf den das Array gesetzt werden soll\n");
  scanf("%d", &wert);
  load_array(array, 5);
  set_array(array, wert, 5);
  print_array(array, 5);
  return 0;
}
