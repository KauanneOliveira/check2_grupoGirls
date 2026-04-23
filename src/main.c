#include <stdio.h>

void calcular_derivada()
{
    float a, b, c;

    printf("Digite o coeficiente de a ao quadrado (a): ");
    scanf("%f", &a);

    printf("Digite o coeficiente de b: ");
    scanf("%f", &b);

    printf("Digite o coeficiente de c: ");
    scanf("%f", &c);

    float derivada_a = 2 * a;
    float derivada_b = b;

    printf("\n ---- Resultado ----\n");
    printf("Funcao original:    f(x) = %.2fx^2 + %.2fx + %.2f\n", a, b, c);
    printf("Derivada:           f'(x) = %.2fx + %.2f\n", derivada_a, derivada_b);
}

int main()
{
    int opcao = 0;
    float nota_1, nota_2, media;

    while (opcao != 6)
    {
        printf("\n\n");
        printf("==============================\n");
        printf("SISTEMA EQUIPE XYZ\n");
        printf("==============================\n");
        printf("1 - Inserir notas\n");
        printf("2 - Calcular media\n");
        printf("3 - Verificar situacao\n");
        printf("4 - Exibir resultado\n");
        printf("5 - Calcular derivada\n");
        printf("6 - Sair\n");

        printf("Digite a sua escolha: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("--- O aplicativo so aceita duas notas por vez ---\n");

            do
            {
                printf("Digite sua primeira nota: ");
                scanf("%f", &nota_1);
                if (nota_1 < 0 || nota_1 > 10)
                {
                    printf("[ERRO]: A nota deve ser positiva e menor ou igual a 10!\n");
                }
            } while (nota_1 < 0 || nota_1 > 10);

            do
            {
                printf("Pronto! Digite sua segunda nota: ");
                scanf("%f", &nota_2);
                if (nota_2 < 0 || nota_2 > 10)
                {
                    printf("[ERRO]: A nota deve ser positiva e menor ou igual a 10!\n");
                }
            } while (nota_2 < 0 || nota_2 > 10);
            break;
        case 2:
            media = (nota_1 + nota_2) / 2;
            printf("Media do Aluno: %f", media);
            break;
        case 3:
            int situacao;
            if (media >= 6)
            {
                printf("Aluno Aprovado!");
                situacao = 1;
            }
            else
            {
                printf("Aluno Reprovado!");
                situacao = 0;
            }
            printf("\n");
            break;
        case 4:
            if (situacao == 1 || media >= 6)
            {
                printf("Media do Aluno: %f \nSituacao: Aprovado!", media);
            }
            else
            {
                printf("Media do Aluno: %f \nSituação: Reprovado!", media);
            }
            printf("\n");
            break;
        case 5:
            calcular_derivada();
        case 6:
            break;
        default:
            printf("Digite a opcao correta!");
        }
    }
    return 0;
}
