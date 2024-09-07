/*

    @author: lucrasn;
    @date: 07/09/2024;
    @problem: Troca em Vetor I;

*/

#include <stdio.h>

int main() {
    int vetor[20], suport;

    // leitura
    for (int i = 0; i < 20; i++) {
        scanf("%d", &vetor[i]);
    }

    // inversão
    for (int i = 0; i < 10; i++) {
        suport = vetor[i];
        vetor[i] = vetor[19 - i];
        vetor[19 - i] = suport;
    }

    // print
    for (int i = 0; i < 20; i++) {
        printf("N[%d] = %d\n", i, vetor[i]);
    }
    return 0;
} // main
