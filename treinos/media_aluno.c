#include <stdio.h>

int main() 
{
    float nota1, nota2, media;

    printf("SUA PRIMEIRA NOTA FOI: ");
    scanf("%f", &nota1);

    printf("SUA SEGUNDA NOTA FOI: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    if (media < 7)
    {
        printf("Sua media foi %.1f, tente novamente\n", media);

    }
    else
    {
        printf("Sua media foi %.1f, parabens por sua media\n", media);

    }
    
    return 0;

}
