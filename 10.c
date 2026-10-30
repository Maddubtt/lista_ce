#include <stdio.h>

int main() {
    int teatro[5][8] = {
        {0, 1, 0, 0, 0, 1, 1, 0},
        {0, 0, 0, 0, 1, 1, 1, 1},
        {1, 1, 1, 0, 0, 0, 1, 1},
        {0, 0, 1, 1, 1, 1, 0, 0},
        {1, 0, 0, 0, 1, 1, 1, 1}
    };

    int qtd;
    printf("Quantos assentos continuos deseja? ");
    scanf("%d", &qtd);

    if(qtd <= 0 || qtd > 8) {
        printf("Quantidade invalida.\n");
        return 0;
    }

    int encontrado = 0;
    for(int i=0; i<5 && !encontrado; i++) {
        int consecutivos = 0, inicio_col = -1;
        for(int j=0; j<8; j++) {
            if(teatro[i][j] == 0) {
                if(consecutivos == 0) inicio_col = j;
                consecutivos++;
                if(consecutivos == qtd) {
                    encontrado = 1;
                    // Reservar assentos
                    for(int k=inicio_col; k<=j; k++) teatro[i][k] = 1;
                    printf("Fileira %d, Cadeiras de %d a %d\n", i+1, inicio_col+1, j+1);
                    break;
                }
            } else {
                consecutivos = 0;
            }
        }
    }

    if(!encontrado) {
        printf("Desculpe, não ha assentos contiguos suficientes.\n");
    }
    return 0;
}