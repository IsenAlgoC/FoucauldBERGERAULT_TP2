#include <stdlib.h>
#include <stdio.h>

int main() {
	int fin = 0, nombre, reponse, score = 0;
	nombre = rand();
	printf("Tu dois deviner le bon nombre avec le moins d'erreur possible\n");
	do {
		score++;
		printf("\nEntrer un nombre\n");
		scanf_s("%d", &reponse);
		if (reponse > nombre) {
			printf("Trop Grand!");
		}
		else if (reponse < nombre) {
			printf("Trop Petit!");
		}
		else {
			printf("SUCCESS!! Ton score est de %d points", score);
			fin = 1;
		};


	} while (fin == 0);
	
}