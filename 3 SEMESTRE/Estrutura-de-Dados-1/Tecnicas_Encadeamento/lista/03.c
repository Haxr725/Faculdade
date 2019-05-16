/*  Escreva uma fun��o void lst_split(lst_ptr * lst1, int pos, lst_ptr *
    lst2, lst_ptr * lst3); que divide a lista lst1 em duas listas, lst2 e lst3. A lista lst2
    dever� possuir os elementos das posi��es 0 a pos-1 de lst1, enquanto a lista lst3 dever�
    possuir os elementos de pos a n, considerando que n � o n�mero de n�s da lista lst1. Depois
    atribua NULL a lista lst1. Considere que as listas s�o representadas atrav�s do encadeamento
    simples. */

// LISTA
typedef int lst_info; // tipo de dado da lista
typedef struct lst_no * lst_ptr;
struct lst_no{
 lst_info dado; // vetor para armazenar os n�s da lista
 lst_ptr prox; // n�mero de n�s da lista
};

void lst_split(lst_ptr * lst1, int pos, lst_ptr * lst2, lst_ptr * lst3);
{
    int c = 0;
    lst2 = lst1;
    while(c++ < pos && lst1->prox != NULL) lst1 = lst1->prox;
    lst3 = lst1;
    lst1->prox = NULL;
    lst1 = NULL;
}
