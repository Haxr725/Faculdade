/*
Escreva um programa que leia um n�mero inteiro n�o-negativo n e imprima os n primeiros
n�meros primos. Utilize a fun��o da quest�o anterior.
*/
#include <stdio.h>

void primo(int n);

int main()
{
    int n;
    scanf("%d", &n);
    primo(n);
    return 0;
}

void primo(int n)
{
    int b,x,y;
    for(x=1; x  <= n ;x++)
    {
        b=1;
        for(y=2; y < x; y++)
        {
            if(x % y == 0)
            {
                b=0;
                break;
            }
        }
        if(b)
        printf("%d\n", x);
    }
}
