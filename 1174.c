/*

    @author: lucrasn;
    @date: 07/09/2024;
    @problem: Preenchimento de Vetor I;

*/

#include <stdio.h>

int main() {
    float vetor[100];

    for (int i = 0; i < 100; i++) {
        scanf("%f", &vetor[i]);

        if (vetor[i] <= 10) {
            printf("A[%d] = %.1f\n", i, vetor[i]);
        } // if menor 10
    } // for
    return 0;
} // main
