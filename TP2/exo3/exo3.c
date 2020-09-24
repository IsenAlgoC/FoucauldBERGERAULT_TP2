#include <stdlib.h>
#include <stdio.h>

int main() {
	unsigned int entier;
	do {
		printf("Entrer un entrer compris en 0 et 10 000\n");
		scanf_s("%d", &entier);
	} while (entier < 0 | entier > 10000);

	if (entier % 4 == 0) {
		if (entier % 100 == 0) {
			if (entier % 400 ==0) {
				printf("C'est une annee bissextiles");
			}
			else {
				printf("Ce n'est pas une annee bissextiles");
			};
		}
		else {
			printf("C'est une annee bissextiles");
		};
	}
	else {
		printf("Ce n'est pas une annee bissextiles");
	};



}