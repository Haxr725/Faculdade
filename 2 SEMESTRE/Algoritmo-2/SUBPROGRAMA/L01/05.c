/*
 Fa�a uma fun��o chamada compara() que recebe duas strings (s1 e s2) como par�metros e compara os seus conte�dos.
A fun��o deve retornar a posi��o onde s2 come�a dentro de s1 (caso s2 fa�a parte de s1) e -1, caso contr�rio.
Repare que s2 pode estar contida em s2 em qualquer posi��o. N�o use a fun��o strstr().
Exemplo: se a fun��o recebesse as strings s1 � �atenciosamente� e s2 � �cio�, a fun��o deveria retornar 4.
*/

#include <stdio.h>

int compara(char *s1, char *s2);

int main()
{
    char s1[81],s2[81];
    int p;
    scanf("%80[^\n]", s1);
    scanf(" %80[^\n]", s2);
    p = compara(s1,s2);
    printf("%d\n", p);
    return 0;
}

int compara(char *s1, char *s2)
{
    int x,y,p;
    for(x=0,y=0;s1[x] != '\0';x++)
    {
        if(s1[x] == s2[y])
        {
            p = x;at
            for(;s2[y] != '\0';x++,y++)
            {
                if(s1[x] != s2[y])
                {
                    p = -1;
                    break;
                }
            }
            if(p != -1)
                break;
        }
    }
    return p;

}
