/*
Escreva uma fun��o que recebe um inteiro m e devolve true (verdadeiro) se m � primo ou
false (falso), caso contr�rio.
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
    int b=1,x;
    for(x=2; x  < n ;x++)
    {
        if(n % x == 0)
        {
            b = 0;
        }
    }
    if(b)
        printf("TRUE\n");
    else
        printf("FALSE\n");
}
