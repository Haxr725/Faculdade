#ifndef HEAP_MAX_H_INCLUDED
#define HEAP_MAX_H_INCLUDED

/* fun��o que cria um heap m�nimo */
void make_heap_max(int [], int);

/* fun��o que remove o menor elemento do heap m�nimo e
   reconstr�i o heap */
void ins_heap_max(int [], int *, int);

/* fun��o que insere um novo elemento no heap m�nimo */
int rem_heap_max(int [], int *);

#endif // HEAP_MAX_H_INCLUDED

