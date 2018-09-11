/*
 Escreva uma fun��o que recebe como par�metro um inteiro positivo ano e devolve
verdadeiro (true) se ano for bissexto, ou falso (false), caso contr�rio. Um ano �
bissexto se (ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0)).
*/

#include <stdio.h>

void bissexto(int );

int main()
{
    int n;
    scanf("%d", &n);
    bissexto(n);
    return 0;
}

void bissexto(int n)
{
    if(n % 4 == 0 && (n % 100 != 0 || n % 400 == 0))
        printf("TRUE\n");
    else
        printf("FALSE\n");
}
