#include <stdio.h>

// Définition d'une structure pour représenter une couleur RGBA
struct Couleur {
    unsigned char r;  // Rouge
    unsigned char g;  // Vert
    unsigned char b;  // Bleu
    unsigned char a;  // Alpha (transparence)
};

int main() {
    // Tableau de 10 couleurs
    struct Couleur couleurs[10] = {
        {0xef, 0x78, 0x12, 0xff}, // Couleur 1
        {0x2c, 0xc8, 0x64, 0xff}, // Couleur 2
        {0xff, 0x00, 0x00, 0xff}, // Rouge pur
        {0x00, 0xff, 0x00, 0xff}, // Vert pur
        {0x00, 0x00, 0xff, 0xff}, // Bleu pur
        {0xff, 0xff, 0x00, 0xff}, // Jaune
        {0x00, 0xff, 0xff, 0xff}, // Cyan
        {0xff, 0x00, 0xff, 0xff}, // Magenta
        {0x80, 0x80, 0x80, 0xff}, // Gris
        {0x00, 0x00, 0x00, 0x00}  // Transparent
    };

    // Affichage des couleurs
    for (int i = 0; i < 10; i++) {
        printf("Couleur %d :\n", i + 1);
        printf("Rouge : %d\n", couleurs[i].r);
        printf("Vert  : %d\n", couleurs[i].g);
        printf("Bleu  : %d\n", couleurs[i].b);
        printf("Alpha : %d\n", couleurs[i].a);
        printf("---------------------\n");
    }

    return 0;
}
