/*
9. Escreva um programa que dada um inteiro n e um caractere ch, solicite que o usu�rio
informe n palavras que come�am com a letra ch. Se o usu�rio informar alguma palavra
que n�o comece com a letra ch, o programa deve exibir uma mensagem informando que a
palavra n�o come�a com a letra ch. No final o programa deve exibir as n palavras
digitadas pelo usu�rio que come�am com a letra ch.
*/
#include <stdio.h>
#include <string.h>

int main()
{
    int n,i = 0,c = 0;
    printf("Informe a quantidade de nomes: ");
    scanf("%d", &n);
    char ch;
    printf("Informe o caractere: ");
    scanf(" %c", &ch);
    char str[n][81], v[81];
    printf("Informe os %d nomes:\n", n);
    while(c < n)
    {
        scanf(" %80[^\n]", v);
        if(v[0] == ch)
        {
            strcpy(str[i],v);
            i++;
        }
        c++;
    }
    printf("Palavras que comecam com %c:\n", ch);
    for(c = 0;c < i;c++)
        printf("%s\n", str[c]);
    return 0;
}
