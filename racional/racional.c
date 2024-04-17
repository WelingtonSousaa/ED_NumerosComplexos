#include <stdio.h>
#include <stdlib.h>
#include "racional.h"

struct racional
{
    int numerador, denominador;
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

void liberaRacional(Racional *r)
{
    free(r);
}

Racional *somaRacional(Racional *x, Racional *y)
{
    Racional *resultado = cria(0, 0);

    resultado->numerador = ((x->numerador * y->denominador) + (y->denominador * x->numerador));
    resultado->denominador = x->denominador * y->denominador;

    return resultado;
}

Racional *multRacional(Racional *x, Racional *y)
{
    Racional *resultado = cria(0, 0);

    resultado->numerador = x->numerador * y->numerador;
    resultado->denominador = x->denominador * y->denominador;

    return resultado;
}

void menuOperacoesRacionais(int *option)
{
    printf("Escolha uma operação:\n");
    printf("1. Soma\n");
    printf("2. Multiplicação\n");
    scanf("%d", &*option);

    printf("\n");
}

void imprimirOperacoesRacionais(Racional *x, Racional *y, int opt)
{
    Racional *res;

    switch (opt)
    {
    case 1:
        res = somaRacional(x, y);
        printf("%d / %d + %d / %d = %d / %d\n\n", x->numerador, x->denominador, y->numerador, y->denominador, res->numerador, res->denominador);
        break;
    case 2:
        res = multRacional(x, y);
        printf("%d / %d x %d / %d = %d / %d\n\n", x->numerador, x->denominador, y->numerador, y->denominador, res->numerador, res->denominador);
        break;

    default:
        printf("Opção incorreta!");
        break;
    }
}