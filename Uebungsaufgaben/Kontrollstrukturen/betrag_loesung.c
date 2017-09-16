#include<stdio.h>

int main(){
  int zahl;
  printf("Geben Sie eine Zahl ein\n");
  scanf("%d", &zahl);
  // in der variable Zal ist nun die Zahl gespeichert, die getestet werden soll; now its ur turn

  if(zahl <0){
    zahl = -zahl;
  }
  printf("Der Betrag ist %d", zahl);

  return 0;
}
