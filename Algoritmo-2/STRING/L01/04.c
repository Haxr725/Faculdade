/*
4)	Escreva uma fun��o que calcule o comprimento da mais longa sequ�ncia de espa�os em branco em uma string.
*/
#include <stdio.h>
#include <strings.h>

int main(){

    char str[2000];
    int k=0,i=0,maior_seq=0;

    gets(str);

    while(str[i] != '\0'){

        if(str[i] == 32){ //32 � o c�digo ASCII do caractere ESPA�O. Opcionalmente poderia fazer: str[i] == ' '
            while(str[i]==32){
                k++;
                i++;
            }

            if(k > maior_seq){
               maior_seq = k;
            }
            k = 0;
        }else{
            i++;
        }
    }

    printf("Maior sequencia eh: %d",maior_seq);

    return 0;
}
