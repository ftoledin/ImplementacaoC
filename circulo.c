#include <stdio.h>
#include <stdlib.h>
#include "circulo.h"

typedef struct Circulo{
    float x;
    float y;
    float r;
} Circulo;

Circulo* circ_cria(float x, float y, float r){
    Circulo* c = (Circulo*) malloc(sizeof(Circulo));
    c->x = x;
    c->y = y;
    c->r = r;
    return c;
};
void circ_libera(Circulo *c){
    free (c);
}
float circ_area(Circulo *c){
    return (3.1415 * (c->r * c->r));
}
int circ_concentricos(Circulo *c1, Circulo *c2){
    return(c1->x == c2->x) && (c1->y == c2->y);
}
float circ_raio(Circulo *c){
    return c->r;
}