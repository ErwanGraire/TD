#include <stdlib.h>
#include <stdio.h>
#include <iostream>
using namespace std;

int jeudupendu(char mot[]) {
	cout << "Votre mot a bien ete enregistre que le jeu commence !\n";
	char lettre;
	cout << "Saisir une lettre : ";
	cin >> lettre;
	for (int i; i < strlen(mot); i++) {
		if (lettre == mot[i]) {

		}
	}



	return 0;
}



int main() {
	char mot[50];

	cout << "Saisissez votre mot a trouver : ";
	cin >> mot;



	jeudupendu(mot);

	return 0;
}