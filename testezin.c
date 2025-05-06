#include <stdio.h>

int main()
{
    int termo1, termo2, soma;

    printf("Digite um numero: ");
    scanf("%d", &termo1);

    printf("Digite outro numero: ");
    scanf("%d", &termo2);

    soma = termo1 + termo2;

    printf("O valor e: %d\n", soma);

    printf("%d + %d = %d", termo1, termo2, soma);

    return 0;

}
