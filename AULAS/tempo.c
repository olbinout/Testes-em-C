#include <stdio.h>

int main()
{

    int seg, min, hora;

    printf("Digite um valor em segundos: ");
    scanf("%d", &seg);

    hora = (seg / 3600);

    int resto_h = seg % 3600;
    min = (resto_h / 60);
    seg = (resto_h % 60);


    printf("%d hora %d minutos e %d segundos", hora, min, seg);

    return 0;
}
