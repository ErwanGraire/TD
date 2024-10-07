#include <stdlib.h>
#include <stdio.h>
#include <iostream>
using namespace std;
#include <vector>
#include <cstdlib>  
#include <ctime>    

//Ecrire un programme qui permet de remplir aléatoirement un tableau de n valeurs entières et de les
//afficher par la suite dans un ordre croissant.




int main(){
	cout << "nombre de case dans le tableau : ";
	int n;
	cin >> n;
	std::vector<int> tab(n);
	srand(time(0));
	for (int i; i > n; i++) {
		tab[i] = rand() % 10;
	}
	for (int a; a < n; a++) {
		std::cout << tab[a];
	}
	return 0;
}
