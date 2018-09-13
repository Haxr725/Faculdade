/*
5. Implemente uma fun��o que receba como par�metro uma string e dois caracteres (original e novo), e substitua nessa string todas as ocorr�ncias do caractere original pelo caractere novo. Por exemplo, se essa fun��o receber como par�metro a string �Estruturas� e os caracteres �t� e �d�, ap�s a sua chamada a string deve passar a conter a sequ�ncia de caracteres �Esdruduras�.
void troca letra (char* str, char original, char novo);
*/
#include <stdio.h>

void trocaletra (char* str, char original, char novo);

int main()
{
    char str[81],o,n;
    printf("Informe a string: ");
    scanf("%80[^\n]", str);
    printf("Informe o caractere antigo e novo: ");
    scanf(" %c %c", &o, &n);
    trocaletra(str,o,n);
    printf("String formatada: %s\n", str);
    return 0;
}

void trocaletra (char* str, char original, char novo)
{
    int i;
    for(i = 0;str[i] != '\0';i++)
        if(str[i] == original)
            str[i] = novo;
}
