/*
6. Implemente uma fun��o que receba uma string como par�metro e substitua todas as letras por suas sucessoras no alfabeto. Por exemplo, a string �Casa� seria alterada para �Dbtb�.
void shift string (char* str);
Obs.: A letra �z� deve ser substitu�da pela letra �a� (e �Z� por �A�). Caracteres que n�o forem letras devem permanecer inalterados.
*/
#include <stdio.h>

void shiftstring (char* str);

int main()
{
    char str[81];
    printf("Informe a string: ");
    scanf("%80[^\n]", str);
    shiftstring(str);
    printf("String formatada: %s\n", str);
    return 0;
}

void shiftstring(char *str)
{
    int i;
    for(i = 0;str[i] != '\0';i++)
    {
        if(str[i] == 'Z' || str[i] == 'z')
            str[i] -= 25;
        else
            str[i]++;
    }
}
