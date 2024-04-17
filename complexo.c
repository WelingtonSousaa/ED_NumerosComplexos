#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "complexo.h"

struct complexo
{
    float a, b;
};

// Desenvolvida por Ícaro
// Função para criar um número complexo na forma algébrica z = a + bi, com a e b sendo números reais.
Complexo *criaComplexoFormaAlgebrica(float a, float b)
{
    Complexo *z = (Complexo *)malloc(sizeof(Complexo));

    if (z != NULL)
    {
        z->a = a;
        z->b = b;

        return z;
    }
    else
    {
        printf("Memória insuficiente");
        exit(1);
    }
}

//  Desenvolvida por Ícaro
// Função que cria um número complexo na forma polar z = a(cos(b) + sen(b)i), com a e b sendo números reais.
Complexo *criaComplexoFormaPolar(float a, float b)
{
    Complexo *z = (Complexo *)malloc(sizeof(Complexo));

    if (z != NULL)
    {
        z->a = a * cos(b);
        z->b = a * sin(b);

        return z;
    }
    else
    {
        printf("Memória insuficiente");
        exit(1);
    }
}

// Desen por Ícaro...
// Função que libera a memória alocada para um número complexo.
void liberaComplexo(Complexo *z)
{
    free(z);
}

// Em desenvolvimento por Ícaro...
// Função que retorna a parte real a e a parte imaginária b do número complexo z na forma algébrica z = a + bi, com a e b sendo números reais.
void formaAlgebrica(Complexo *z, float *a, float *b)
{
}

// Em desenvolvimento por Ícaro...
// Função que retorna o módulo a e o argumento b do número complexo z na forma polar z = a(cos(b) + sen(b)i), com a e b sendo números reais.
void formaPolar(Complexo *z, float *a, float *b)
{
}

// Em desenvolvimento por {nome}...

int testeReal(Complexo *z)
{
}

// Em desenvolvimento por {nome}...

int testeImaginario(Complexo *z)
{
}

// Em desenvolvimento por {nome}...

int testeZero(Complexo *z)
{
}

// Em desenvolvimento por {nome}...

Complexo *addComplexo(Complexo *z1, Complexo *z2)
{
}

// Em desenvolvimento por {nome}...

Complexo *subComplexo(Complexo *z1, Complexo *z2)
{
}

// Em desenvolvimento por {nome}...

Complexo *multComplexo(Complexo *z1, Complexo *z2)
{
}

// Em desenvolvimento por {nome}...

Complexo *divComplexo(Complexo *z1, Complexo *z2)
{
}

// Em desenvolvimento por {nome}...

Complexo *conjugadoComplexo(Complexo *z)
{
}

// Em desenvolvimento por {nome}...

Complexo *potenciaComplexo(Complexo *z, int n)
{
}

// Em desenvolvimento por {nome}...

Complexo *raizComplexo(Complexo *z, int n)
{
}

// Desenvolvida por Ícaro
// Função para imprimir o resultado de funções
void imprimirComplexos(Complexo *z, int opt)
{
    switch (opt)
    {
    case 1:
        printf("\n%.2f + %.2fi\n\n", z->a, z->b);
        break;
    case 2:
        // printf("\n%.2f(cos(%.2f) + sen(%.2f)i)\n", z->a, z->b, z->b);
        break;
    default:
        printf("Opção incorreta\n");
        break;
    }
}