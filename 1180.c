/*

    @author: lucrasn;
    @date: 08/09/2024;
    @problem: Menor e Posição;

*/

#include <stdio.h>
// #include <stdlib.h> // malloc ou calloc (na verção c99 não precisa)

int main() {
    int n = 0, indice_min = 0;
    scanf("%d", &n);

    int x[n];
    // int *x = (int *)malloc(n * sizeof(int)); // alocação dinâmica de memória  (na verção c99 não precisa)

    for (int i = 0; i < n; i++) {
        scanf("%d", &x[i]);

        if (x[i] < x[indice_min]) {
            indice_min = i;

        } // if
    } // for

    printf("Menor valor: %d\nPosicao: %d\n", x[indice_min], indice_min);

    return 0;
} // main
