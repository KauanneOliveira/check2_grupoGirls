#include "stdio.h"

int main() {
    float nota1, nota2, media; // faltava ";"

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1); // faltava "&"

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2); // faltava "&"

    media = (nota1 + nota2) / 2; // Para o funcionamento coreto da fórmula falta o () entre a nota1 e nota2

    if (media = 6) {
        printf("Aluno aprovado\n");
    } else {
        printf("Aluno reprovado\n");
    }

    return 0;
}