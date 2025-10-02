#include <stdio.h>

int main() {
    int nombres[] = {0, 4096, 65536, 65535, 1024};
    int taille = sizeof(nombres) / sizeof(nombres[0]);
    
    for (int k = 0; k < taille; k++) {
        unsigned int n = nombres[k]; 
        printf("Nombre: %d -> Binaire: ", n);
        
        int i;
        int debut = 0;
        for (i = sizeof(n) * 8 - 1; i >= 0; i--) {
            int bit = (n >> i) & 1;
            if (bit) debut = 1; 
            if (debut) printf("%d", bit);
        }
        
        if (!debut) printf("0"); 
        
        printf("\n");
    }
}
