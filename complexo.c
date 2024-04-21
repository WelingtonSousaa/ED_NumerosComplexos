#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "complexo.h"

struct complexo
{
    float real;
    float imaginario;
};

// Desenvolvida por Ícaro
// Função para criar um número complexo na forma algébrica z = a + bi, com a e b sendo números reais.
Complexo *criaComplexoFormaAlgebrica(float a, float b)
{
    if (a > 0 && b > 0)
    {
        Complexo *z = (Complexo *)malloc(sizeof(Complexo));

        if (z != NULL)
        {
            z->real = a;
            z->imaginario = b;

            return z;
        }
        else
        {
            printf("Memória insuficiente");
            exit(1);
        }
    }
    else
    {
        printf("Valores incorretos\n");
    }
}

//  Desenvolvida por Ícaro
// Função que cria um número complexo na forma polar z = a(cos(b) + sen(b)i), com a e b sendo números reais.
Complexo *criaComplexoFormaPolar(float a, float b)
{
    if (a > 0 && b > 0)
    {
        Complexo *z = (Complexo *)malloc(sizeof(Complexo));

        if (z != NULL)
        {
            z->real = a * cos(b);
            z->imaginario = a * sin(b);

            return z;
        }
        else
        {
            printf("Memória insuficiente");
            exit(1);
        }
    }
    else
    {
        printf("Valores incorretos!");
    }
}

// Desen por Ícaro...
// Função que libera a memória alocada para um número complexo.
void liberaComplexo(Complexo *z)
{
    if (z != NULL)
    {
        free(z);
    }
    else
    {
        printf("Liberação do número inválida!\n");
    }
}

// Desenvolvida por Ícaro
// Função que retorna a parte real a e a parte imaginária b do número complexo z na forma algébrica z = a + bi, com a e b sendo números reais.
void formaAlgebrica(Complexo *z, float *a, float *b)
{
    if (z != NULL)
    {
        *a = z->real;
        *b = z->imaginario;
    }
    else
    {
        printf("Forma algébrica do número inválida!\n");
    }
}

// Desenvolvida por Ícaro
// Função que retorna o módulo a e o argumento b do número complexo z na forma polar z = a(cos(b) + sen(b)i), com a e b sendo números reais.
void formaPolar(Complexo *z, float *a, float *b)
{
    if (z != NULL)
    {
        *a = sqrt(pow(z->real, 2) + pow(z->imaginario, 2));
        *b = atan2(z->imaginario, z->real);
    }
    else
    {
        printf("Forma polar do número inválida!\n");
    }
}

// Desenvolvido por Welington
//  Função que verifica se a parte real de um número complexo é igual a zero, retornando 1 caso afirmativo e 0 caso contrário.
int testeReal(Complexo *z)
{
    if (z->real == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

// Desenvolvido por Welington
// Função que verifica se a parte imaginária de um número complexo é igual a zero, retornando 1 caso afirmativo e 0 caso contrário.
int testeImaginario(Complexo *z)
{
    if (z->imaginario == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

// Desenvolvido por Welington
// Função que verifica se tanto a parte real quanto a parte imaginária de um número complexo são iguais a zero, retornando 1 caso afirmativo e 0 caso contrário.
int testeZero(Complexo *z)
{
    if (z->real == 0 && z->imaginario == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

// Desenvolvido por Welington
// Retorna um número complexo oriundo da soma z = z1 + z2, com z1 e z2 sendo números complexos.
Complexo *addComplexo(Complexo *z1, Complexo *z2)
{
    Complexo *resultado = (Complexo *)malloc(sizeof(Complexo));
    if (resultado != NULL)
    {
        resultado->real = z1->real + z2->real;
        resultado->imaginario = z1->imaginario + z2->imaginario;
    }
    return resultado;
}

// Desenvolvido por Welington
// Retorna um número complexo oriundo da subtração z = z1 - z2, com z1 e z2 sendo números complexos
Complexo *subComplexo(Complexo *z1, Complexo *z2)
{
    Complexo *resultado = (Complexo *)malloc(sizeof(Complexo));
    if (resultado != NULL)
    {
        resultado->real = z1->real - z2->real;
        resultado->imaginario = z1->imaginario - z2->imaginario;
    }
    return resultado;
}

// Desenvolvido por Welington
// Retorna um número complexo oriundo da multiplicação z = z1 * z2, com z1 e z2 sendo números complexos
Complexo *multComplexo(Complexo *z1, Complexo *z2)
{
    Complexo *resultado = (Complexo *)malloc(sizeof(Complexo));
    if (resultado != NULL)
    {
        resultado->real = z1->real * z2->real - z1->imaginario * z2->imaginario;
        resultado->imaginario = z1->real * z2->imaginario + z1->imaginario * z2->real;
        /*
         *  z1 x z2 = (a+ bi) x (x +di)
         *  z1 x z2 = ac + adi + bci + bdi²
         *  i² = -1, então
         *  z1 x z2 = (ac - bd) + (ad+bc)i
         *  logo, a parte real do resultado da multiplicação é (ac - bd), enquanto a parte imaginária é (ad+bc)
         */
    }
    return resultado;
}

// Desenvolvido por Welington
// Retorna um número complexo oriundo da divisão z = z1 / z2, com z1 e z2 sendo números complexos e z2 diferente de zero.
Complexo *divComplexo(Complexo *z1, Complexo *z2)
{
    Complexo *resultado = (Complexo *)malloc(sizeof(Complexo));
    if (resultado != NULL)
    {
        float divisor = z2->real * z2->real + z2->imaginario * z2->imaginario;
        resultado->real = (z1->real * z2->real + z1->imaginario * z1->imaginario) / divisor;
        resultado->imaginario = (z1->imaginario * z2->real - z1->real * z2->imaginario) / divisor;
    }
    return resultado;
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
void imprimirComplexos(Complexo *z, float *a, float *b, int opt)
{
    switch (opt)
    {
    case 1:
        formaPolar(z, a, b);
        printf("Módulo: %.2f\nArgumento: %.2f radianos\n", *a, *b);
        break;
    case 2:
        // printf("\n%.2f(cos(%.2f) + sen(%.2f)i)\n", z->a, z->b, z->b);
        break;
    default:
        printf("Opção incorreta\n");
        break;
    }
}