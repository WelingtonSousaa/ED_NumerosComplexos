#include "complexo.h"
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

struct complexo
{
    float real;
    float imaginario;
};

#define PI acos(-1)

// Desenvolvida por Ícaro
// Função para criar um número complexo na forma algébrica z = a + bi, com a e b sendo números reais.
Complexo *criaComplexoFormaAlgebrica(float a, float b)
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
        printf("Memória insuficiente\n");
        exit(1);
    }
}

// Desenvolvida por Ícaro
// Função que cria um número complexo na forma polar z = a(cos(b) + sen(b)i), com a e b sendo números reais.
Complexo *criaComplexoFormaPolar(float a, float b)
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
        printf("Memória insuficiente\n");
        exit(1);
    }
}

//  Desenvolvida por Ícaro
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

        if (*b < 0)
        {
            *b += 2 * PI;
        }
    }
    else
    {
        printf("Forma polar do número inválida!\n");
    }
}

// Desenvolvida por Ícaro
//  Função que verifica se a parte real de um número complexo é igual a zero, retornando 1 caso afirmativo e 0 caso contrário.
int testeReal(Complexo *z)
{
    if (z != NULL)
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
    else
    {
        printf("O endereço do número complexo não pode ser nulo\n");
        return -1;
    }
}

// Desenvolvido por Welington
// Função que verifica se a parte imaginária de um número complexo é igual a zero, retornando 1 caso afirmativo e 0 caso contrário.
int testeImaginario(Complexo *z)
{
    if (z != NULL)
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
    else
    {
        printf("O endereço do número complexo não pode ser nulo\n");
        return -1;
    }
}

// Desenvolvido por Welington
// Função que verifica se tanto a parte real quanto a parte imaginária de um número complexo são iguais a zero, retornando 1 caso afirmativo e 0 caso contrário.
int testeZero(Complexo *z)
{
    if (z != NULL)
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
    else
    {
        printf("O endereço do número complexo não pode ser nulo\n");
        return -1;
    }
}

// Desenvolvido por Welington
// Retorna um número complexo oriundo da soma z = z1 + z2, com z1 e z2 sendo números complexos.
Complexo *addComplexo(Complexo *z1, Complexo *z2)
{
    if (z1 != NULL && z2 != NULL)
    {
        Complexo *resultado = (Complexo *)malloc(sizeof(Complexo));

        if (resultado != NULL)
        {
            resultado->real = z1->real + z2->real;
            resultado->imaginario = z1->imaginario + z2->imaginario;

            return resultado;
        }
        else
        {
            printf("Memória insuficiente!\n");
            return NULL;
        }
    }
    else
    {
        printf("Os endereços de ambos os números complexos não podem ser nulos\n");
        return NULL;
    }
}

// Desenvolvido por Welington
// Retorna um número complexo oriundo da subtração z = z1 - z2, com z1 e z2 sendo números complexos
Complexo *subComplexo(Complexo *z1, Complexo *z2)
{
    if (z1 != NULL && z2 != NULL)
    {
        Complexo *resultado = (Complexo *)malloc(sizeof(Complexo));

        if (resultado != NULL)
        {
            resultado->real = z1->real - z2->real;
            resultado->imaginario = z1->imaginario - z2->imaginario;
            return resultado;
        }
        else
        {
            printf("Memória Insuficiente!\n");
            return NULL;
        }
    }
    else
    {
        printf("Os endereços de ambos os números complexos não podem ser nulos\n");
        return NULL;
    }
}

// Desenvolvido por Welington
// Retorna um número complexo oriundo da multiplicação z = z1 * z2, com z1 e z2 sendo números complexos
Complexo *multComplexo(Complexo *z1, Complexo *z2)
{
    if (z1 != NULL && z2 != NULL)
    {
        Complexo *resultado = (Complexo *)malloc(sizeof(Complexo));

        if (resultado != NULL)
        {
            resultado->real = z1->real * z2->real - z1->imaginario * z2->imaginario;
            resultado->imaginario = z1->real * z2->imaginario + z1->imaginario * z2->real;

            return resultado;
        }
        else
        {
            printf("Memória Insuficiente!\n");
            return NULL;
        }
    }
    else
    {
        printf("Os endereços de ambos os números complexos não podem ser nulos\n");
        return NULL;
    }
}

