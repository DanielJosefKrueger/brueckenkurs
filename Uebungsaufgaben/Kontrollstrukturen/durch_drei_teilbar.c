#include<stdio.h>

int main(){
  int limit;
  printf("Geben Sie das Limit ein:\n");
  scanf("%d", &limit);
  for(int i =1; i <=limit; i++){
    if(i%3 ==0){
      printf("%d ist durch 3 teilbar\n", i);
    }
  }


  return 0;
}
