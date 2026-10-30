#include <stdio.h>

int main() {
    int inicio, altura;
    printf("Informe o numero incial da base: ");
    scanf("%d", &inicio);
    printf("Informe a altura da piramide: ");
    scanf("%d", &altura);

    if (altura < 2 || altura > 50) {
        printf("Altura inválida!\n");
        return 0;
    }

    for (int i = 1; i <= altura; i++) {
        for (int j = 0; j < i; j++) {
            printf("%d ", inicio + j);
        }
        printf("\n");
    }

    for (int i = altura - 1; i >= 1; i--) {
        for (int j = 0; j < i; j++) {
            printf("%d ", inicio + j);
        }
        printf("\n");
    }
    return 0;
}