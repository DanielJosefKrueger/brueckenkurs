#include<stdio.h>

int main(){
  int zahl;
  printf("Geben Sie eine Zahl ein, deren Fakultaet berechnet werden soll\n");
  scanf("%d", &zahl);

  int fak = 1;
  for(int i =1; i <=zahl; i++){
    fak *=i;
  }
  printf("Die Fakultaet von %d ist %d;", zahl, fak);

  return 0;
}
