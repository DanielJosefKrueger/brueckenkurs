/*
 * kreis.c
 *
 *  Created on: 28.09.2017
 *      Author: s-dkrueg
 */


#include<stdio.h>
//#define PI 3.1415

const float PI = 3.1415;

double umfang(double radius){
	return PI*2*radius;
}

double flaeche(double radius){
	return radius*radius*PI;
}

int main(){
	double radius;
	printf("Bitte geben Sie einen Radius ein:");
	scanf("%lf", &radius);
	printf("Der Umfang des Kreises ist %.2f\n", umfang(radius));
	printf("Die Fläche des Kreises ist %.2f\n", flaeche(radius));

	return 0;
}
