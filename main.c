#include <stdio.h>
#include <stdlib.h>
#include "Pontos.h"

int main(){
    float d;
    Ponto *p, *q;
    // Ponto r; // ERRO

    p = Ponto_cria(10, 21);
    q = Ponto_cria(7, 25);
    // q->x = 2; // ERRO

    d = Ponto_distancia(p, q);
    printf("Distancia entre pontos: %f\n", d);

    Ponto_libera(q);
    Ponto_libera(p);

    system("pause");
    return 0;
}
