#include<stdio.h>

int main(){
	int start = 'A';
	int end = 'z';
	for(int i = start; i <= end; i++){
		printf("Der Buchstabe %c entspricht der Zahl %d\n",i, i);
	}
}