#include <stdio.h>
#include <locale.h>
#include "complexo.h"

int main()
{
    Complexo *z;
    int opt;

    printf("Informe uma opção:\n");
    printf("1. Complexo Forma Algébrica.\n");
    printf("2. Complexo Forma Polar.\n");
    scanf("%d", &opt);

    switch (opt)
    {
    case 1:
        z = criaComplexoFormaAlgebrica(2.0, 4.0);
        break;
    case 2:
        z = criaComplexoFormaPolar(3.0, 5.0);
    
    default:
        break;
    }

    imprimirComplexos(z, opt);

    return 0;
}
