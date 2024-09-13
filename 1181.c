/*

    @author: lucrasn;
    @date: 12/09/2024;
    @problem: Linha na Matriz;

*/

#include <stdio.h>

int main() {
    int linha;
    float M[12][12], resultado = 0;
    char operacao;

    scanf("%d %c", &linha, &operacao);

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            scanf("%f", &M[i][j]);
        } // for sub colunas
    } // for linhas

    for (int j = 0; j < 12; j++) {
        resultado += M[linha][j];
    } // if soma

    if (operacao == 'M') {
        resultado /= 12;
    } // if média

    printf("%.1f\n", resultado);

    return 0;
} // main
