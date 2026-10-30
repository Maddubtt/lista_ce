#include <stdio.h>

int main() {
    int v[10];

    printf("Digite 10 numeros inteiros:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &v[i]);
    }

    printf("\nVetor original: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", v[i]);
    }
    printf("\n\n--- VALORES REPETIDOS ---\n");

    int maior_freq = 0;
    for (int i = 0; i < 10; i++) {
        int contador = 0;
        for (int j = 0; j < 10; j++) {
            if (v[i] == v[j]) {
                contador++;
            }
        }
        if (contador > maior_freq) {
            maior_freq = contador;
        }
    }

    for (int i = 0; i < 10; i++) {
        int contador = 0;
        for (int j = 0; j < 10; j++) {
            if (v[i] == v[j]) {
                contador++;
            }
        }
        if (contador > 1) {
            printf("O numero %d aparece %d vezes\n", v[i], contador);
        }
    }

    printf("\nO(s) valor(es) que mais se repetiu(ram) (apareceram %d vezes):\n", maior_freq);
    
    int visto[10] = {0}; 
    for (int i = 0; i < 10; i++) {
        int contador = 0;
        for (int j = 0; j < 10; j++) {
            if (v[i] == v[j]) contador++;
        }
        
        if (contador == maior_freq && visto[i] == 0) {
            printf("%d ", v[i]);
            
            for (int k = 0; k < 10; k++) {
                if (v[k] == v[i]) {
                    visto[k] = 1;
                }
            }
        }
    }
    printf("\n");

    return 0;
}