/*
 * wurzel.c
 *
 *  Created on: 27.09.2017
 *      Author: s-dkrueg
 */

#include<stdio.h>
int wurzel(int zahl){
	for(int i =1; i*i <= zahl; i++){
		if(i*i == zahl){
			return i;
		}
	}
	return 0;
}


int main(){
	int zahl;
	printf("Geben Sie eine Zahl ein\n ");
	scanf("%d", &zahl);
	int ret = wurzel(zahl);

	if(ret ==0){
		printf("Die eingegebene Zahl war keine Quadratzahl");
	}else{
		printf("%d ist die Wurzel von %d", ret, zahl);
	}
	return 0;
}
