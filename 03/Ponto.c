#include <stdlib.h>
#include <stdio.h>

#include "Ponto.h"

Ponto* cria(float x1, float y1) {
    Ponto* novoPonto = (Ponto*) malloc(sizeof(Ponto));
    if (novoPonto == NULL) {
        printf("Não consegui alocar memória para este novo ponto\n");
        exit(1);
    }

    novoPonto->x = x1;
    novoPonto->y = y1;

    return novoPonto;
}