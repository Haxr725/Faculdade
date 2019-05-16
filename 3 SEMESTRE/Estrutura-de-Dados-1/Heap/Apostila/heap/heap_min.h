#ifndef HEAP_MIN_H_INCLUDED
#define HEAP_MIN_H_INCLUDED

/* fun��o que cria um heap m�nimo */
void make_heap_min(int [], int);

/* fun��o que remove o menor elemento do heap m�nimo e
   reconstr�i o heap */
int rem_heap_min(int [], int *);

/* fun��o que insere um novo elemento no heap m�nimo */
void ins_heap_min(int [], int *, int);

#endif // HEAP_MIN_H_INCLUDED
