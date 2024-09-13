/*

    @author: lucrasn;
    @date: 12/09/2024;
    @problem: Coluna na Matriz;

*/

#include <stdio.h>

int main() {
    int coluna;
    float M[12][12], resultado = 0;
    char operacao;

    scanf("%d %c", &coluna, &operacao);

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            scanf("%f", &M[i][j]);
        } // for sub colunas
    } // for colunas

    for (int i = 0; i < 12; i++) {
        resultado += M[i][coluna];
    } // if soma

    if (operacao == 'M') {
        resultado /= 12;
    } // if média

    printf("%.1f\n", resultado);

    return 0;
} // main
