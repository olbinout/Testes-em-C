#include <stdio.h>

int main ()
{
    double cel;
    printf("Quantos graus esta? ");
    scanf("%lf", &cel);

    double fahr = (cel * 9.5) + 32;

    printf("A temperatura em graus Fahrenheit e: %.1lf", fahr);


    return 0;
}