/*
10. Escreva uma fun��o de prot�tipo int * new_integer(void); que declara e
inicializa um inteiro dentro da fun��o e retorna o endere�o deste inteiro. Imprima o valor
inteiro associado a esse endere�o de mem�ria na fun��o main(). Isto � poss�vel em C?
Seu compilador exibe alguma advert�ncia? Esta opera��o � segura?
*/

#include <stdio.h>

int * new_integer(void);

int main()
{
    int *e;
    e = new_integer();
    printf("%d\n", *e);
    return 0;
}

int * new_integer(void)
{
    int i;
    scanf("%d", &i);
    return &i;
}
