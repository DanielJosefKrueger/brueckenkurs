#include<stdio.h>

int main(){
  int zahl;
  printf("Geben Sie eine Zahl ein\n");
  scanf("%d", &zahl);
  // in der variable Zal ist nun die Zahl gespeichert, die getestet werden soll; now its ur turn

  for(int i =0; i*i < zahl; i++){
    if(zahl%i==0){
        printf("Die Zahl ist keine Primzahl");
        return 0;
    }
  }
  printf("Die Zahl ist eine Primzahl");
  return 0;
}
