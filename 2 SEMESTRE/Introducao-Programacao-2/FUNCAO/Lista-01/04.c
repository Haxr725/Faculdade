/*Escreva uma fun��o de prot�tipo void retangulo(int a, int c); que desenha no
v�deo um ret�ngulo formado por asteriscos (*) com a linhas de altura e c colunas de
comprimento. Por exemplo, se for feita a seguinte chamada a fun��o: retangulo(5, 10);
A fun��o deve desenhar no v�deo o seguinte ret�ngulo:
**********
**********
**********
**********
**********/
#include <stdio.h>

void retangulo(int a, int c);

int main()
{
    int a,c;
    scanf("%d %d", &a, &c);
    retangulo(a,c);
}

void retangulo(int a, int c)
{
    int x,y;
    for(x=0;x < a; x++)
    {
        for(y=0;y<c; y++)
        {
            printf("*");
        }
        printf("\n");
    }
}
