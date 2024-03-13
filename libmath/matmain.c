#include <stdio.h>
#include "libmatematica.h"

int main(){
    float angulo_radianos = 1;
    float seno = calcular_seno(angulo_radianos);
    float cosseno = calcular_cosseno(angulo_radianos);
    float tangente = calcular_tangente(angulo_radianos);

    printf("Seno = %.3f \n", seno);
    printf("Cosseno = %.3f \n", cosseno);
    printf("Tangente = %.3f", tangente);
}