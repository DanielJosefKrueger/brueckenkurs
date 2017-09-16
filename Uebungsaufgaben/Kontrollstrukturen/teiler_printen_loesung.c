#include<stdio.h>

int main(){
  int zahl;
  printf("Geben Sie eine Zahle ein\n");
  scanf("%d", &zahl);
  // in der variable Zal ist nun die Zahl gespeichert, die getestet werden soll; now its ur turn

  for(int i =0; i*i < zahl; i++){
    if(zahl%i==0){
        printf("%d ist ein Teiler von %d", i, zahl);
    }
  }
  return 0;
}
