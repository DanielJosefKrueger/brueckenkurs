#include<stdio.h>



long fak(long k){
  long fak = 1;
  for(int i =1; i <=k; i++){
    fak = fak *i;
  }
  return fak;
}

int main(){
  long n;
  long k;
  printf("Geben Sie n ein\n");
  scanf("%ld", &n);
  printf("Geben Sie k ein\n");
  scanf("%ld", &k);

  long binomial_koeffizient = fak(n) /(fak(n-k)*fak(k));
  printf("Der Binomialkoeffizient von %ld aus %ld ist %ld", k, n , binomial_koeffizient);
  return 0;
}
