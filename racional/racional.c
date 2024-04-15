#include <stdio.h>
#include <stdlib.h>
#include "racional.h"

struct racional
{
    int numerador;
    int denominador;
};

Racional *cria(int a, int b)
{
    Racional *r = (Racional *)malloc(sizeof(Racional));

    if (r == NULL)
    {
        printf("Falta memória!\n");
        exit(1);
    }

    r->numerador = a;
    r->denominador = b;

    return r;
}

void somaRacional(Racional *x, Racional *y)
{
    int numerador = ((x->numerador * y->denominador) + (y->denominador * x->numerador));
    int denominador = x->denominador * y->denominador;

    printf("%d / %d + %d / %d = %d / %d\n\n", x->numerador, x->denominador, y->numerador, y->denominador, numerador, denominador);

    x->numerador = numerador;
    x->denominador = denominador;
}

void multRacional(Racional *x, Racional *y)
{
    int numerador = x->numerador * y->numerador;
    int denominador = x->denominador * y->denominador;

    printf("%d / %d x %d / %d = %d / %d\n\n", x->numerador, x->denominador, y->numerador, y->denominador, numerador, denominador);

    x->numerador = numerador;
    x->denominador = denominador;
}
