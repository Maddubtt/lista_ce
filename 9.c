#include <stdio.h>

int main() {
    int respostas[3][5];
    int gabarito[5];
    int resultado[3] = {0};

    printf("Digite as respostas dos alunos (3x5): \n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 5; j++){
            scanf("%d", &respostas[i][j]);
        }
    }

    printf("Digite o gabrito (5 Posicoes): \n");
    for(int j = 0; j < 5; j++){
        scanf("%d", &gabarito[j]);
    }

    int maior_nota = -1, melhor_aluno = 0;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 5; j++){
            if(respostas[i][j] == gabarito[j]){
                resultado[i]++;
            }
        }
        printf("Aluno %d acertou %d questoes \n", i + 1, resultado[i]);
        if(resultado[i] > maior_nota) {
            maior_nota = resultado[i];
            melhor_aluno = i + 1;
        }
    }
    printf("Aluno com maior nota: Aluno %d (Nota: %d) \n", melhor_aluno, maior_nota);
    return 0;
}