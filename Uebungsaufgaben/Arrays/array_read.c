/*
 * array_read.c
 *
 *  Created on: 28.09.2017
 *      Author: s-dkrueg
 */


#include<stdio.h>

/**
 * liest den Inhalt eines Arrays von der Konsole ein
 */
void read_array(int a[], int laenge_array){

	for(int i=0; i < laenge_array; i++){
		printf("Bitte geben Sie die %d.te Zahl ein:", i+1);
		scanf("%d", &a[i]);
	}
}

/**
 * gibt den Inhalt eines Arrays auf der KOnsole aus
 */

void print_array(int a[], int laenge_array){

	for(int i= 0; i < laenge_array; i++){
		printf("%d\n", a[i]);
	}
}


/**
 * setzt alle Werte der Felder auf einen neuen Wert
 */
void set_array(int a[], int laenge_array, int wert){
	for(int k =0; k < laenge_array; k++){
		a[k] = wert;
	}
}


int main(){

	int laenge = 4;
	int neuer_wert;


	int beispiel[laenge];
	read_array(beispiel, laenge);
	print_array(beispiel, laenge);

	printf("Geben Sie den Wert ein, auf den die Felder arrays gesetzt werden sollen:");
	scanf("%d", &neuer_wert);

	set_array(beispiel, laenge, neuer_wert);
	print_array(beispiel, laenge);

	return 0;
}

