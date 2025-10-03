#include <stdio.h>

#define N 5   // nombre d'étudiants
#define MAX 50 // taille max des chaînes

int main() {
    // Déclaration des tableaux de  chaine de caractère
    char noms[N][MAX] = {"Dupont", "Martin", "Nguyen", "Lopez", "Diallo"};
    char prenoms[N][MAX] = {"Jean", "Sophie", "Minh", "Carlos", "Aminata"};
    char adresses[N][MAX] = {
        "12 rue de Paris",
        "34 avenue de Bretagne",
        "56 boulevard Voltaire",
        "78 rue Nationale",
        "90 place de la République"
    };

    float notesProg[N] = {14.5, 12.0, 16.5, 9.5, 13.0};
    float notesSys[N] = {13.0, 15.5, 14.0, 11.0, 12.5};

    // Affichage des informations
    printf("===== Liste des étudiants =====\n\n");
    for (int i = 0; i < N; i++) {
        printf("Etudiant %d :\n", i+1);
        printf("Nom : %s\n", noms[i]);
        printf("Prénom : %s\n", prenoms[i]);
        printf("Adresse : %s\n", adresses[i]);
        printf("Note Programmation en C : %.2f\n", notesProg[i]);
        printf("Note Système d'exploitation : %.2f\n", notesSys[i]);
        printf("-----------------------------\n");
    }

    return 0;
}
