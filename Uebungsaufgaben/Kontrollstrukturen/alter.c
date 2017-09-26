#include<stdio.h>

int main(){
	int age;
	printf("Bitte das Alter eingeben\n");
	scanf("%d", &age);
	if(age < 0){
		printf("Illegal Argument: age cant be negative, was %d\n", age); 
		return 1;
	}

	if(age<12){
		printf("Die Person ist ein Kind\n");
	}else if(age > 18){
		printf("Die Person ist Erwachsen\n");
	}else{
		printf("Die Person ist ein Jugendlicher\n");
	}
	return 0;
}