#include<stdio.h>

#include <stdio.h>
#include <math.h>

void calcular_derivada() {
    float a, b, c;

    printf("Digite o coeficiente de a ao quadrado (a): ");
    scanf("%f", &a);

    printf("Digite o coeficiente de b...\n");
    scanf("%f", &b);

    printf("Digite o coeficiente de c...\n");
    scanf("%f", &c);
}

int main() {
    float nota_1, nota_2, media;
    printf("--- O aplicativo só aceita duas notas por vez ---\n");
    printf ("Digite sua primeira nota: ");
    scanf("%f", &nota_1);
    printf ("Pronto! Digite sua segunda nota: ");
    scanf("%f", &nota_2);

    media = nota_1 + nota_2 / 2; 

    return 0;
}