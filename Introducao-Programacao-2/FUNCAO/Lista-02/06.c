/*
6. Escreva uma fun��o que tem como par�metros de entrada e sa�da tr�s n�meros inteiros,
dia, mes e ano, representando uma data, e modifica esses inteiros de forma que eles
representem o dia seguinte. Utilize essa fun��o em um programa que leia um inteiro
positivo n e uma sequ�ncia de n datas e imprime, para cada data, o dia seguinte.
*/

#include <stdio.h>

void seguinte(int d,int m,int a);

int main()
{
    int n;
    scanf("%d", &n);
    while(n--)
    {
        int d,m,a;
        printf("Digite a data\n");
        scanf("%d %d %d", &d, &m, &a);
        seguinte( d, m, a);
    }
    return 0;
}

void seguinte(int d,int m,int a)
{
    d ++;
    if(d > 30)
    {
        d -= 30;
        m ++;
        if(m > 12)
        {
            m -= 12;
            a ++;
        }
    }
    printf("dia seguinte : %02d-%02d-%04d\n", d,m,a);
}
