#include <stdio.h>
#include <math.h>

int main()
{

    float a, b, c, resultado;

    printf("Digite o valor de A: ");
    scanf("%f", &a);
    
    printf("Digite o valor de B: ");
    scanf("%f", &b);

    printf("Digite o valor de C: ");
    scanf("%f", &c);

    resultado = pow(b,2) - (4 * a * c);

    printf("O valor de delta e: %.2f", resultado);

    return 0;

}
