/*
 O c�digo de Cesar � uma das t�cnicas de criptografia mais simples e conhecidas.
� um tipo de substitui��o no qual cada letra do texto � substitu�da por outra,
que se apresenta n posi��es ap�s ela no alfabeto. Por exemplo, com uma troca
de tr�s posi��es a letra A seria substitu�da por D, B se tornaria E e assim
por diante. Escreva um programa que fa�a uso da fun��o void cesar(char[], int
posicoes) . Entre com uma string, gere uma nova string e imprima uma string codificada.

Exemplo:

String: a ligeira raposa marrom saltou sobre o cachorro cansado

Nova String: d oljhlud udsrvd pduurp vdowrx vreuh r fdfkruur fdqvdgr
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void cesar(char *str, int i);
int main()
{
    char frase[81];
    int i;
    scanf("%80[^\n]", frase);
    scanf("%d", &i);
    cesar(frase, i);
    return 0;
}

void cesar(char *str, int i)
{
        int y;
        for(y=0; str[y] != '\0'; y++)
        {
            if(str[y] != ' ')
            str[y] += i;
        }
        printf("%s\n", str);
}
