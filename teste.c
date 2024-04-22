#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include "complexo.h"

int main()
{
    // Test criaComplexoFormaAlgebrica
    Complexo *c1 = criaComplexoFormaAlgebrica(3, 4);
    imprimirComplexos(c1, NULL, NULL, 1);

    // Test criaComplexoFormaPolar
    Complexo *c2 = criaComplexoFormaPolar(5, M_PI / 4);
    imprimirComplexos(c2, NULL, NULL, 1);

    // Test liberaComplexo
    liberaComplexo(c1);
    liberaComplexo(c2);

    // Test formaAlgebrica
    Complexo *c3 = criaComplexoFormaPolar(5, M_PI / 4);
    float a, b;
    formaAlgebrica(c3, &a, &b);
    printf("Parte real: %.2f, Parte imaginária: %.2f\n", a, b);
    liberaComplexo(c3);

    // Test formaPolar
    Complexo *c4 = criaComplexoFormaAlgebrica(3, 4);
    formaPolar(c4, &a, &b);
    printf("Módulo: %.2f, Argumento: %.2f radianos\n", a, b);
    liberaComplexo(c4);

    // Test isFormaPolar
    Complexo *c5 = criaComplexoFormaAlgebrica(3, 4);
    printf("É forma polar? %s\n", isFormaPolar(c5) ? "Sim" : "Não");
    liberaComplexo(c5);

    // Test testeReal, testeImaginario, testeZero
    Complexo *c6 = criaComplexoFormaAlgebrica(0, 4);
    printf("Parte real é zero? %s\n", testeReal(c6) ? "Sim" : "Não");
    printf("Parte imaginária é zero? %s\n", testeImaginario(c6) ? "Sim" : "Não");
    printf("É zero? %s\n", testeZero(c6) ? "Sim" : "Não");
    liberaComplexo(c6);

    // Test addComplexo
    Complexo *c7 = criaComplexoFormaAlgebrica(3, 4);
    Complexo *c8 = criaComplexoFormaAlgebrica(5, 6);
    Complexo *c9 = addComplexo(c7, c8);
    imprimirComplexos(c9, NULL, NULL, 1);
    liberaComplexo(c7);
    liberaComplexo(c8);
    liberaComplexo(c9);

    // Test subComplexo
    Complexo *c10 = criaComplexoFormaAlgebrica(3, 4);
    Complexo *c11 = criaComplexoFormaAlgebrica(5, 6);
    Complexo *c12 = subComplexo(c10, c11);
    imprimirComplexos(c12, NULL, NULL, 1);
    liberaComplexo(c10);
    liberaComplexo(c11);
    liberaComplexo(c12);

    // Test multComplexo
    Complexo *c13 = criaComplexoFormaAlgebrica(3, 4);
    Complexo *c14 = criaComplexoFormaAlgebrica(5, 6);
    Complexo *c15 = multComplexo(c13, c14);
    imprimirComplexos(c15, NULL, NULL, 1);
    liberaComplexo(c13);
    liberaComplexo(c14);
    liberaComplexo(c15);

    // Test divComplexo
    Complexo *c16 = criaComplexoFormaAlgebrica(3, 4);
    Complexo *c17 = criaComplexoFormaAlgebrica(5, 6);
    Complexo *c18 = divComplexo(c16, c17);
    imprimirComplexos(c18, NULL, NULL, 1);
    liberaComplexo(c16);
    liberaComplexo(c17);
    liberaComplexo(c18);

    return 0;
}