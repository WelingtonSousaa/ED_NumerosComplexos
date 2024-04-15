#ifndef RACIONAL_H
#define RACIONAL_H

typedef struct racional Racional;

Racional* cria(int a, int b);
void somaRacional(Racional *x, Racional *y);
void multRacional(Racional *x, Racional *y);

#endif