/*
 * gerade.c
 *
 *  Created on: 27.09.2017
 *      Author: s-dkrueg
 */

#include<stdio.h>

int ist_gerade(int zahl){
	if(zahl%2==0){
		return 1;
	}else{
		return 0;
	}
}

int main(){
	int zahl;
	printf("Geben Sie eine Zahl ein\n ");
	scanf("%d", &zahl);

	if(ist_gerade(zahl)){
		//wird ausgeführt bei return 1;
		printf("Die Zahl ist gerade");
	}else{
		printf("Die zahl ist ungerade");
	}
	return 0;
}
