/*
 * zahlen_kuezen.c
 *
 *  Created on: 27.09.2017
 *      Author: s-dkrueg
 */
#include<stdio.h>

void kuerzen(int temp) {
	while (temp > 0) {
		printf("%d\n", temp);
		temp = temp / 10;
	}
}


int main(){
	int zahl;
	printf("Geben Sie eine Zahl ein\n ");
	scanf("%d", &zahl);
	kuerzen(zahl);
	return 0;
}
