/*

    @author: lucrasn;
    @date: 15/09/2024;
    @problem: Matriz Quadrada III;

*/

#include <stdio.h>
#include <string.h>

int main() {
    int ordem;

    while (scanf("%d", &ordem) && ordem != 0) {
        int M[ordem][ordem], item = 1, diagonal = 1, incremento = 1, dobro = 1;

        for (int i = 0; i < ordem; i++) {
            for (int j = 0; j < ordem; j++) {
                if (i + j == diagonal) {
                    M[i][j] = item * 2;
                    item *= 2;
                    diagonal++;
                } else {
                    M[i][j] = item;
                } // if sub
            } // for culuna

            item = dobro;
            diagonal = incremento;
            
            if (i != 0) {
                diagonal++;
                incremento++;
                item *= 2;
                dobro *= 2;
            } // if

        } // for linha

        // descobrindo o tamanho do ultimo elemento para colocar do jeito que a questão quer
        char suport[10];
        sprintf(suport, "%d", M[ordem - 1][ordem - 1]);
        int T = strlen(suport);

        for (int i = 0; i < ordem; i++) {
            for (int j = 0; j < ordem; j++) {
                if (j == 0) {
                    printf("%*d", T, M[i][j]);
                } else {
                    printf(" %*d", T, M[i][j]);
                } // if sub printf
            } // for printf coluna sub

            printf("\n");

        } // for printf linha

        printf("\n");

    } // while
    return 0;
} // main
