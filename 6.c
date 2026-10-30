#include <stdio.h>

int exibe_menu() {
    int opcao;
    printf("\n1. Consultar saldo");
    printf("\n2. Fazer recarga via Pix");
    printf("\n3. Chamar corrida");
    printf("\n4. Sair");
    printf("\nOpcao: ");
    scanf("%d", &opcao);
    return opcao;
}

void fazer_recarga(float *saldo) {
    float valor;
    printf("Informe o valor que deseja fazer recarga: \n");
    scanf("%f", &valor);
    *saldo += valor;
}

void pagar_corrida(float *saldo) {
    float valor;
    printf("Informe o valor da corrida: \n");
    scanf("%f", &valor);
    if (valor > *saldo) printf("Erro: Saldo insuficiente!\n");
    else *saldo -= valor;
}

int main() {
    float saldo = 0.0;
    int opcao;
    while ((opcao = exibe_menu()) != 4) {
        switch(opcao) {
            case 1: printf("Saldo: %.2f\n", saldo); break;
            case 2: fazer_recarga(&saldo); break;
            case 3: pagar_corrida(&saldo); break;
            default: printf("Invalido\n");
        }
    }
    return 0;
}