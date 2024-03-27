#include <stdio.h>
#include <stdlib.h>
#include "circulo.h"

int main(){
    Circulo *c1 = circ_cria(5, 4, 3);
    Circulo *c2 = circ_cria(5, 4, 6);
    float area1 = circ_area(c1);
    float area2 = circ_area(c2);
    int concentrico = circ_concentricos(c1, c2);
    float raio1 = circ_raio(c1);
    float raio2 = circ_raio(c2);

    printf("Area do circulo1 = %.2f\n", area1);
    printf("Area do circulo2 = %.2f\n", area2);
    printf("Sao concentricos?(1 para sim | 0 para nao): %d\n", concentrico);
    printf("Raio do circulo1 = %.2f\n", raio1);
    printf("Raio do circulo2 = %.2f\n", raio2);

    circ_libera(c1);
    circ_libera(c2);
    return 0;
}