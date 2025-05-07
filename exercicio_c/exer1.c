#include <stdio.h>

int main()
{
    float metros;

    printf("Digite o comprimento em METROS: ");
    scanf("%f", &metros);

    float mili = metros * 1000;
    float cent = metros * 100;
    float deci = metros * 10;

    printf("%.1f Metros e:\n", metros);
    printf("%.1f Milimetros\n", mili);
    printf("%.1f Centimetros\n", cent);
    printf("%.1f Decimetros\n", deci);

    return 0;
}