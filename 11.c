#include <stdio.h>

int main() {
    int estoque[4][5];
    printf("Digite os valores da matriz 4x5: \n");
    for(int i=0; i<4; i++)
        for(int j=0; j<5; j++)
            scanf("%d", &estoque[i][j]);

    int total_geral = 0;
    int cat[4] = {0};
    int forn[5] = {0};

    for(int i=0; i<4; i++) {
        for(int j=0; j<5; j++) {
            cat[i] += estoque[i][j];
            forn[j] += estoque[i][j];
            total_geral += estoque[i][j];
        }
    }

    printf("Total de produtos em estoque: %d\n", total_geral);
    for(int i=0; i<4; i++) printf("Total categoria %d: %d\n", i+1, cat[i]);
    for(int j=0; j<5; j++) {
        printf("Total fornecedor %d: %d\n", j+1, forn[j]);
        if(forn[j] < 10) {
            printf("Atencao: fornecedor %d precisa reabastecer. \n", j+1);
        }
    }
    return 0;
}