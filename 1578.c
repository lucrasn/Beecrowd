/*

    @author: lucrasn;
    @date: 23/09/2024;
    @problem: Matriz de Quadrados;

*/

#include <stdio.h>
#include <string.h>

int main() {
    int n, ordem, numeroMatriz = 4;
    scanf("%d", &n); // número de matrizes

    for (int k = 0; k < n; k++) {
        scanf("%d", &ordem);
        unsigned long long matriz[ordem][ordem];

        // ler matriz e calcular quadrados
        for (int i = 0; i < ordem; i++) {
            for (int j = 0; j < ordem; j++) {
                scanf("%llu", &matriz[i][j]);
                matriz[i][j] *= matriz[i][j]; // multiplicando por ele mesmo

            }
        }

        // saída da matriz de quadrados
        printf("Quadrado da matriz #%d:\n", numeroMatriz);
        for (int i = 0; i < ordem; i++) {
            for (int j = 0; j < ordem; j++) {
                // descobrindo o maior número
                unsigned long long maior = 0;
                for (int w = 0; w < ordem; w++) {
                    if (maior < matriz[w][j]) {
                        maior = matriz[w][j];
                    }
                }

                // calcular a quantidade de digitos do maior número
                char numStr[21];
                sprintf(numStr, "%llu", maior);
                int len = (int)strlen(numStr);

                // printando o elemento
                printf(j == 0 ? "%*llu" : " %*llu", len, matriz[i][j]);
            }
            printf("\n");
        }
        // se estivermos no printando a ultima matriz não precisamos pular mais uma linha
        if (!(k + 1 == n)) {
            printf("\n");
        }
        numeroMatriz++;
    }
    return 0;
}
