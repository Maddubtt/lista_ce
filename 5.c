#include <stdio.h>

float calcular_media() {
    float e1, e2, lista;

    printf("-> Nota da 1a prova: ");
    scanf("%f", &e1);

    printf("-> Nota da 2a prova: ");
    scanf("%f",&e2);

    printf("-> Nota da lista de exercicios: ");
    scanf("%f", &lista);
    return ((e1 + e2) / 2) * 0.8 + lista * 0.2;
}

float calcular_recuperacao(float m_antiga) {
    float rec;
    scanf("%f", &rec);
    return m_antiga + rec;
}

int main() {
    printf("Informe as notas da seguintes materias: \n");
    printf("Feiticos:\n"); float m1 = calcular_media();
    printf("Pocoes:\n"); float m2 = calcular_media();
    printf("Defesa:\n"); float m3 = calcular_media();
    printf("Herbologia:\n"); float m4 = calcular_media();

    float cr = (m1 + m2 + m3 + m4) / 4.0;

    if (m1 >= 7 && m2 >= 7 && m3 >= 7 && m4 >= 7) {
        printf("Parabens Harry, voce passou! 100 pontos para a Grifinoria!");
        printf("\nCR: %.2f", cr);
    } else {
        if (m1 < 7) m1 = calcular_recuperacao(m1);
        if (m2 < 7) m2 = calcular_recuperacao(m2);
        if (m3 < 7) m3 = calcular_recuperacao(m3);
        if (m4 < 7) m4 = calcular_recuperacao(m4);

        float novo_cr = (m1 + m2 + m3 + m4) / 4.0;
        printf("CR Final: %.2f\n", novo_cr);
        if (m1 >= 5 && m2 >= 5 && m3 >= 5 && m4 >= 5) {
            printf("Harry, apos muito esforco você conseguiu passar! 50 pontos para a Grifinoria!\n");
        } else {
            printf("Harry, voce reprovou e tera que repetir o ano! -100 pontos para a Grifinoria!\n");
        }
    }
    return 0;
}