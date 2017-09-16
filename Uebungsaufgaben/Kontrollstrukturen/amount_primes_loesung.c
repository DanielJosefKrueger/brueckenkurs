#include<stdio.h>

int main(){
  int zahl;
  printf("Geben Sie eine Zahl ein\n");
  scanf("%d", &zahl);
  // in der variable Zal ist nun die Zahl gespeichert, die getestet werden soll; now its ur turn

  int counter =0;

  for(int i =2; i <= zahl; i++){
    for(k=2; k*k <i; k++){
      int is_prime =1;
      if(i%k ==0){
        is_prime =0;
      }
    }
    if(is_prime){
      counter++;
    }
  }
  printf("Es gibt %d Primzahlen bis %d\n", counter, zahl);

  return 0;
}
