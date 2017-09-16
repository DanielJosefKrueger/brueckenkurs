#include<stdio.h>

int main(){
  int zahl;
  printf("Geben Sie eine Zahl ein\n");
  scanf("%d", &zahl);
  // in der variable Zal ist nun die Zahl gespeichert, deren Primfaktoren angezeigt werden soll; now its ur turn
  int tmp = zahl;
  while(tmp >1){
    for(int i =2; i*i < tmp; i++){
      if(tmp % i ==0){
        tmp = tmp/i;
        printf("%d ist ein Primfaktor von %d", i, zahl);
        break;
      }
    }
  }
  return 0;
}
