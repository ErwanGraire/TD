#include <stdlib.h>
#include <stdio.h>

// Fonction qui retourne la version minuscule d'un caractère donné
char minuscule(char c) {
    // Vérifier si le caractère est une majuscule (entre 'A' et 'Z')
    if (c >= 'A' && c <= 'Z') {
        // Convertir en minuscule en ajoutant la différence entre 'a' et 'A' (32)
        return c + 32;
    }
    return c; // Si ce n'est pas une majuscule, renvoyer le caractère tel quel
}

int main() {
    // Exercice 3
    char caractere;

    // Entrer un caractère
    printf("Entrez un caractere : ");
    scanf("%c", &caractere);

    // Vérification si l'utilisateur a entré un caractère alphabétique majuscule
    if (caractere >= 'A' && caractere <= 'Z') {
        // Appeler la fonction et afficher le résultat
        printf("Le caractère en minuscule est : %c\n", minuscule(caractere));
    }
    else if (caractere >= 'a' && caractere <= 'z') {
        printf("Le caractère est déjà en minuscule : %c\n", caractere);
    }
    else {
        printf("Ce n'est pas un caractère alphabétique.\n");
    }

    return 0;
}
