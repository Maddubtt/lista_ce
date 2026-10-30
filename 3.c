#include <stdio.h>

int main() {
    char entrada = 'S';
    while (entrada == 'S' || entrada == 's') {
        int valor;
        printf("Infomre o valor que deseja sacar: ");
        scanf("%d", &valor);

        if (valor <= 0) {
            printf("Erro!\n");
            continue;
        }

        int nota100=0, nota50=0, nota20=0, nota10=0, nota5=0, nota1=0;

        while (valor >= 100) { nota100++; valor -= 100; }
        while (valor >= 50)  { nota50++;  valor -= 50; }
        while (valor >= 20)  { nota20++;  valor -= 20; }
        while (valor >= 10)  { nota10++;  valor -= 10; }
        while (valor >= 5)   { nota5++;   valor -= 5; }
        while (valor >= 1)   { nota1++;   valor -= 1; }

        printf("100: %d\n50: %d\n20: %d\n10: %d\n5: %d\n1: %d\n", nota100, nota50, nota20, nota10, nota5, nota1);
        printf("Continuar (S/s)? ");
        scanf(" %c", &entrada);
    }
    return 0;
}