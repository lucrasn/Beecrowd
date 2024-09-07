/*

    @author: lucrasn;
    @date: 07/09/2024;
    @problem: Preenchimento de Vetor I;

*/

#include <stdio.h>

int main() {
    int vetor[10];
    scanf("%d", &vetor[0]);

    printf("N[0] = %d\n", vetor[0]);

    for (int i = 1; i < 10; i++) {
        vetor[i] = vetor[i - 1] * 2;
        printf("N[%d] = %d\n", i, vetor[i]);
    }

    return 0;
}
