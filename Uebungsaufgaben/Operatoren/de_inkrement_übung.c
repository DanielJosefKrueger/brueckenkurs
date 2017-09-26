#include<stdio.h>

int main(){
	int zahl, eingabe;
	printf("Geben Sie eine Zahl ein:\n");
	scanf("%d", &eingabe);
	zahl = eingabe;
	printf("Mit Präinkrement: %d\n", ++zahl);
	zahl = eingabe;
	printf("Mit Postinkrement: %d\n", zahl++);
	zahl = eingabe;
	printf("Mit Prädekrement: %d\n", --zahl);
	zahl = eingabe;
	printf("Mit Postdekrement: %d\n", zahl--);

	return 0;
}
