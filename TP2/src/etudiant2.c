#include <stdio.h>
#include <string.h>  // pour strcpy

#define N 5
#define MAX 100

// Définition de la structure
struct Etudiant {
    char nom[MAX];
    char prenom[MAX];
    char adresse[MAX];
    float noteProg;   // Note en Programmation C
    float noteSys;    // Note en Système d'exploitation
};

int main() {
    struct Etudiant etudiants[N];

    // Initialisation des données avec strcpy
    strcpy(etudiants[0].nom, "Dupont");
    strcpy(etudiants[0].prenom, "Marie");
    strcpy(etudiants[0].adresse, "20, Boulevard Niels Bohr, Lyon");
    etudiants[0].noteProg = 16.5;
    etudiants[0].noteSys = 12.1;

    strcpy(etudiants[1].nom, "Martin");
    strcpy(etudiants[1].prenom, "Pierre");
    strcpy(etudiants[1].adresse, "22, Boulevard Niels Bohr, Lyon");
    etudiants[1].noteProg = 14.0;
    etudiants[1].noteSys = 14.1;

    strcpy(etudiants[2].nom, "Nguyen");
    strcpy(etudiants[2].prenom, "Minh");
    strcpy(etudiants[2].adresse, "15, Avenue Victor Hugo, Paris");
    etudiants[2].noteProg = 15.5;
    etudiants[2].noteSys = 13.0;

    strcpy(etudiants[3].nom, "Lopez");
    strcpy(etudiants[3].prenom, "Carlos");
    strcpy(etudiants[3].adresse, "10, Rue Nationale, Lille");
    etudiants[3].noteProg = 12.0;
    etudiants[3].noteSys = 11.5;

    strcpy(etudiants[4].nom, "Diallo");
    strcpy(etudiants[4].prenom, "Aminata");
    strcpy(etudiants[4].adresse, "5, Place de la République, Rennes");
    etudiants[4].noteProg = 13.5;
    etudiants[4].noteSys = 14.2;

    // Affichage
    printf("===== Liste des étudiant.e.s =====\n\n");
    for (int i = 0; i < N; i++) {
        printf("Étudiant.e %d :\n", i + 1);
        printf("Nom : %s\n", etudiants[i].nom);
        printf("Prénom : %s\n", etudiants[i].prenom);
        printf("Adresse : %s\n", etudiants[i].adresse);
        printf("Note Programmation C : %.2f\n", etudiants[i].noteProg);
        printf("Note Système d'exploitation : %.2f\n", etudiants[i].noteSys);
        printf("-----------------------------\n");
    }

    return 0;
}
