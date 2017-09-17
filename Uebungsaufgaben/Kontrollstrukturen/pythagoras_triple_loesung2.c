#include<stdio.h>

int main(){
  int zahl;
  printf("Geben Sie eine Zahl ein\n");
  scanf("%d", &zahl);
  // in der variable Zal ist nun die Zahl gespeichert, die getestet werden soll; now its ur turn
  int counter =0;
  for(int a =1; a <=zahl; a++){
    for(int b=a+1; b<=zahl; b++){
      int c_square = a*a + b*b;
      //wurzel suchen
        for(int c = 1; c*c <= c_square&& c <= zahl; c++){
          if(c*c == c_square){
            //printf("%d, %d und %d sind ein Pythagoras Tripple\n", a,b,c);
            counter++;
          }
        }


    }
  }
  printf("Insgedamt gibt es %d Triple bis %d", counter, zahl);
  return 0;
}
