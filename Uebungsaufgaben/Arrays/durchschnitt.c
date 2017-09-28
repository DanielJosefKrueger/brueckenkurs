/*
 * durchschnitt.c
 *
 *  Created on: 28.09.2017
 *      Author: s-dkrueg
 */






#include<stdio.h>



int main(){

	int noten[4];
	//einlesen der Noten
	for(int i =0; i < 4; i++){
		printf("Bitte geben Sie die %d.te Note ein:\n", i+1);
		scanf("%d", &noten[i]);
	}
	//ausgeben der noten
	for(int i =0; i < 4; i++){
		printf("Die %d.te Note ist: %d\n", i+1, noten[i]);
	}

	//summieren der noten
	int summe =0;

	for(int i=0; i<4; i++){
		summe = summe + noten[i];
	}

	printf("Die Summe der Noten war %d", summe);
	float durchschnitt = summe/4.0;
	printf("Der Durchschnitt war %.2f", durchschnitt);

	return 0;
}
