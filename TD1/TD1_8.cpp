#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    cout << "Nombre de ligne dans le tableau : " << endl;
    int n;
    cin >> n;

    cout << "Nombre de colonne dans le tableau : " << endl;
    int m;
    cin >> m;

    vector<vector<int>> matrix(n, vector<int>(m));
    srand(static_cast<unsigned int>(time(0)));

    // Remplir le tableau avec des valeurs aléatoires
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            matrix[i][j] = rand() % 10;
        }
    }

    // Affichage du tableau généré avant tri
    cout << "Le tableau genere est :" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // Tri à bulles directement dans le tableau 2D
    bool swapped;
    do {
        swapped = false;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m - 1; j++) {
                if (matrix[i][j] > matrix[i][j + 1]) {
                    swap(matrix[i][j], matrix[i][j + 1]);
                    swapped = true;
                }
            }
            if (i < n - 1 && matrix[i][m - 1] > matrix[i + 1][0]) {
                swap(matrix[i][m - 1], matrix[i + 1][0]);
                swapped = true;
            }
        }
    } while (swapped);

    // Affichage du tableau trié
    cout << "Le tableau trie est :" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
