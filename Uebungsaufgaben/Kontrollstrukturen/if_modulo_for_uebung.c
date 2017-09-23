#include<stdio.h>


int main(){

  for(int i=1; i <=500; i++){
    if(i%7==0){
      printf("%d ist durch 7 teilbar\n", i);
    }

    if(i%9==0){
      printf("%d ist durch 9 teilbar\n", i);
    }


    if(i%7==0 && i%9==0){
      printf("%d ist auch durch 63 teilbar\n", i);
    }

    if(i%7==0 || i%9==0){
      printf("%d ist durch 7 oder 9 teilbar\n", i);
    }
  }
  return 0;
}
