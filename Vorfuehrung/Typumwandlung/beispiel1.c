#include<stdio.h>

int main(){
  int zahl1;
  int zahl2;
  printf("Die erste Zahl bitte eingeben: ");
  scanf("%d", &zahl1);
  printf("Die zweite Zahl bitte eingeben: ");
  scanf("%d", &zahl2);
  float ergebnis = zahl1/zahl2;
  printf("%d geteilt durch %d ist %f\n", zahl1, zahl2, ergebnis );

  return 0;
}
