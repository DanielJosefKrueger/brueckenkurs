#include<stdio.h>

int heat_ram(){

  double b[100000];
  for(int i =0; i < 100000; i++){
      b[i] = srand();
  }
  return 0;
}

int main(){

  heat_ram();
  int a[10000];
  for(int i =0; i < 10000; i++){
      if(i%10 ==0){
        if(a[i]!=0){
            printf("Der Wert von a ist %d\n", a[i]);
        }
      }
  }
  return 0;
}
