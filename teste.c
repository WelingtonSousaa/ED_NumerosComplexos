#include <stdio.h>
#include "racional/racional.h"

int main()
{
    Racional *r1 = cria(1, 2);
    Racional *r2 = cria(2, 4);

    somaRacional(r1, r2);
    multRacional(r1, r2);

    return 0;
}
