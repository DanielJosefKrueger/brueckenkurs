#include<stdio.h>

int main(){
  int zahl;
  printf("Geben Sie eine Zahl ein\n");
  scanf("%d", &zahl);
  // in der variable Zal ist nun die Zahl gespeichert, die getestet werden soll; now its ur turn
  int betrag = zahl;
  if(zahl <0){
    betrag = -betrag;
  }
  printf("Der Betrag von %d ist %d", zahl, betrag)
  return 0;
}
