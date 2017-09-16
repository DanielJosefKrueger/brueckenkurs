#include<stdio.h>

int main(){
  int zahl;
  printf("Geben Sie eine Zahl ein, deren Fakultaet berechnet werden sol\n");
  scanf("%d", &zahl);
  // in der variable Zahl ist nun die Zahl gespeichert, die getestet werden soll; now its ur turn

  int fak = 1;
  for(int i =1; i <=zahl; i++){
    fak *=i;
  }
  printf("Die Fakultaet von %d ist %d;", zahl, fak);

  return 0;
}
