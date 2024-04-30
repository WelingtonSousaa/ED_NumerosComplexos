#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "complexo.h"

#define PI acos(-1)

int main()
{
   // Test criaComplexoFormaAlgebrica
   Complexo *c1 = criaComplexoFormaAlgebrica(3, 4);
   imprimirComplexos(c1, NULL, NULL, 1);
   liberaComplexo(c1);

   // Test criaComplexoFormaPolar
   // Complexo *c2 = criaComplexoFormaPolar(5, PI / 4);
   // imprimirComplexos(c2, NULL, NULL, 1);
   // liberaComplexo(c2);

   // Test formaAlgebrica
   // Complexo *c3 = criaComplexoFormaPolar(5, PI / 4);
   // float a1, b1;
   // formaAlgebrica(c3, &a1, &b1);
   // printf("Parte real: %.2f, Parte imaginária: %.2f\n", a1, b1);
   // liberaComplexo(c3);

   // Test formaPolar
   // float a2, b2;
   // Complexo *c4 = criaComplexoFormaAlgebrica(3, 4);
   // formaPolar(c4, &a2, &b2);
   // imprimirComplexos(c4, &a2, &b2, 1);
   // liberaComplexo(c4);

   // Test testeReal, testeImaginario, testeZero
   // Complexo *c6 = criaComplexoFormaAlgebrica(0, 4);
   // imprimirComplexos(c6, NULL, NULL, 1);
   // liberaComplexo(c6);

   // Test addComplexo
   // Complexo *c7 = criaComplexoFormaAlgebrica(3, 4);
   // Complexo *c8 = criaComplexoFormaAlgebrica(5, 6);
   // Complexo *c9 = addComplexo(c7, c8);
   // imprimirComplexos(c9, NULL, NULL, 1);
   // liberaComplexo(c7);
   // liberaComplexo(c8);
   // liberaComplexo(c9);

   // Test subComplexo
   // Complexo *c10 = criaComplexoFormaAlgebrica(3, 4);
   // Complexo *c11 = criaComplexoFormaAlgebrica(5, 6);
   // Complexo *c12 = subComplexo(c10, c11);
   // imprimirComplexos(c12, NULL, NULL, 1);
   // liberaComplexo(c10);
   // liberaComplexo(c11);
   // liberaComplexo(c12);

   // Test multComplexo
   // Complexo *c13 = criaComplexoFormaAlgebrica(3, 4);
   // Complexo *c14 = criaComplexoFormaAlgebrica(5, 6);
   // Complexo *c15 = multComplexo(c13, c14);
   // imprimirComplexos(c15, NULL, NULL, 1);
   // liberaComplexo(c13);
   // liberaComplexo(c14);
   // liberaComplexo(c15);

   // Test divComplexo
   // Complexo *c16 = criaComplexoFormaAlgebrica(3, 4);
   // Complexo *c17 = criaComplexoFormaAlgebrica(5, 6);
   // Complexo *c18 = divComplexo(c16, c17);
   // imprimirComplexos(c18, NULL, NULL, 1);
   // liberaComplexo(c16);
   // liberaComplexo(c17);
   // liberaComplexo(c18);

   // test conjugadoComplexo
   // Complexo *c19 = criaComplexoFormaAlgebrica(3, 4);
   // Complexo *c20 = conjugadoComplexo(c19);
   // imprimirComplexos(c20, NULL, NULL, 1);
   // liberaComplexo(c19);
   // liberaComplexo(c20);

   // test potenciaComplexo
   // Complexo *c21 = criaComplexoFormaAlgebrica(3, 4);
   // Complexo *c22 = potenciaComplexo(c21, 2);
   // imprimirComplexos(c22, NULL, NULL, 2);
   // liberaComplexo(c21);
   // liberaComplexo(c22);

   // test raizComplexo
   // Complexo *c23 = criaComplexoFormaPolar(8, 0.3);
   // Complexo *c24 = raizComplexo(c23, 3);
   // imprimirComplexos(c24, NULL, NULL, 3);
   // liberaComplexo(c23);
   // liberaComplexo(c24);

   return 0;
}