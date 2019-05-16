/*  Uma forma de minimizar o problema do subdimensionamento ou superdimensionamento da
    implementa��o sequencial das estruturas de dados dados pilha, fila e lista, seria alocar o
    vetor respons�vel por armazenar os elementos dessas estruturas em tempo de execu��o.
    Redefina os TAD�s pilha, fila e lista para que a mem�ria dispon�vel para esses tipos seja
    definida em tempo de execu��o. */

// LISTA
typedef int lst_info; // tipo de dado da lista
typedef struct lst_no * lst_ptr;
struct lst_no{
 lst_info dado; // vetor para armazenar os n�s da lista
 lst_ptr prox; // n�mero de n�s da lista
};

void lst_append(lst_ptr * lst1, lst_ptr * lst2)
{
    lst_no l;
    while(l->prox != NULL) l = l->prox;
    l->prox = lst2;
    lst2 = NULL;
}
