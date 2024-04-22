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
        printf("Memória insuficiente");
        exit(1);
    }
} // Desenvolvida por Ícaro

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
        printf("Memória insuficiente");
        exit(1);
    }
} //  Desenvolvida por Ícaro

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
} // Desenvolvida por Ícaro...

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
} // Desenvolvida por Ícaro

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
} // Desenvolvida por Ícaro

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
        printf("O endereço do número complexo não pode ser nulo");
    }
} // Desenvolvido por Welington

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
        printf("O endereço do número complexo não pode ser nulo");
    }
} // Desenvolvido por Welington

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
        printf("O endereço do número complexo não pode ser nulo");
    }
} // Desenvolvido por Welington

// Retorna um número complexo oriundo da soma z = z1 + z2, com z1 e z2 sendo números complexos.
Complexo *addComplexo(Complexo *z1, Complexo *z2)
{
    if (z1 != NULL && z2 != NULL)
    {
        Complexo *resultado = (Complexo *)malloc(sizeof(Complexo));
        if (resultado != NULL)
        {
            if (resultado != NULL)
            {
                resultado->real = z1->real + z2->real;
                resultado->imaginario = z1->imaginario + z2->imaginario;
                return resultado;
            }
        }
        else
        {
            printf("Memória insuficiente!");
            return NULL;
        }
    }
    else
    {
        printf("Os endereços de ambos os números complexos não podem ser nulos");
        return NULL;
    }
} // Desenvolvido por Welington

// Retorna um número complexo oriundo da subtração z = z1 - z2, com z1 e z2 sendo números complexos
Complexo *subComplexo(Complexo *z1, Complexo *z2)
{
    if (z1 != NULL && z2 != NULL)
    {
        Complexo *resultado = (Complexo *)malloc(sizeof(Complexo));
        if (resultado != NULL)
        {
            if (resultado != NULL)
            {
                resultado->real = z1->real - z2->real;
                resultado->imaginario = z1->imaginario - z2->imaginario;
                return resultado;
            }
        }
        else
        {
            printf("Memória Insuficiente!");
            return NULL;
        }
    }
    else
    {
        printf("Os endereços de ambos os números complexos não podem ser nulos");
        return NULL;
    }

} // Desenvolvido por Welington

// Retorna um número complexo oriundo da multiplicação z = z1 * z2, com z1 e z2 sendo números complexos
Complexo *multComplexo(Complexo *z1, Complexo *z2)
{
    if (z1 != NULL && z2 != NULL)
    {
        Complexo *resultado = (Complexo *)malloc(sizeof(Complexo));
        if (resultado != NULL)
        {
            if (resultado != NULL)
            {
                resultado->real = z1->real * z2->real - z1->imaginario * z2->imaginario;
                resultado->imaginario = z1->real * z2->imaginario + z1->imaginario * z2->real;
                return resultado;
            }
        }
        else
        {
            printf("Memória Insuficiente!");
            return NULL;
        }
    }
    else
    {
        printf("Os endereços de ambos os números complexos não podem ser nulos");
        return NULL;
    }
} // Desenvolvido por Welington

// Desenvolvido por Welington
// Retorna um número complexo oriundo da divisão z = z1 / z2, com z1 e z2 sendo números complexos e z2 diferente de zero.
Complexo *divComplexo(Complexo *z1, Complexo *z2)
{
    if (z1 != NULL && z2 != NULL)
    {
        Complexo *resultado = (Complexo *)malloc(sizeof(Complexo));
        if (resultado != NULL)
        {
            float divisor = z2->real * z2->real + z2->imaginario * z2->imaginario;
            resultado->real = (z1->real * z2->real + z1->imaginario * z1->imaginario) / divisor;
            resultado->imaginario = (z1->imaginario * z2->real - z1->real * z2->imaginario) / divisor;
            return resultado;
        }
        else
        {
            printf("Memória Insuficiente");
            return NULL;
        }
    }
    else
    {
        printf("Os endereços de ambos os números complexos não podem ser nulos");
        return NULL;
    }
}

// Em desenvolvimento por {Guilherme}...

Complexo *conjugadoComplexo(Complexo *z)
{
}

// Em desenvolvimento por {Guilherme}...

Complexo *potenciaComplexo(Complexo *z, int n)
{
}

// Em desenvolvimento por {Guilherme}...

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