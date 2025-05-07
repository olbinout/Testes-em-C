#include <stdio.h>
#include <math.h>
#define M_PI 3.14159265358979323846

int main ()
{
    int termo1, termo2;

    printf("Digite um valor: ");
    scanf("%d", &termo1);

    printf("Digite um segundo valor: ");
    scanf("%d", &termo2);

    int soma = termo1 + termo2;
    printf("A soma dos numeros foi: %d\n", soma);

    int produto = termo1 * (int)pow(termo2, 2);
    printf("O produto do primeiro pelo quadrado do segundo: %d\n", produto);

    int quadrado1 = (termo1 * termo1);
    printf("O quadrado do primeiro: %d\n", quadrado1);

    float raiz = sqrt(pow(termo1, 2) + pow(termo2, 2));
    printf("A raiz quadrada da soma dos quadrados: %.2f\n", raiz);

    float diferenca = (termo1 - termo2);
    float angulo_rad = diferenca * (180 / M_PI);
    float sen = sin(angulo_rad * (M_PI / 180));
    printf("O seno da diferenca entre o primeiro e o segundo: %.2f\n", sen);

    double modulo = fabs((double)termo1);
    printf("O modulo do primeiro valor: %.0f\n", modulo);

    return 0;
}