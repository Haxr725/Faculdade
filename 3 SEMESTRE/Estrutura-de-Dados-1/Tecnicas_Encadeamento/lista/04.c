/*  Escreva uma fun��o lst_info lst_delete_last(lst_ptr * lst); que dada uma
    lista encadeada simples n�o nula lst, remove e devolve o �ltimo elemento da lista lst. */


lst_info lst_delete_last(lst_ptr * lst)
{
    lst_info n;
    lst_ptr l;
    while(l->prox != NULL) l = l->prox;
    n = l->dado;
    free(l);
    return n;
}
