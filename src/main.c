#include<stdio.h>

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