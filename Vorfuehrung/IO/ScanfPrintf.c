#include<stdio.h>

int main(){
	int gzahl;
	float kommazahl;
	long lange_zahl;
	char buchstabe;

	printf("Geben Sie einen Buchstaben ein\n");
	scanf("%c", &buchstabe);
	printf("Der Buchstabe war %c\n", buchstabe);
	
	printf("Geben Sie eine Ganze Zahl ein\n");
	scanf("%d", &gzahl);
	printf("Die ganze Zahl war %d\n", gzahl);


	printf("Geben Sie eine Kommazahl ein\n");
	scanf("%f", &kommazahl);
	printf("Die Kommazahl war %.2f\n", kommazahl);

	printf("Geben Sie eine lange Zahl ein\n");
	scanf("%ld", &lange_zahl);
	printf("Die ganze Zahl war %ld\n", lange_zahl);




	return 0;
}