/*  Escreva uma fun��o dlst_info dlst_delete_last(dlst_ptr lst); que dada uma
    lista duplamente encadeada com n� cabe�a n�o nula lst, remove e devolve o �ltimo elemento
    da lista lst */

dlst_info dlst_delete_last(dlst_ptr lst)
{
    dlst_info dado = lst->ant->dado;
    dlst_ptr p = lst->ant;
    lst->ant = lst->ant->ant;
    lst->ant->prox = lst;
    free(p);
    return dado;
}
