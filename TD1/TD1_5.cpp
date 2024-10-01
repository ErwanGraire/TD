#include <stdlib.h>
#include <stdio.h>
#include <iostream>
using namespace std;

int jeudupendu(char mot[]) {
	cout << "Votre mot a bien ete enregistre que le jeu commence !\n";
	char lettre;
	char mottrouve[sizeof(mot)-2];
	for (int p = 0; sizeof(mot)-2 != p;p++) {
		mottrouve[p] = '_';
	}
	int vie = 8;
	cout << mottrouve;

	while (int t = 0 != sizeof(mot - 2)) {
		cout << "Saisir une lettre : ";
		cin >> lettre;
		for (int i = 0; i < sizeof(mot) - 2; i++) {
			if (lettre == mot[i]) {
				mottrouve[i] = lettre;		
			}
			vie -= 1;
		}
		if (vie == 0) {
			cout << "vous avez perdu";
		}
		cout << mottrouve;
		cout << "il vous reste " << vie << " vie";
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