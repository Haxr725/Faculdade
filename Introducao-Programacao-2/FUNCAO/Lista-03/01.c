/*
1. Escreva uma fun��o que receba um vetor de inteiros de n elementos e troque o 1�
elemento pelo �ltimo, o 2� pelo pen�ltimo, o 3� pelo antepen�ltimo, e assim
sucessivamente. Escreva um programa que leia um vetor de inteiros de n elementos,
utilize a fun��o para inverter a ordem dos elementos do vetor e depois mostre o vetor.
*/

#include <stdio.h>

void inverso(int *v);

int main()
{
    int v[10],i;
    printf("INFORME\n\n");
    for(i=0;i<10;i++) scanf("%d", &v[i]);
    inverso(v);
    printf("INVERSO\n\n");
    for(i=0;i<10;i++) printf("%d\n", v[i]);
    return 0;
}

void inverso(int *v)
{
    int i,j,aux;
    for(i=0,j=9;i < j;i++,j--)
    {
        aux = v[i];
        v[i] = v[j];
        v[j] = aux;
    }
}
