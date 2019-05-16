/* lista.h */

#ifndef _LISTA_H
#define _LISTA_H

#include <stdbool.h>

#define LST_MAX 100 // n�mero de elementos do vetor
typedef int lst_info; // tipo de dado da lista
typedef struct {
	lst_info itens[LST_MAX]; // vetor p/ os n�s da lista
	int n; // n�mero de n�s da lista
} lista;

/* fun��o que inicializa a lista */
void lst_init(lista *);

/* fun��o que acessa o k-�simo n� da lista e sinaliza o
   sucesso ou falha da opera��o */
bool lst_acessar(lista, int, lst_info *);

/* fun��o que altera o valor do k-�simo n� da lista e
   sinaliza o sucesso ou falha da opera��o */
bool lst_alterar(lista *, int, lst_info);

/* fun��o que insere um novo n� na k-�sima posi��o da
   lista e sinaliza o sucesso ou falha da opera��o */
bool lst_inserir(lista *, int, lst_info);

/* fun��o que remove o k-�simo n� da lista e sinaliza
   o sucesso ou falha da opera��o */
bool lst_remover(lista *, int, lst_info *);

/* fun��o que imprime o conte�do da lista */
void lst_imprimir(lista);

/* fun��o que devolve a posi��o de um valor na lista,
   ou -1, caso o valor n�o esteja contido na lista */
int lst_procurar(lista, lst_info);

/* fun��o que insere um novo n� em uma lista ordenada */
bool lst_ins_ordenado(lista *, lst_info);

/* fun��o que concatena duas listas ordenadas e gera uma
   terceira lista tamb�m ordenada */
bool lst_concatenar(lista, lista, lista *);

/* fun��o que insere a variavel x no final da lista l */
bool lst_inserir_final(lista *, lst_info);

/* fun��o que insere a variavel x no inicio da lista l*/
bool lst_inserir_inicio(lista *, lst_info);

/* fun��o que remove o ultimo valor da lista l e insere
   na variavel x */
bool lst_remover_final(lista *, lst_info *);

/* fun��o que remove o primeiro valor da lista l e insere
   na variavel x */
bool lst_remover_inicio(lista *, lst_info *);

/* fun��o que gera uma lista de n n�s com valores aleat�rios
   no intervalo de 1 ao 3� argumento da fun��o */
bool lst_gerar(lista *, int, int);

/* fun��o que verifica se uma lista l esta em ordem crescente */
bool lst_ordena(lista);

/* fun��o que remove todos os n�s com valores menores que
   um determinado valor e devolve o n�mero de remo��es */
int lst_remover_menores(lista *, lst_info);

#endif
