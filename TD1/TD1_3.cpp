#include <stdlib.h>
#include <stdio.h>

// Fonction qui retourne la version minuscule d'un caract�re donn�
char minuscule(char c) {
    // V�rifier si le caract�re est une majuscule (entre 'A' et 'Z')
    if (c >= 'A' && c <= 'Z') {
        // Convertir en minuscule en ajoutant la diff�rence entre 'a' et 'A' (32)
        return c + 32;
    }
    return c; // Si ce n'est pas une majuscule, renvoyer le caract�re tel quel
}

int main() {
    // Exercice 3
    char caractere;

    // Entrer un caract�re
    printf("Entrez un caractere : ");
    scanf("%c", &caractere);

    // V�rification si l'utilisateur a entr� un caract�re alphab�tique majuscule
    if (caractere >= 'A' && caractere <= 'Z') {
        // Appeler la fonction et afficher le r�sultat
        printf("Le caract�re en minuscule est : %c\n", minuscule(caractere));
    }
    else if (caractere >= 'a' && caractere <= 'z') {
        printf("Le caract�re est d�j� en minuscule : %c\n", caractere);
    }
    else {
        printf("Ce n'est pas un caract�re alphab�tique.\n");
    }

    return 0;
}
