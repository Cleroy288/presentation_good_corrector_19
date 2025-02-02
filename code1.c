#include "point_h.h"
#include <math.h>

int mallocTest(int size) {
	int *tab;
	int i;

	tab = (int *)malloc(size * sizeof(int));
	i = 0;
	while (i < size) {
		tab[i] = i;
		i++;
	}
	i = 0;
	while (i < size) {
		printf("%d\n", tab[i]);
		i++;
	}
	free(tab);
	return (0);
}

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
	int half_len_word;
	
	len_word = word_size(word);

	half_len_word = len_word / 2;

	print(1, word, len_word);
	return (0);
}

#include <stdio.h>
int main() {
	char *word = "Hello, World!";
	printWord(word);
	printf("\n");
	printOneChar(4, word);
	count_teen_positive_from(12);
	printf("\n");
	count_teen_negative_from(12);
	printf("\n");
	mallocTest(10);
	return (0);
}