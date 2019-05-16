/*  Escreva uma fun��o void dlst_append(dlst_ptr lst1, dlst_ptr lst2); que
    acrescenta no final da lista lst1 os elementos da lista lst2. A lista lst2 deve ficar vazia ap�s a
    execu��o desta fun��o. Considere que as listas s�o representadas atrav�s do encadeamento
    circular duplo com n� cabe�a  */

void dlst_append(dlst_ptr lst1, dlst_ptr lst2)
{
    lst1->ant->prox = lst2->ant;
    lst2->ant->ant = lst1->ant;
    lst1->prox->ant = lst2->prox;
    lst2->prox->prox = lst1->prox;
    lst2 = NULL;
}
