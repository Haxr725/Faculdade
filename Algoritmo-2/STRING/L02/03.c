/*
3. Implemente uma fun��o que receba como par�metro uma string e um caractere, e retorne como resultado o n�mero de ocorr�ncias desse caractere na string passada como par�metro.
int conta char (char* str, char letra);
*/
#include <stdio.h>

int conta (char* str, char letra);

int main()
{
    int c;
    char ch,str[81];
    printf("Informe a string: ");
    scanf("%80[^\n]", str);
    printf("Informe o caractere: ");
    scanf(" %c", &ch);
    c = conta(str,ch);
    printf("O numero de ocorrencia(s) do caractere '%c' na string (%s) e %d\n",ch,str,c);
    return 0;
}

int conta (char* str, char letra)
{
    int i,c = 0;
    for(i = 0;str[i] != '\0';i++)
        if(str[i] == letra)
            c++;
    return c;
}
