#include<stdio.h>


int multiplicate(int f1, int f2){
	return f1*f2;
}


float divide (int dividend, int divisor){
	return dividend/divisor; //Achtung int /int ergibt int!!
}


int main(){
	int input1, input2;
	printf("Bitte zwei Zahlen eingeben\n");
	scanf("%d", &input1);
	scanf("%d", &input2);
	
	int ret_multi = multiplicate(input1, input2); // Auffangen des Rückgabewertes
	printf("%d mal %d ist %d\n", input1, input2, ret_multi);

//printf("%d mal %d ist %d\n", input1, input2,multiplicate(input1, input2));
	
	float ret_div = divide(input1, input2);
	printf("%d durch %d ist %.3f\n", input1, input2, ret_div);
}