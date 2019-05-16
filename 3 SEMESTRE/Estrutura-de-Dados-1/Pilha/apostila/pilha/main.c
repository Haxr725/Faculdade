/**
 * main.c
 * Programa para validar os delimitadores de um arquivo C.
 * Rodrigo Suarez Moreira
 * 22/03/2019
 */
#include "pilha.h"
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

bool casa(char, char);

int main()
{
    FILE * arq;
    char nome_arq[40]; // nome do arquivo que ser� validado
    pilha p; // pilha de delimitadores
    char s; // armazena cada caractere do arquivo
    printf("Este programa valida os delimitadores de um programa em C");
    printf("\n\nDelimitadores v�lidos: (), [], {}");
    printf("\n\nDigite o nome do arquivo que ser� validado: ");
    scanf("%39[^\n]", nome_arq);
    if ((arq = fopen(nome_arq, "r")) == NULL)
    {
        fprintf(stderr, "Erro de abertura do arquivo %s!\n", nome_arq);
        return 1;
    }
    stack_init(&p);
    do
    {
        s = fgetc(arq);
        putchar(s);
        if (s == '[' || s == '{')
        {
            push(&p, s); // Empilha o delimitador de abertura
        }
        else if (s == '{')
            {
                if(top(p) == '[' || top(p) == '(')
                {
                    /* Pilha vazia, programa errado */
                    printf("\nErro: parentese ou colchete aberto\n");
                       fclose(arq);
                       return 0;
                }
                push(&p, s); // Empilha o delimitador de abertura
            }
            else if (s == ')' || s == ']' || s == '}')
            {
                /* Um delimitador de fechamento foi encontrado */
                if (stack_isempty(p))
                {
                    /* Pilha vazia, programa errado */
                    printf("\nErro: delimitador de abertura esperado antes de '%c'\n", s);
                           fclose(arq);
                           return 0;
                }
                else if (!casa(pop(&p), s))
                {
                    /* Delimitadores n�o casam, programa errado */
                    9
                    printf("\nErro: '%c' nao casa com o delimitador de abertura\n", s);
                    fclose(arq);
                    return 0;
                }
            }
    }
    while (s != EOF);
    fclose(arq);
    if (!stack_isempty(p))
    {
        /* A pilha n�o est� vazia, programa errado */
        printf("\nErro: '%c' nao foi fechado\n", top(p));
    }
    else
    {
        printf("\nO programa esta' Correto quanto aos delimitadores!\n");
    }
    return 0;
}

/*--------------------------------------------------------
 * Fun��o: casa
 *--------------------------------------------------------
 * Descri��o: retorna verdadeiro se op2 for o delimitador
 * de fechamento de op1. Caso contr�rio, retorna falso.
 *--------------------------------------------------------
 * Par�metros:
 * - op1: delimitador de abertura;
 * - op2: delimitador de fechamento.
 *--------------------------------------------------------*/
bool casa(char op1, char op2)
{
    return ((op1 == '(') && (op2 == ')')) ||
           ((op1 == '[') && (op2 == ']')) ||
           ((op1 == '{') && (op2 == '}'));
}

