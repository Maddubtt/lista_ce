#include <stdio.h>

int main() {
    int entrada;
    int c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0, total = 0;

    printf("Digite a nota (1 a 5) ou 0 para encerrar progama: \n");
    scanf("%d", &entrada);

    while (entrada != 0) {
        if (entrada == 1) c1++;
        else if (entrada == 2) c2++;
        else if (entrada == 3) c3++;
        else if (entrada == 4) c4++;
        else if (entrada == 5) c5++;
        else printf("Nota invalida! Digite entre 1 e 5.\n");

        scanf("%d", &entrada);
    }

    total = c1 + c2 + c3 + c4 + c5;
    if (total > 0) {
        printf("\nTotal de participantes: %d\n", total);
        printf("Nota 1: %.2f%%\n", (float)c1 / total * 100);
        printf("Nota 2: %.2f%%\n", (float)c2 / total * 100);
        printf("Nota 3: %.2f%%\n", (float)c3 / total * 100);
        printf("Nota 4: %.2f%%\n", (float)c4 / total * 100);
        printf("Nota 5: %.2f%%\n", (float)c5 / total * 100);
    } else {
        printf("Nenhum voto registrado.\n");
    }
    return 0;
}