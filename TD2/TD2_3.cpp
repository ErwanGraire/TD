#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cctype> 
using namespace std;

// Programme qui lit un fichier texte et compte le nombre de mots, lettres et lignes

int main() {
    ifstream fichier("C:/Users/erwan.graire/source/repos/TD/TD2/textexo3.txt");
    if (!fichier) {
        cerr << "Erreur dans l'ouverture du fichier" << endl;
        return 0; 
    }

    int nbmot = 0;
    int nbLettre = 0;
    int nbLigne = 0;

    string ligne;
    while (getline(fichier, ligne)) {
        nbLigne++;

        stringstream ss(ligne);
        string mot;

        while (ss >> mot) {
            nbmot++;
            for (char c : mot) {
                if (isalpha(static_cast<unsigned char>(c))) { 
                    nbLettre++;
                }
            }
        }
    }

    cout << "Il y a " << nbmot << " mots" << endl;
    cout << "Il y a " << nbLettre << " lettres" << endl;
    cout << "Il y a " << nbLigne << " lignes" << endl;

    fichier.close(); 
    return 0;
}
