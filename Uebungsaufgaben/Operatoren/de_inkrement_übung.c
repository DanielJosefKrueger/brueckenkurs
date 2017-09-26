#include<stdio.h>

int main(){
	int zahl, eingabe;
	printf("Geben Sie eine Zahl ein:\n");
	scanf("%d", &eingabe);   //zum Beispiel 2

	zahl = eingabe; //zurücksetzen auf die Eingabe des Benutzers
	printf("Mit Präinkrement: %d\n", ++zahl); //wird zuerst erhöht und dann als 3 ausgegeben

	zahl = eingabe;//zurücksetzen auf die Eingabe des Benutzers
	printf("Mit Postinkrement: %d\n", zahl++); // sie wird zuerst als 2 ausgegeben, danach erhöht
	printf("Erst jetzt ist sie erhöht: %d\n", zahl); //hier unten ist sie 3

	zahl = eingabe;//zurücksetzen auf die Eingabe des Benutzers
	printf("Mit Prädekrement: %d\n", --zahl); //die Zahl wird erst vermindert, dann ausgegeben

	zahl = eingabe;//zurücksetzen auf die Eingabe des Benutzers
	printf("Mit Postdekrement: %d\n", zahl--);// sie wird zuerst als 2 ausgegeben, danach vermindert
	printf("Erst jetzt ist sie vermindert: %d\n", zahl);//hier unten ist sie 1

	return 0;
}
