/*
15. Escreva um programa que use uma macro MINIMUM3 para determinar o menor de tr�s
valores num�ricos. A macro MINIMUM3 deve usar a macro MINIMUM2 definida um
exerc�cio anterior
*/
#include <stdio.h>
#define MINIMUM2(a,b) a < b? a : b
#define MINIMUM3(a,b,c) (MINIMUM2(a,b)) < (MINIMUM2(a,c))? MINIMUM2(a,b) : MINIMUM2(a,c)

int main()
{
    int a,b,c;
    printf("Informe tres numeros: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("O menor numero e %d\n",MINIMUM3(a,b,c));
    return 0;
}
