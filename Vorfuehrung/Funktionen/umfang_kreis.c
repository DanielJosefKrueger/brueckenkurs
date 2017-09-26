#include<stdio.h>

float umfang_kreis(float radius){
	return radius *2 * 3.1415; 
}

void print(float r){
	printf("Der UMfang des Kreises mit Radius %.2f ist %.2f\n", r, umfang_kreis(r));
}


int main(void){
	float r;
	printf("Bitte geben Sie den Radius des Kreises ein:\n");
	scanf("%f", &r);
	print(r);
	return 0;

}