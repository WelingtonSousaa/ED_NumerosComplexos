#include <stdio.h>
#include <locale.h>
#include <math.h>
#include "complexo.h"

int main()
{
    Complexo *z;
    int opt;
    float a, b;

    printf("Informe uma opção:\n");
    printf("1. Complexo Forma Algébrica.\n");
    printf("2. Complexo Forma Polar.\n");
    scanf("%d", &opt);

    switch (opt)
    {
    case 1:
        z = criaComplexoFormaAlgebrica(3, 3);
        break;
    case 2:
        z = criaComplexoFormaPolar(3.0, 5.0);
    
    default:
        break;
    }

    imprimirComplexos(z, &a, &b, opt);

    return 0;
}
