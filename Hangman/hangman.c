/*
 * hangman_fertig.c
 *
 *  Created on: 28.09.2017
 *      Author: s-dkrueg
 */




/*
 * hangman.c
 *
 *  Created on: 28.09.2017
 *      Author: s-dkrueg
 */

#include<stdio.h>

void print_stage1() {
	printf("                    |\n");
	printf("                    |\n");
	printf("                    |\n");
	printf("                    |\n");
	printf("                    |\n");
	printf("                    |\n");
	printf("                    |\n");
	printf("                    |\n");
	printf("                    |\n");
	printf("   ===              |\n");
	printf("  // \\\\             |\n");
	printf(" //   \\\\            |\n");
}

void print_stage2() {
	printf("                    |\n");
	printf("                    |\n");
	printf("   []               |\n");
	printf("   ()               |\n");
	printf("   ()               |\n");
	printf("   ()               |\n");
	printf("   ()               |\n");
	printf("   ()               |\n");
	printf("   ()               |\n");
	printf("   ===              |\n");
	printf("  // \\\\             |\n");
	printf(" //   \\\\            |\n");
}

void print_stage3() {
	printf("                    |\n");
	printf("                    |\n");
	printf("   []========       |\n");
	printf("   ()               |\n");
	printf("   ()               |\n");
	printf("   ()               |\n");
	printf("   ()               |\n");
	printf("   ()               |\n");
	printf("   ()               |\n");
	printf("   ===              |\n");
	printf("  // \\\\             |\n");
	printf(" //   \\\\            |\n");
}

void print_stage4() {
	printf("                    |\n");
	printf("                    |\n");
	printf("   []========       |\n");
	printf("   () /             |\n");
	printf("   ()/              |\n");
	printf("   ()               |\n");
	printf("   ()               |\n");
	printf("   ()               |\n");
	printf("   ()               |\n");
	printf("   ===              |\n");
	printf("  // \\\\             |\n");
	printf(" //   \\\\            |\n");
}

void print_stage5() {
	printf("                    |\n");
	printf("                    |\n");
	printf("   []========       |\n");
	printf("   () /     |       |\n");
	printf("   ()/      |       |\n");
	printf("   ()       |       |\n");
	printf("   ()               |\n");
	printf("   ()               |\n");
	printf("   ()               |\n");
	printf("   ===              |\n");
	printf("  // \\\\             |\n");
	printf(" //   \\\\            |\n");
}

void print_stage6() {
	printf("                    |\n");
	printf("                    |\n");
	printf("   []========       |\n");
	printf("   () /     |       |\n");
	printf("   ()/      |       |\n");
	printf("   ()       |       |\n");
	printf("   ()       0       |\n");
	printf("   ()               |\n");
	printf("   ()               |\n");
	printf("   ===              |\n");
	printf("  // \\\\             |\n");
	printf(" //   \\\\            |\n");
}

void print_stage7(){
	printf("  =-YOU WILL HANG-= |\n");
	printf("                    |\n");
	printf("   []========       |\n");
	printf("   () /     |       |\n");
	printf("   ()/      |       |\n");
	printf("   ()       |       |\n");
	printf("   ()       0       |\n");
	printf("   ()      \\|/      |\n");
	printf("   ()               |\n");
	printf("   ===              |\n");
	printf("  // \\\\             |\n");
	printf(" //   \\\\            |\n");
}

void print_stage8() {
	printf("  =-YOUR DEAD-=     |\n");
	printf("                    |\n");
	printf("   []========       |\n");
	printf("   () /     |       |\n");
	printf("   ()/      |       |\n");
	printf("   ()       |       |\n");
	printf("   ()       0       |\n");
	printf("   ()      \\|/      |\n");
	printf("   ()       |       |\n");
	printf("   ===     / \\      |\n");
	printf("  // \\\\             |\n");
	printf(" //   \\\\            |\n");
}

void print_stage(int stage) {
	switch (stage) {
	case 1:
		print_stage1();
		break;
	case 2:
		print_stage2();
		break;
	case 3:
		print_stage3();
		break;
	case 4:
		print_stage4();
		break;
	case 5:
		print_stage5();
		break;
	case 6:
		print_stage6();
		break;
	case 7:
		print_stage7();
		break;
	case 8:
		print_stage8();
		break;
	}
	fflush(NULL);
}

void clear_console(){

	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

}

//-------------------------- ab hier könnt ihr coden---------------------------------------//

/**
 * reads a word until user tips \n
 */
void read_word(char word[], int max_length) {

}

/**
 * returns the length of the word
 */
int length(char word[]){

}



/**
 * inserts a solved letter into the solved_word
 */
void add_solved_letter(char secret_word[], char solved_word[], char letter){

}

/**
 * sets a whole word to an given letter
 */
void set_word(char word[],char letter, int length){

}
/**
 * tests whether a word contains
 */
int contains_letter(char word[], char letter){

}




const int MAXIMAL_ERROR = 8;
const int MAXIMAL_LENGTH_WORD = 18;

int main() {

	//Buffer für das Wort schaffen, das eingegeben wird
	char secret_word[MAXIMAL_LENGTH_WORD+1];

	//Einlesen des Wortes, das zu lösen gilt
	printf("Das WOrt angeben, das geloößt werden muss:\n");
	read_word(secret_word, MAXIMAL_LENGTH_WORD);

	//KommandoZeile löschen
	clear_console();

	//bishergelosetes wort definieren
	char solved_word[MAXIMAL_LENGTH_WORD+1];
	//solved_word auf ****** setzen
	set_word(solved_word, '*', MAXIMAL_LENGTH_WORD);




	//richtige Länge der ******** setzen, indem
	//an der richtigen Stelle '\0' gesetzt wird
	//dafür brauchen wir die länge des eingegebenen wortes

	int ende_loesung = length(secret_word);
	solved_word[ende_loesung] = '\0';



	// while (error < maximal_error
	int error =0;
	int runde =0;
	while(error < MAXIMAL_ERROR){
		runde++;
		printf("\n\n\n----==Runde %d==----\n\n", runde);

		// 1.bisher gelostes wort ausgeben
		printf("Bisher gelößt: %s\n", solved_word);

		// 2.char einlesen vom benutzer mit scanf
		printf("Geben Sie einen Buchstaben ein:");
		char input;
		scanf("%c", &input);
		while(input =='\n'){
			scanf("%c", &input);
		}
		printf("Der eingegebene Buchstabe war: %c \n", input);
		// 3.testen, ob der Buchstabe im lösungswort vorkommt
		int was_in_word =0;
		was_in_word = contains_letter(secret_word, input);
		//4. wenn er vorkommt: im bisher geloesten wort anzeigen
		if(was_in_word){
			printf("Glückwunsch der Buchstabe kommt im Wort vor.\n");
			add_solved_letter(secret_word, solved_word, input);
		}else{
			// 4.sonst error erhöhen und stage anzeigen
			error++;
			print_stage(error);
		}

		// 5. testen ob wort komplett gelöst wurde

		int finished =0;
		finished = !contains_letter(solved_word, '*');
		if(finished){
			printf("Herzlichen Glückwunsch sie haben das Wort gelöst.");
			return 0;
		}
	}
	return 0;
}







