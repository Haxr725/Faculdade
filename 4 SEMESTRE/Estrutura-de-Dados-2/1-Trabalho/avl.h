#ifndef _AVL_H
#define _AVL_H

#include <stdbool.h>
#include "listaord.h"
#include <stdio.h>

typedef struct {
 char usuario[21]; // nome de usu�rio
 char nome_completo[51]; // nome completo
 char sexo;
 lst_ptr amigos; // lista encadeada ordenada dos amigos
} avl_info;

typedef struct avl_no * avl_tree;

struct avl_no {
 avl_info dado;
 avl_tree esq;
 avl_tree dir;
 int bal; // balanceamento do n�
};

/*
 * Imprime a �rvore AVL t atrav�s de um percurso em ordem.
 */
void print_tree(avl_tree t);

/*
 * Imprime a informa�ao de um no da arvore
 */
 void print_info(avl_tree t);

/*
 * Salva a arvore avl em arquivo .txt
 */
void save_tree(avl_tree t, FILE * arq);

/*
 * Verifica se a palavra x j� ocorreu na �rvore AVL t;
 * caso afirmativo, seu contador � incrementado; caso contr�rio,
 * x � inserida em t e h sinaliza que houve um aumento da
 * altura de t.
 */
bool avl_search(avl_tree * t, avl_info x, bool * h);


/*
 * Faz uma rota��o para a direita na �rvore AVL t.
 */
void rotacao_dir(avl_tree * t);


/*
 * Faz uma rota��o para a esquerda na �rvore AVL t.
 */
void rotacao_esq(avl_tree *);

/*
 * Se a palavra x est� contida na �rvore AVL t, x �
 * removida de t, h sinaliza uma diminui��o da altura
 * de t e a fun��o devolve verdadeiro; caso contr�rio,
 * nada � feito e a fun��o devolve falso.
 */
bool delete_avl_no(avl_tree * t, avl_info * x, bool * h);


/*
 * Faz o balanceamento da �rvore AVL t ap�s uma remo��o
 * em sua sub�rvore esquerda e sinaliza se houve uma
 * dimui��o da altura dessa sub�rvore atrav�s de h.
 */
void balance_esq(avl_tree * t, bool * h);


/*
 * Faz o balanceamento da �rvore AVL t ap�s uma remo��o
 * em sua sub�rvore direita e sinaliza se houve uma
 * dimui��o da altura dessa sub�rvore atrav�s de h.
 */
void balance_dir(avl_tree *, bool *);

/*
 * Devolve um ponteiro para o n� que cont�m o menor
 * valor na �rvore AVL t e sinaliza atrav�s de h se
 * houve uma diminui��o da altura de t.
 */

/*
 * Vai procurar o no atraves de seu elemento chave e retornar true se existir
 * ou false se nao existir
 */
avl_tree avl_find(avl_tree t, char * chave);

avl_tree get_min(avl_tree * t, bool * h);

#endif
