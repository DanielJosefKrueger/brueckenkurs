/*
 * noten_einlesen.c
 *
 *  Created on: 27.09.2017
 *      Author: s-dkrueg
 */

#include<stdio.h>

int main() {

	int noten[5];


	for (int i = 0; i < 5; i++) {
		// <=4 geht genauso
		printf("Bitte die %d.Note eingeben:\n", i + 1);
		scanf("%d", &noten[i]);
	}



	//itierieren über array
	for (int i = 0; i < 5; i++) {
		// <=4 geht genauso
		printf("Die %d.Note war %d.\n",i+1, noten[i]);
		noten[i]=0;
	}

	return 0;

}
