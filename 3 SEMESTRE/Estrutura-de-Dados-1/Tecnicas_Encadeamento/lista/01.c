#include <stdio.h>

/*  Uma forma de minimizar o problema do subdimensionamento ou superdimensionamento da
    implementa��o sequencial das estruturas de dados dados pilha, fila e lista, seria alocar o
    vetor respons�vel por armazenar os elementos dessas estruturas em tempo de execu��o.
    Redefina os TAD�s pilha, fila e lista para que a mem�ria dispon�vel para esses tipos seja
    definida em tempo de execu��o */

// LISTA
typedef int lst_info; // tipo de dado da lista
typedef struct lst_no * lst_ptr;
struct lst_no{
 lst_info item; // vetor para armazenar os n�s da lista
 lst_ptr prox; // n�mero de n�s da lista
};

// PILHA
typedef int stack_info; // Tipo de dado da pilha
typedef struct stack_no * stack_ptr;
struct stack_no{
 stack_info item;
 stack_ptr topo;
};

// FILA
typedef int queue_info;
typedef struct queue_no * queue_ptr;
struct queue_no {
 queue_info dado;
 queue_ptr prox;
};
typedef struct {
 queue_ptr comeco;
 queue_ptr final;
} fila;
