#ifndef FILANORMAL_H_INCLUDED
#define FILANORMAL_H_INCLUDED

#include <stdbool.h>

#define QUEUE_MAX 50   // tamanho m�ximo da fila
typedef int queue_info;
typedef struct {
    queue_info itens[QUEUE_MAX]; // itens da fila
    int comeco, // �ndice para o in�cio da fila
        final;  // �ndice para o final da fila
} fila;

/* fun��o que inicializa uma fila */
void queue_init(fila *);

/* fun��o que verifica se a fila est� vazia, eetorna verdadeiro, se a
 * fila est� vazia, ou falso, caso contr�rio. */
bool queue_isempty(fila);

/* fun��o que verifica se a fila est� cheia, retorna verdadeiro, se a
 * fila est� cheia ou falso, caso contr�rio. */
bool queue_isfull(fila);

/* fun��o para inserir um novo elemento no final da fila */
void enqueue(fila *, queue_info);

/* fun��o para remover o elemento do come�o da fila */
queue_info dequeue(fila *);

#endif // _FILA_H
