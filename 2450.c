/*

    @author: lucrasn;
    @date: 17/09/2024;
    @problem: Matriz Escada;

*/

#include <stdio.h>

#define VERDADEIRO 1
#define FALSO 0

int main() {
    int maxZeros = 0; // Guarda a maior quantidade de zeros consecutivos encontrados
    int zerosAtuais;  // Quantidade atual de zeros consecutivos em uma linha
    int linha, coluna; // Índices para percorrer as linhas e colunas
    int encontrouZerosConsecutivos, suportBool = VERDADEIRO;
    int valor;

    int numLinhas, numColunas;
    scanf("%d %d", &numLinhas, &numColunas);

    for (linha = 0; linha < numLinhas; ++linha) {
        zerosAtuais = 0;
        encontrouZerosConsecutivos = VERDADEIRO;

        for (coluna = 0; coluna < numColunas; ++coluna) {
            scanf("%d", &valor);

            // Verifica se o valor é zero e se ainda está na sequência de zeros
            if (valor == 0 && encontrouZerosConsecutivos) {
                zerosAtuais++;
            } else {
                encontrouZerosConsecutivos = FALSO;
            }
        }

        // Atualiza a quantidade máxima de zeros consecutivos encontrados
        if (linha != 0) {
            if ((zerosAtuais > maxZeros || (zerosAtuais == maxZeros && zerosAtuais == numColunas)) && suportBool) {
                maxZeros = zerosAtuais;
            } else {
                maxZeros = 0, suportBool = FALSO; // legal :)
            }
        } else {
            maxZeros = zerosAtuais;
        }
    }

    if (maxZeros > 0) {
        printf("S\n");
    } else {
        printf("N\n");
    }

    return 0;
}
