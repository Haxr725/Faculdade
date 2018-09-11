/*
3. Escreva uma fun��o que recebe uma string e um caractere como par�metros e devolve a
posi��o da 1� ocorr�ncia do caractere na string. Caso o caractere n�o esteja contido na
string, a fun��o deve devolver -1.
*/
#include <stdio.h>

int ocorrencia(const char * str, char c);

int main()
{
    int p;
    char str[81],c;
    printf("Informe a string: ");
    scanf("%80[^\n]", str);
    printf("Informe o caractere: ");
    scanf(" %c", &c);
    p = ocorrencia(str,c);
    if(p == -1)
        printf("O caractere nao aparece na string informada\n");
    else
        printf("O caractere aparece na %d posicao da string informada\n", p);
}

int ocorrencia(const char *str, char c)
{
    int i;
    for(i = 0;str[i] != '\0';i++)
    {
        if(str[i] == c)
            return ++i;
    }
    return -1;
}
