/*
3. Implemente uma aplica��o que use os m�dulos my_io e my_math. Esta aplica��o
deve usar as fun��es do m�dulo my_io para deixar o usu�rio entrar com um n�mero
inteiro e outro real. Depois a aplica��o deve usar as fun��es do m�dulo my_math
para calcular o fatorial do n�mero inteiro e arredondar para um inteiro o n�mero
real e exibir os resultados no v�deo. Forne�a o makefile da aplica��o.
*/

#include <stdio.h>
#include "my_io.h"
#include "my_math.h"

int main()
{
	int x;
	double y;

	printf("Informe um n�mero natural: ");
	while (!read_int(&x) || x < 0) {
		printf("Voc� n�o informou um n�mero natural (>=0)!\nInforme um n�mero natural: ");
	}

	printf("Informe um n�mero real: ");
	while (!read_double(&y)) {
		printf("Voc� n�o informou um n�mero real!\nInforme um n�mero real: ");
	}

	printf("\nFatorial de %d = %Ld\n", x, fatorial(x));
	printf("%lf arredondado para o inteiro mais pr�xino: %d\n",
	       y, arredondarParaInt(y));
	return 0;
}

