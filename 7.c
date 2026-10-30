#include <stdio.h>

#include <math.h>

int main(){
    int q;

    printf("Informe a quantidade de 0 a 100 e em seguida os valores do vetor: \n");
    scanf("%d", &q);

    if(q <= 0 || q > 100){
        return 0;   
    }

    float v[100], soma = 0;

    for (int i = 0; i < q; i++) {
        scanf("%f", &v[i]);
        soma += v[i];
    }

    float media = soma / q;
    float maior = v[0], menor = v[0];

    for (int i = 1; i < q; i++) {
        if (v[i] > maior){
            maior = v[i];
        }else if (v[i] < menor){
            menor = v[i];
        }
    }

    float soma_sq = 0;
    for (int i = 0; i < q; i++) {
        soma_sq += pow(v[i] - media, 2);
    }

    float desvio_padrao = sqrt(soma_sq / q);

    printf("\nMaior: %.2f", maior);
    printf("\nMenor: %.2f", menor);
    printf("\nMedia: %.2f", media);
    printf("\nDesvio Padrao: %.2f", desvio_padrao);

    return 0;
}