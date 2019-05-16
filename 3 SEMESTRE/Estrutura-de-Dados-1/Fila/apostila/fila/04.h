#ifndef 04_H_INCLUDED
#define 04_H_INCLUDED

#include <stdbool.h>

#define QUEUE_MAX 50   // tamanho m�ximo da fila
typedef int queue_info;
typedef struct {
    queue_info itens[QUEUE_MAX]; // itens da fila
    int comeco, // �ndice para o in�cio da fila
        final;  // �ndice para o final da fila
} fila;

/* fun��o que inicializa uma fila */
void deque_init(fila *);

/* fun��o que verifica se a fila est� vazia, eetorna verdadeiro, se a
 * fila est� vazia, ou falso, caso contr�rio. */
bool deque_isempty(fila);

/* fun��o que verifica se a fila est� cheia, retorna verdadeiro, se a
 * fila est� cheia ou falso, caso contr�rio. */
bool deque_isfull(fila);

/* fun��o para inserir um novo elemento no come�o da fila */
void deque_ins_frente(fila *, queue_info);

/* fun��o para inserir um novo elemento no final da fila */
void deque_ins_tras(fila *, queue_info);

/* fun��o para remover o elemento do come�o da fila */
void deque_rem_frente(fila *);

/* fun��o para remover o elemento do final da fila */
void deque_rem_tras(fila *);

/* fun��o para imprimir o conteudo da fila */
void deque_print(fila f);

#endif // 04_H_INCLUDED
