#include <stdio.h>

int main()
{
    int cont, termo1; 
    cont = 1;

    printf("Digite o numero que voce quer ver a tabuada: ");
    scanf("%d", &termo1);

    while(cont <= 10)
    {
        printf("%2.d * %2.d = %2.d\n", cont, termo1, (cont*termo1));

        cont = cont + 1;
    }
    
    return 0;
}