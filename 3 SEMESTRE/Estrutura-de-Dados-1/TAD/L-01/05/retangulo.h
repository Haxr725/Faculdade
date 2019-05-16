#ifndef RETANGULO_H_INCLUDED
#define RETANGULO_H_INCLUDED

#include <stdbool.h>

typedef struct {
    int x;
    int y;
} ponto;

typedef struct {
    ponto p;
    int alt;
    int comp;
} retangulo;

/* Fun�ao que inicializa um retangulo */
void ret_init(retangulo *, int, int, int, int);

/* Fun�ao que retorna a area de um retangulo */
int ret_area(retangulo);

/* Fun�ao que verifica se um ponto esta dentro de um retangulo */
bool ret_contains(retangulo, ponto);

#endif // RETANGULO_H_INCLUDED
