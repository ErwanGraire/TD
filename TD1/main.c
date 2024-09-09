/*Premier programme en C*/
#include<stdlib.h>
#include<stdio.h>


// Fonction qui retourne la version minuscule d'un caract�re donn�
char minuscule(char c) {
    // V�rifier si le caract�re est une majuscule (entre 'A' et 'Z')
    if (c >= 'A' && c <= 'Z') {
        // Convertir en minuscule en ajoutant la diff�rence entre 'a' et 'A' (32)
        return c + 32;
    }
    // Si ce n'est pas une majuscule, retourner le caract�re tel quel
    return c;
}



int main() {

    /*//Exercice 2
    float a, b, c, discriminant, racine1, racine2, part_imaginaire;

    // Demande des coefficients a, b et c
    printf("Entrez le coefficient a : ");
    scanf("%f", &a);
    printf("Entrez le coefficient b : ");
    scanf("%f", &b);
    printf("Entrez le coefficient c : ");
    scanf("%f", &c);

    // Calcul du discriminant
    discriminant = b * b - 4 * a * c;

    // V�rification des diff�rents cas selon le discriminant
    if (discriminant > 0) {
        // Deux racines r�elles distinctes
        racine1 = (-b + sqrt(discriminant)) / (2 * a);
        racine2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Les racines sont reelles et distinctes.\n");
        printf("Racine 1 = %.2f\n", racine1);
        printf("Racine 2 = %.2f\n", racine2);
    }
    else if (discriminant == 0) {
        // Une racine r�elle double
        racine1 = -b / (2 * a);
        printf("Il y a une racine double.\n");
        printf("Racine = %.2f\n", racine1);
    }
    else {
        // Deux racines complexes
        racine1 = -b / (2 * a);
        part_imaginaire = sqrt(-discriminant) / (2 * a);
        printf("Les racines sont complexes et conjuguees.\n");
        printf("Racine 1 = %.2f + %.2fi\n", racine1, part_imaginaire);
        printf("Racine 2 = %.2f - %.2fi\n", racine1, part_imaginaire);
    }

    return 0; */

	//Exercice 3
    char caractere;

    // Entrer un caract�re
    printf("Entrez un caract�re : ");
    scanf("%c", &caractere);

    // Appeler la fonction et afficher le r�sultat
    printf("Le caract�re en minuscule est : %c\n", minuscule(caractere));

    return 0;
}

