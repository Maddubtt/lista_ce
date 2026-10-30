#include <stdio.h>

long long calcular_fatorial(int n) {
    long long f = 1;
    for(int i=2; i<=n; i++) f *= i;
    return f;
}

int verificar_primo(int n) {
    if(n <= 1) return 0;
    for(int i=2; i*i<=n; i++) if(n % i == 0) return 0;
    return 1;
}

int soma_algarismos(int n) {
    int soma = 0;
    while(n > 0) {
        soma += n % 10;
        n /= 10;
    }
    return soma;
}

void exibir_tabuada(int n) {
    for(int i=1; i<=10; i++) printf("%d x %d = %d\n", n, i, n*i);
}

int main() {
    int opcao, numero = 0, cadastrado = 0;

    do {
        printf("\n1. Cadastrar um numero\n2. Fatorial\n3. Primo\n4. Soma dos algarismos\n5. Tabuada\n6. Sair\nEscolha: ");
        scanf("%d", &opcao);

        if(opcao >= 2 && opcao <= 5 && !cadastrado) {
            printf("Nenhum numero foi cadastrado!\n");
            continue;
        }

        switch(opcao) {
            case 1:
                printf("Informe um numero inteiro positivo: ");
                scanf("%d", &numero);
                cadastrado = 1;
                break;
            case 2:
                if(numero < 0) printf("Fatorial invalido para negativos.\n");
                else printf("Fatorial de %d = %lld\n", numero, calcular_fatorial(numero));
                break;
            case 3:
                if(verificar_primo(numero)) printf("%d e primo.\n", numero);
                else printf("%d nao e primo.\n", numero);
                break;
            case 4:
                printf("Soma dos algarismos = %d\n", soma_algarismos(numero));
                break;
            case 5:
                exibir_tabuada(numero);
                break;
            case 6:
                printf("Encerrando programa...\n");
                break;
            default:
                printf("Erro: Opcao inexistente!\n");
        }
    } while(opcao != 6);

    return 0;
}