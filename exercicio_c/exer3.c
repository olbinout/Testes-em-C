#include <stdio.h>

int main()
{
    int termo1, hexa;

    printf("Digite um numero em decimal para ver sua forma hexa e octal: ");
    scanf("%d", &termo1);

    while (hexa == 1)
    {
        hexa = termo1 / 16;
        
        printf("%d\n", hexa);

    }

    return 0;
}