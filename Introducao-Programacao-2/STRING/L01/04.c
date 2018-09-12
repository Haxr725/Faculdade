/*
4. Escreva um programa que receba uma string do teclado e informe se ela � pal�ndromo ou
n�o. Uma string � pal�ndromo quando pode ser lida tanto de tr�s para frente quanto de
frente para tr�s e possui exatamente a mesma sequ�ncia de caracteres. Por exemplo:
�ASA�, �SUBI NO ONIBUS�. Desconsidere os espa�os.
*/
#include <stdio.h>
#include <string.h>

int main()
{
    char str[81];
    int y,x,r=1,z;
    scanf("%80[^\n]", str);
    for(x = 0;str[x] != '\0';x++)
    {
        if(str[x] == ' ')
        {
            for(z = x, y = x + 1;str[y] != '\0';z++,y++)
                str[z] = str[y];
            str[z] = str[y];
        }
    }
    y = strlen(str);
    for(x = 0,y--; x < y; x++,y--)
    {
        if(str[x] != str[y])
            r = 0;
    }
    if(r)
        printf("S\n");
    else
        printf("N\n");
    return 0;
}
