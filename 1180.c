/*

    @author: lucrasn;
    @date: 08/09/2024;
    @problem: Menor e Posi��o;

*/

#include <stdio.h>
// #include <stdlib.h> // malloc ou calloc (na ver��o c99 n�o precisa)

int main() {
    int n = 0, indice_min = 0;
    scanf("%d", &n);

    int x[n];
    // int *x = (int *)malloc(n * sizeof(int)); // aloca��o din�mica de mem�ria  (na ver��o c99 n�o precisa)

    for (int i = 0; i < n; i++) {
        scanf("%d", &x[i]);

        if (x[i] < x[indice_min]) {
            indice_min = i;

        } // if
    } // for

    printf("Menor valor: %d\nPosicao: %d\n", x[indice_min], indice_min);

    return 0;
} // main
