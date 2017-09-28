/*
 * einlesen.c
 *
 *  Created on: 27.09.2017
 *      Author: s-dkrueg
 */

#include<stdio.h>

/**
 * reads a word until user tips 0
 */
void read_string(char word[], int max_length) {
	char input;
	scanf("%c", &input);
	int index;
	for (index = 0; input != '0' && index < max_length - 1; index++) {
		word[index] = input;
		scanf("%c", &input);
	}
	word[index] = '\0';
}
/**
 * returns the length of the word
 */
int length(char word[]){
	// über das array iterieren bs \0 gefunden,
	// dabei merken wie weit man gegangen ist
	int index =0;
	while(word[index] != '\0'){
		index++;
	}
	return index;
}


/**
 * prints a word
 */
void print_string_per_char(char word[]){
	for(int i =0; word[i] != '\0'; i++){
		printf("%c", word[i]);
	}
}

int main() {
	int max_length = 1000;

	char word[max_length];
	read_string(word, max_length);
	int laenge = length(word);
	printf("Der eingegebene Satz ist %d lang\n", laenge);
	printf("Es wurde der Satz:\n");
	print_string_per_char(word);
	printf("eingegeben\n");

	return 0;
}
