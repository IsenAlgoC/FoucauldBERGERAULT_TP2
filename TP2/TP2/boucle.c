//modification test github
#include <stdlib.h>
#include <stdio.h>

int main() {
	int i, N = 100, n, valeurPrecedente;
	for (i = 99; i > 1; i--) {
		N += i;
		n = i;

	};
	printf(" Resultat premiere boucle --- Somme = %d    n = %d", N, n);
	i = 99;
	N = 100;

	while (i > 1) {
		N += i;
		n = i;
		i--;
	};

	printf("\n Resultat deuxieme boucle --- Somme = %d    n = %d", N, n);


	i = 100;
	N = 0;
	do {
		N += i;
		n = i;
		i--;
	} while (i > 1);
	printf(" \nResultat troisieme boucle boucle --- Somme = %d    n = %d", N, n);

	// Question 2
	unsigned short int valeurMax = 0, j = 1, somme = 0;

	valeurPrecedente = 0;
	somme = 1;
	
	while (somme > valeurPrecedente) {
		valeurPrecedente = somme;
		j++;
		somme += j;
	};
	valeurMax = j - 1;

	printf(" \n Premiere methode %i", valeurMax);

	/*
	j = 1;
	somme = 1;

	while (65537 - somme < 65537){
		somme += j;
		j++;
		
	};
	valeurMax = j - 1;



	printf(" \n  Deuxieme methode valeur max = %i", valeurMax);
	*/


	//Question 3
	do {
		printf("\nEntrer N ");
		scanf_s("%d", &N);

	} while (N > valeurMax);
	

	for (i = N-1; i > 1; i--) {
		N += i;
		n = i;

	};
	printf(" Resultat  --- Somme = %d    n = %d", N, n);

	return(EXIT_SUCCESS);
}



