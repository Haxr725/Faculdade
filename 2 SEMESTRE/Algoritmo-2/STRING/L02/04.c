/*
4. Implemente uma fun��o que receba uma string como par�metro e altere nessa string as ocorr�ncias de caracteres mai�sculos para min�sculos e vice-versa. �
void inverte letra (char* str);
*/
#include <stdio.h>
#include <ctype.h>

void inverteletra (char* str);

int main()
{
    char str[81];
    printf("Informe a string: ");
    scanf("%s", str);
    inverteletra(str);
    printf("String formatada: %s", str);
    return 0;
}

void inverteletra (char* str)
{
    int i;
    for(i = 0;str[i] != '\0';i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
            str[i] = tolower(str[i]);
        else
            str[i] = toupper(str[i]);
    }
}
