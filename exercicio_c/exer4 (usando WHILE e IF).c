#include <stdio.h>

int main ()
{
    int opcao, saida;
    double cel, fahr;
    
    printf("Voce deseja fazer de Celsius para Fahr ou de Fahr para Celsius? \n");
    printf("[1] , [2] respectivamente: ");
    scanf("%d", &opcao);
    
    saida = 0;

    while (saida < 1)
    {
        if (opcao == 1)
        {
            printf("Ok, vamos fazer de Celsius para Fahr.\n");
            printf("Quantos graus Celsius esta agora? \n");
            scanf("%lf", &cel);

            fahr = (cel * 9/5) + 32;

            printf("Entao, %.1lf Celsius equivalem a %.1lf em Fahr.", cel, fahr);
            saida = 1;
        }

        else if (opcao == 2)
        {
            printf("Ok, vamos fazer de Fahr para Celsius.\n");
            printf("Quantos graus Fahr esta agora? \n");
            scanf("%lf", &fahr);

            cel = ((fahr - 32) * 5) / 9;

            printf("Entao, %.1lf Fahr equilavem a %.1lf em Celsius.", fahr, cel);
            saida = 1;
        }

        else
        {
            printf("Por favor, insira [1] ou [2]\n");
            printf("Qual sua escolha? ");
            scanf("%d", &opcao);
        }
    }
    return 0;
}