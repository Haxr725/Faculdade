/*
13. Escreva um programa que use uma macro AREA_TRIRET para calcular a �rea de um
tri�ngulo ret�ngulo dados sua base e altura. �rea do tri�ngulo ret�ngulo = (base * altura) /
2.
*/
#include <stdio.h>
#define AREA_TRIRET(b,h) ((b) * (h))
int main()
{
    int b, h;
    printf("Informe a base e altura: ");
    scanf("%d %d", &b, &h);
    printf("A area e %d\n",AREA_TRIRET(b,h));
    return 0;
}
