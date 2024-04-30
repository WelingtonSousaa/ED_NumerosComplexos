#ifndef COMPLEXO_H
#define COMPLEXO_H

/**
 * @file complexo.h
 * @brief Define um Tipo Abstrato de Dados (TAD) para operações com números complexos.
 *
 * Este módulo permite a criação, manipulação e operações entre números complexos
 * tanto na forma algébrica quanto polar. Inclui funções para adição, subtração,
 * multiplicação, divisão, e outras operações comuns.
 *
 * @author: Ícaro
 * @author: Weligton
 * @author: Guilherme
 */

/**
 * @struct complexo
 * @brief Estrutura para representar números complexos.
 *
 * Esta estrutura armazena os componentes real e imaginário de um número complexo.
 * É usada para realizar operações complexas que incluem adição, subtração,
 * multiplicação, divisão, e outras operações matemáticas em números complexos.
 *
 * @var real
 * Parte real do número complexo.
 *
 * @var imaginario
 * Parte imaginária do número complexo.
 */
typedef struct complexo Complexo;

/**
 * @brief Cria um número complexo na forma algébrica.
 *
 * @param a Parte real do número complexo.
 * @param b Parte imaginária do número complexo.
 * @return Complexo* Retorna um ponteiro para o novo número complexo, ou NULL se a alocação falhar.
 */
Complexo* criaComplexoFormaAlgebrica(float a, float b);

/**
 * @brief Cria um número complexo na forma polar.
 *
 * @param a Módulo do número complexo.
 * @param b Ângulo do número complexo em radianos.
 * @return Complexo* Retorna um ponteiro para o novo número complexo, ou NULL se a alocação falhar.
 */
Complexo* criaComplexoFormaPolar (float a, float b);

/**
 * @brief Libera a memória alocada para um número complexo.
 *
 * @param z Ponteiro para o número complexo a ser liberado.
 */
void liberaComplexo(Complexo* z);

/**
 * @brief Converte um número complexo para sua forma algébrica.
 *
 * @param z Ponteiro para o número complexo.
 * @param a Ponteiro para armazenar a parte real.
 * @param b Ponteiro para armazenar a parte imaginária.
 */
void formaAlgebrica(Complexo* z, float* a, float* b);

/**
 * @brief Converte um número complexo para sua forma polar.
 *
 * @param z Ponteiro para o número complexo.
 * @param a Ponteiro para armazenar o módulo.
 * @param b Ponteiro para armazenar o argumento em radianos.
 */
void formaPolar(Complexo* z, float* a, float* b);

/**
 * @brief Verifica se a parte real de um número complexo é zero.
 *
 * @param z Ponteiro para o número complexo.
 * @return int Retorna 1 se a parte real é zero, 0 caso contrário, e -1 se z é nulo.
 */
int testeReal(Complexo* z);

/**
 * @brief Verifica se a parte imaginária de um número complexo é zero.
 *
 * @param z Ponteiro para o número complexo.
 * @return int Retorna 1 se a parte imaginária é zero, 0 caso contrário, e -1 se z é nulo.
 */
int testeImaginario(Complexo* z);

/**
 * @brief Verifica se um número complexo é zero (tanto real quanto imaginário).
 *
 * @param z Ponteiro para o número complexo.
 * @return int Retorna 1 se o número é zero, 0 caso contrário, e -1 se z é nulo.
 */
int testeZero(Complexo* z);

/**
 * @brief Adiciona dois números complexos.
 *
 * @param z1 Ponteiro para o primeiro número complexo.
 * @param z2 Ponteiro para o segundo número complexo.
 * @return Complexo* Retorna o resultado da adição, ou NULL se não puder alocar memória.
 */
Complexo* addComplexo(Complexo* z1, Complexo* z2);

/**
 * @brief Subtrai dois números complexos.
 *
 * @param z1 Ponteiro para o primeiro número complexo.
 * @param z2 Ponteiro para o segundo número complexo.
 * @return Complexo* Retorna o resultado da subtração, ou NULL se não puder alocar memória.
 */
Complexo* subComplexo(Complexo* z1, Complexo* z2);

/**
 * @brief Multiplica dois números complexos.
 *
 * @param z1 Ponteiro para o primeiro número complexo.
 * @param z2 Ponteiro para o segundo número complexo.
 * @return Complexo* Retorna o resultado da multiplicação, ou NULL se não puder alocar memória.
 */
Complexo* multComplexo(Complexo* z1, Complexo* z2);

/**
 * @brief Divide um número complexo pelo outro.
 *
 * @param z1 Ponteiro para o numerador (primeiro número complexo).
 * @param z2 Ponteiro para o denominador (segundo número complexo).
 * @return Complexo* Retorna o resultado da divisão, ou NULL se não puder alocar memória ou se z2 é zero.
 */
Complexo* divComplexo(Complexo* z1, Complexo* z2);

/**
 * @brief Retorna o conjugado de um número complexo.
 *
 * @param z Ponteiro para o número complexo.
 * @return Complexo* Retorna o conjugado do número complexo, ou NULL se não puder alocar memória.
 */
Complexo* conjugadoComplexo(Complexo* z);

/**
 * @brief Calcula a potência de um número complexo elevado a um expoente inteiro.
 *
 * @param z Ponteiro para o número complexo.
 * @param n O expoente inteiro ao qual o número complexo será elevado.
 * @return Complexo* Retorna o resultado da potência, ou NULL se não puder alocar memória.
 */
Complexo* potenciaComplexo(Complexo* z, int n);

/**
 * @brief Calcula as raízes n-ésimas de um número complexo.
 *
 * @param z Ponteiro para o número complexo.
 * @param n O grau da raiz a ser calculada.
 * @return Complexo* Retorna um vetor de números complexos representando as raízes, ou NULL se não puder alocar memória ou se n é zero ou negativo.
 */
Complexo* raizComplexo(Complexo* z, int n);

void imprimirComplexos(Complexo *z, float *a, float *b, int n);

#endif