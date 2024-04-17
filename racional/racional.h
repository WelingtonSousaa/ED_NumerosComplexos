#ifndef RACIONAL_H
#define RACIONAL_H

typedef struct racional Racional;

Racional *cria(int a, int b);
Racional *somaRacional(Racional *x, Racional *y);
Racional *multRacional(Racional *x, Racional *y);
void liberaRacional(Racional *r);
void menuOperacoesRacionais(int *option);
void imprimirOperacoesRacionais(Racional *x, Racional *y, int opt);

#endif