/*

    @author: lucrasn;
    @date: 07/09/2024;
    @problem: Tipos de Triângulos;

*/

#include <stdio.h>
#include <math.h>

int main() {
    double lados[3], suport[3];
    int indice_max = 0, indice_min = 0;

    for (int i = 0; i < 3; i++) {
        scanf("%lf", &suport[i]);

        if (suport[i] >= suport[indice_max]) {
            indice_max = i;
        } // if max
        if (suport[i] <= suport[indice_min]) {
            indice_min = i;
        } // if min
    } // for

    // ordenando
    lados[0] = suport[indice_max]; // primeiro
    for (int i = 0; i < 3; i++) {
        if (i != indice_max && i != indice_min) {
            lados[1] = suport[i];
        } // if meiuca
    } // for meiuca
    lados[2] = suport[indice_min]; // ultimo

    if (lados[0] >= lados[1] + lados[2]) {
        printf("NAO FORMA TRIANGULO\n");
    } else {
        if (pow(lados[0], 2) == pow(lados[1], 2) + pow(lados[2], 2)) {
            printf("TRIANGULO RETANGULO\n");

        } else if (pow(lados[0], 2) > pow(lados[1], 2) + pow(lados[2], 2)) {
            printf("TRIANGULO OBTUSANGULO\n");

        } else if (pow(lados[0], 2) < pow(lados[1], 2) + pow(lados[2], 2)) {
            printf("TRIANGULO ACUTANGULO\n");
        } // if retangulo/obtusangulo/acutangulo

        if (lados[0] == lados[1] && lados[0] == lados[2]) {
            printf("TRIANGULO EQUILATERO\n");

        } else if ((lados[0] == lados[1] && lados[0] != lados[2]) || (lados[0] == lados[2] && lados[0] != lados[1]) || (lados[1] == lados[2] && lados[1] != lados[0])) {
            printf("TRIANGULO ISOSCELES\n");
        } // if equilatero/isoceles
    } // if é ou não é :)
    return 0;
} // main