/*Ecrire un programme qui permet d�allouer un tableau � deux dimensions n par m initialis� par des
valeurs al�atoires qui seront tri�s dans un ordre croissant colonne par colonne(attention �
	l�agencement en m�moire des valeurs dans un tableau � deux dimensions)*/

#include <iostream>
#include <vector>
#include <cstdlib>  
#include <ctime> 
using namespace std;

int main() {
    cout << "Nombre de ligne dans le tableau : " << endl;
    int n;
    cin >> n;

    cout << "Nombre de colonne dans le tableau : " << endl;
    int m;
    cin >> m;

    vector< vector<int>> matrix(n, vector<int>(m));
    srand(static_cast<unsigned int>(time(0)));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            matrix[i][j] = rand() % 10;
        }
    }

}