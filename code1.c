#include "point_h.h"
#include <math.h> // bibliotheque inutilise

void count_teen_positive_from(int start) {
	int i = 0;

	while (i < 10) {
		printf("%d\n", start + i);
		i++;
	}
	
}

void count_teen_negative_from(int start) {
	int i = 0;

	while (i < 10) {
		printf("%d\n", start - i);
		i++;
	}
	
}


int word_size(const char *str) {
	int i;

	i = 0;
	// null vérifi nul
	while (str[i] != '\0')
		i++;
	return (i);
}

void  printOneChar(int num, char *word) {
	if (num > word_size(word)) {
		printf("Num out of the word\n");
		return ;
	} else {
		printf("this is the %d characteres from \"%s\": %c\n", num, word, word[num]);
	}
}

int printWord(char *word) {
	int len_word;
	// int half_len_word;
	
	len_word = word_size(word);

	// half_len_word = len_word / 2;

	print(1, word, len_word);
	return (0);
}

#include <stdio.h> // double inclusion + pas du debut du fichier
int main() {
	char *word = "Hello, World!";
	printWord(word);
	printf("\n");
	printOneChar(4, word); // intert de -fsantize
	count_teen_positive_from(12);
	printf("\n");
	count_teen_negative_from(12);
	return (0);
}


// 1) gestion de NULL
// 2) interet des flags
// 3) interet de fsanitize // a voir
// 4) permission de fichier
// 5) les valeurs de INT
// 6) gerer tout type d'input (vide, space, tab, ...)
// 7) malloc
// 8) norme v4 != norminette: bousole -> 42 -> General Pedagogy -> The Norm V4

// 1) pointeur (char *)
// 2) (void) argc || unused variable
// 3) a voir
// 4) open et read
// 5) boucle sur int pris en argument
// 6) boucle sur un mot
// 7) malloc
// 8) header faux