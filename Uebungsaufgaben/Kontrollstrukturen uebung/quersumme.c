#include<stdio.h>


int quersumme(int k){
  int summe =0;
  while(k >0){
    summe =summe + k%10;
    k = k/10;
  }
  return summe;
}


int main(){
  int n;
  printf("Geben Sie eine Zahl ein:\n");
  scanf("%d", &n);
  printf("Die Quersumme von %d ist %d\n", n , quersumme(n));
  return 0;
}
