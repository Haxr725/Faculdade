/*
 Escreva uma fun��o de prot�tipo double arredondar(double n, int c); que arredonda
o valor de n para um n�mero com precis�o de c casas decimais. Por exemplo,
arredondar(5.78351,1) devolve 5.8, arredondar(5.78351,2) devolve 5.78,
2
arredondar(5.78351,3) devolve 5.784. Dica: utilize a fun��o arredondarParaInt
passando seu argumento multiplicado por 10c
, e depois divida o valor de retorno da fun��o por
10c
*/

#include <stdio.h>
#include <math.h>

double arredondar(double n, int c);

int main()
{
    double n,a;
    int c;
    scanf("%lf", &n);
    scanf("%d", &c);
    a = arredondar(n,c);
    printf("%g\n", a);
}

double arredondar(double n, int c)
{
    double a;
    n *= pow(10,c);
    a = floor(n) / pow(10,c);
    return a;
}
