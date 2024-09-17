/*

    @author: lucrasn;
    @date: 16/09/2024;
    @problem: Matriz Quadrada IV;

*/

#include <stdio.h>

int main() {
    int ordem;

    while (scanf("%d", &ordem) != EOF) {
        int M[ordem][ordem];

        for (int i = 0; i < ordem; i++) {
            for (int j = 0; j < ordem; j++) {
                if (i + j == ordem - 1) {
                    M[i][j] = 3;
                } else if (i == j) {
                    M[i][j] = 2;
                } else {
                    M[i][j] = 0;
                } // if 
            } // for culuna
        } // for linha

        // matriz interna com 1
        for (int i = ordem / 3; i < ordem - (ordem / 3); i++) {
            for (int j = ordem / 3; j < ordem - (ordem / 3); j++) {
                M[i][j] = 1;
            } // for coluna
        } // for linha

        // centro da matriz
        int centro = ordem / 2;
        M[centro][centro] = 4;

        for (int i = 0; i < ordem; i++) {
            for (int j = 0; j < ordem; j++) {
                printf("%d", M[i][j]);
            } // for printf coluna sub

            printf("\n");

        } // for printf linha

            printf("\n");

    } // while
    return 0;
} // main
