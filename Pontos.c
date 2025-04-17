#include <stdlib.h>
#include <math.h>
#include "Pontos.h"

// Cria um novo ponto
Ponto* Ponto_cria(float x, float y){
    Ponto* p = (Ponto*) malloc(sizeof(Ponto));
    if(p != NULL){
        p->x = x;
        p->y = y;
    }
    return p;
}

// Libera um ponto
void Ponto_libera(Ponto* p){
    free(p);
}

// Acessa os valores "x" e "y" de um ponto
int Ponto_acessa(Ponto* p, float* x, float* y){
    if(p == NULL)
        return 0;
    *x = p->x;
    *y = p->y;
    return 1;
}

// Atribui os valores "x" e "y" a um ponto
int Ponto_atribui(Ponto* p, float x, float y){
    if(p == NULL)
        return 0;
    p->x = x;
    p->y = y;
    return 1;
}

// Calcula a distância entre dois pontos
float Ponto_distancia(Ponto* p1, Ponto* p2){
    if(p1 == NULL || p2 == NULL)
        return -1;
    float dx = p1->x - p2->x;
    float dy = p1->y - p2->y;
    return sqrt(dx * dx + dy * dy);
}