// Desenvolvido por Welington
// Retorna um número complexo oriundo da divisão z = z1 / z2, com z1 e z2 sendo números complexos e z2 diferente de zero.
Complexo *divComplexo(Complexo *z1, Complexo *z2)
{
    if (z1 != NULL && z2 != NULL)
    {
        float divisor = pow(z2->real, 2) + pow(z2->imaginario, 2);

        if (divisor != 0)
        {
            Complexo *resultado = (Complexo *)malloc(sizeof(Complexo));

            if (resultado != NULL)
            {
                resultado->real = (z1->real * z2->real + z1->imaginario * z2->imaginario) / divisor;
                resultado->imaginario = (z1->imaginario * z2->real - z1->real * z2->imaginario) / divisor;

                return resultado;
            }
            else
            {
                printf("Memória Insuficiente\n");
                return NULL;
            }
        }
        else
        {
            printf("Divisão por zero não é permitida\n");
            return NULL;
        }
    }
    else
    {
        printf("Os endereços de ambos os números complexos não podem ser nulos\n");
        return NULL;
    }
}

// desenvolvida por Guilherme
// recebe um numero complexo e retorna seu conjugado

Complexo *conjugadoComplexo(Complexo *z)
{
    Complexo *resultado = (Complexo *)malloc(sizeof(Complexo));

    if (z != NULL)
    {
        if (resultado != NULL)
        {
            resultado->real = z->real;
            resultado->imaginario = z->imaginario * -1;

            return resultado;
        }
        else
        {
            printf("Memória insuficiente\n");
            return NULL;
        }
    }
    else
    {
        printf("O endereço do número complexo nao pode ser nulo\n");
        return NULL;
    }
}

//  desenvolvido por Guilherme
// recebe um numero complexo e seu um numero ao qual sera elevado
Complexo *potenciaComplexo(Complexo *z, int n)

{
    if (z != NULL)
    {
        Complexo *resultado = (Complexo *)malloc(sizeof(Complexo));
        if (resultado != NULL)
        {
            resultado->real = pow(z->real, n);
            resultado->imaginario = pow(z->imaginario, n);
            return resultado;
        }
        else
        {
            printf("Memória insuficiente\n");
            return NULL;
        }
    }
    else
    {
        printf("O endereço do número complexo nao pode ser nulo\n");
        return NULL;
    }
}

//  desenvolvida por Guilherme
// ela recebe como parametro um numero complexo  e um numero que é o grau da raiz e retorna um vetor os resultados de uma raiz de numero complexo
Complexo *raizComplexo(Complexo *z, int n)
{
    float modulo;
    float angulo;
    if (z != NULL && n > 0)
    {
        Complexo *resultado = (Complexo *)malloc(n * sizeof(Complexo));
        if (resultado != NULL)
        {
            formaPolar(z, &modulo, &angulo);

            for (int i = 0; i < n; i++)
            {
                float ang_i = (angulo + 2 * PI * i) / n;

                resultado[i].real = pow(modulo, 1.0 / n) * cos(ang_i);
                resultado[i].imaginario = pow(modulo, 1.0 / n) * sin(ang_i);
            }

            return resultado;
        }
        else
        {
            printf("Memória insuficiente\n");
            return NULL;
        }
    }
    else
    {
        printf("O endereço do número complexo não pode ser nulo e o número também não\n");
        return NULL;
    }
}

// Desenvolvida por Ícaro
// Função para imprimir o resultado de funções
void imprimirComplexos(Complexo *z, float *a, float *b, int n)
{
    // formaPolar
    printf("Complexo: %.2f + %.2fi\n", z->real, z->imaginario);
    printf("Módulo: %.2f, Argumento: %.2f radianos\n", *a, *b);

    // testeReal, testeImaginario, testeZero
    printf("Parte real é zero? %s\n", testeReal(z) ? "Sim" : "Não");
    printf("Parte imaginária é zero? %s\n", testeImaginario(z) ? "Sim" : "Não");
    printf("É zero? %s\n", testeZero(z) ? "Sim" : "Não");

    // addComplexo, subComplexo, multComplexo, divComplexo, conjugadoComplexo, potenciaComplexo
    printf("%.2f, %.2f\n", z->real, z->imaginario);

    // raizComplexo
    for (int i = 0; i < n; i++)
    {
        float modulo, angulo;
        formaPolar(&z[i], &modulo, &angulo);
        printf("z%d = %.4f(cos(%.4f) + sen(%.4f)i)\n", i, modulo, angulo, angulo);
    }
}