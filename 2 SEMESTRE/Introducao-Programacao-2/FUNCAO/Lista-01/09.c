/*
A fun��o floor, definida no arquivo math.h, arredonda seu argumento (um n�mero do tipo
double) para o maior inteiro que n�o seja maior que esse argumento, na pr�tica, isso significa
devolver a parte inteira do argumento. Entretanto, o valor de retorno da fun��o floor � um
double. Crie uma fun��o de prot�tipo int   arredondarParaInt(double   n); que
arredonda seu par�metro n para o inteiro mais pr�ximo. Dica: some 0.5 a n e utilize a fun��o
floor. Escreva um programa que leia v�rios n�meros e use a fun��o arredondarParaInt
para arredondar cada um desses n�meros para o inteiro mais pr�ximo.
*/

#include <stdio.h>
#include <math.h>

int   arredondarParaInt(double   n);

int main()
{
    int a;
    double n;
    scanf("%lf", &n);
    a = arredondarParaInt(n);
    printf("a = %d\n", a);
    return 0;
}

int   arredondarParaInt(double   n)
{
    n += 0.5;
    return floor(n);
}
