/*
 Criar uma fun��o em C que receba um n�mero decimal e converta-o para bin�rio.
Obs.: O par�metro passado na chamada � fun��o deve ser alterado para bin�rio.
*/

#include <stdio.h>

void dec2bin(long long *);

int main()
{
	long long num;
	printf("Informe um n�mero inteiro positivo na base decimal: ");
	scanf("%Ld", &num);
	dec2bin(&num);
	printf("N�mero na base bin�ria: %Ld\n", num);
	return 0;
}

void dec2bin(long long * n)
{
	long long dec = *n, pot10 = 1;
	*n = 0;
	while (dec > 0) {
		*n += (dec % 2) * pot10;
		dec /= 2;
		pot10 *= 10;
	}
}
