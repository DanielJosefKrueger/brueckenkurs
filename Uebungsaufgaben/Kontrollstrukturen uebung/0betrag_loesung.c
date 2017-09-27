/*
 * betrag.c
 *
 *  Created on: 27.09.2017
 *      Author: s-dkrueg
 */


#include<stdio.h>


int betrag (int i){
	if(i <0){
		return -i;
	}else{
		return i;
	}
}


int main(){
	int input;
	printf("Bitte Zahl eingeben");
	scanf("%d", &input);
	printf("Der Betrag ist %d", betrag(input));
	return 0;
}
