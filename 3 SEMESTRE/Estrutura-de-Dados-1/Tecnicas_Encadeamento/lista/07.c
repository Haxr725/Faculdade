/*  Escreva uma fun��o void dlst_reverse(dlst_ptr lst); que inverte a ordem dos
    elementos da lista duplamente encadeada com n� cabe�a lst. */

int main()
{
    dlst_ptr l;
    l = lst->ant;
    lst->ant = lst->prox;
    lst->prox = l;
    lst_info aux;
    l = l ->prox;
    while(l != NULL) {
    aux = l->ant->info;
    l->ant->info = l->prox->info;
    l->prox->info = aux;
    l = l->prox;
    }
}
