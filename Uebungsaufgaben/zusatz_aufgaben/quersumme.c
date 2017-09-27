/*
 * quersumme.c
 *
 *  Created on: 27.09.2017
 *      Author: s-dkrueg
 */


#include<stdio.h>

int quersumme(int zahl){

	int summe =0;
	while(zahl >0){

		int letzte_stelle = zahl%10;
		summe = summe + letzte_stelle;
		zahl = zahl /10;
	}
	return summe;
}


int main(){
	int zahl;
	printf("Geben Sie eine Zahl ein\n ");
	scanf("%d", &zahl);
	int q_summe = quersumme(zahl);
	printf("Die Quersumme von %d ist %d", zahl, q_summe);

	return 0;
}


