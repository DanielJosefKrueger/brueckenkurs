/*
 * ausgabe.c
 *
 *  Created on: 27.09.2017
 *      Author: s-dkrueg
 */


#include<stdio.h>

int main(){

	char word[] ={"Hello World"};

	for(int i=0; word[i] != '\0'; i++){
		printf("%c", word[i]);
	}
	return 0;
}
