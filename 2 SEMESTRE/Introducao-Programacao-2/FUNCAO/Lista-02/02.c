/*
 Criar uma fun��o em C que receba um n�mero bin�rio e converta-o para decimal. Obs.:
O par�metro passado na chamada � fun��o deve ser alterado para decimal.
*/

#include <stdio.h>

void bin2dec(long long *);

int main()
{
	long long num;
	printf("Informe um inteiro positivo na base bin�ria: ");
	scanf("%Ld", &num);
	bin2dec(&num);
	printf("N�mero na base decimal: %Ld\n", num);
	return 0;
}

void bin2dec(long long * n)
{
	long long bin = *n, pot2 = 1;
	*n = 0;
	while (bin > 0) {
		*n += (bin % 10) * pot2;
		bin /= 10;
		pot2 *= 2;
	}
}

