#include <stdio.h>

int main() {
    float saldo = 1000.0;
    int opcao;

    while (1) {
        printf("\n1. Depositar");
        printf("\n2. Sacar");
        printf("\n3. Consultar saldo");
        printf("\n0. Encerrar");
        printf("\nOpcao: ");
        scanf("%d", &opcao);

        if (opcao == 0) break;

        switch (opcao) {
            case 1: {
                float v; // Variável declarada explicitamente dentro do bloco
                printf("Valor para deposito: ");
                scanf("%f", &v);
                if (v > 0) {
                    saldo += v;
                    printf("Deposito realizado com sucesso!\n");
                } else {
                    printf("Erro: Valor invalido!\n");
                }
                break;
            }
            case 2: {
                float v; // Variável declarada explicitamente dentro do bloco
                printf("Valor para saque: ");
                scanf("%f", &v);
                if (v > 0 && v <= saldo) {
                    saldo -= v;
                    printf("Saque realizado com sucesso!\n");
                } else {
                    printf("Erro: Saldo insuficiente ou valor invalido!\n");
                }
                break;
            }
            case 3:
                printf("Saldo atual: R$ %.2f\n", saldo);
                break;
            default:
                printf("Opcao invalida.\n");
        }
    }
    printf("Sistema encerrado.\n");
    return 0;
}