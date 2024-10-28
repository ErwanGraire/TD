#include <iostream>
#include <cstdlib>
#include <iomanip>
#define multiplier(x,y) ((x) * (y))
using namespace std;

// Programme qui affiche la table de multiplication d'un nombre donné par l'utilisateur entre 1 et 9

int main(void) {
	cout << "Saisir un chiffre entre 1 et 9 pour connaitre sa table de multiplication : " << endl;
	int val;
	cin >> val;
	if (val > 9 || val < 1) {
		return 0;
	}
	cout << "Voici la table de multiplication de " << val << " sans iomanip :" << endl;
	for (int i = 0; i <= 10; i++) {
		cout << val << " x " << i << " = " << multiplier(val, i) << endl;
	}

	cout << "Avec la bibliothèque iomanip :" << endl;
	for (int i = 0; i <= 10; i++) {
		cout << setw(2) << val << " x " << setw(2) << i << " = " << setw(3) << multiplier(val, i) << endl;
		
	}
	
	return 0;
}
