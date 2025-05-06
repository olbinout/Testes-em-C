#include <stdio.h> 
#include <math.h>
 
int main()
{
    float a, b, c, delta;
    
    printf ("Digite o valor de A: ");
    scanf ("%f", &a); 
    
    printf ("Digite o valor de B: ");
    scanf ("%f", &b);

    printf ("Digite o valor de C: ");
    scanf ("%f", &c);

    delta = pow(b, 2) - 4 * a * c;
    printf("O valor de DELTA: %2.f\n", delta);

    return 0;
}
