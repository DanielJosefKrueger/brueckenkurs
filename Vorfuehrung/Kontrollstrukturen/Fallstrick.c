#include<stdio.h>

int main(){

	int a = 0;

	if( a=0){
	//Achtung Zuweisung! 
	//Rückgabewert einer Zuweisung ist der zugewiesene Wert, also 0! => falsch
		printf("Sollte doch ausgeprintet werden oder?\n");
	}else{
		printf("Das sollte nicht ausgeprintet werden oder?\n");
	}

	return 0;

}