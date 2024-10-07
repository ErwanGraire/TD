#include <stdlib.h>
#include <stdio.h>
#include <iostream>
using namespace std;

int jeudupendu(char mot[]) {
	cout << "Votre mot a bien ete enregistre que le jeu commence !\n";
	int longueurmot = strlen(mot);
	char lettre;
	char mottrouve[20];
	for (int p = 0; strlen(mot) != p;p++) {
		mottrouve[p] = '_';
	}
	bool etatvie = true;
	int vie = 8;
	cout << mottrouve;

	while (int t = 0 != strlen(mot)) {
		cout << "Saisir une lettre : " << endl;
		cin >> lettre;
		vie -= 1;
		for (int i = 0; i < strlen(mot); i++) {
			if (lettre == mot[i]) {
				mottrouve[i] = lettre;
				vie += 1;
			}
		}
		if (vie == 0) {
			cout << "vous avez perdu" << endl;
		}
		cout << mottrouve;
		cout << "il vous reste " << vie << " vie" << endl ;
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