#include <stdio.h>
#include <locale.h>
#include "racional/racional.h"
#include "complexo.h"

int main()
{
    // Racional *r1 = cria(1, 2);
    // Racional *r2 = cria(2, 4);
    // int option;

    // menuOperacoesRacionais(&option);
    // imprimirOperacoesRacionais(r1, r2, option);

    // liberaRacional(r1);
    // liberaRacional(r2);

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
