/*

    @author: lucrasn;
    @date: 13/09/2024;
    @problem: Matriz 123;

*/

#include <stdio.h>

int main() {
    int ordem;

    while (scanf("%d", &ordem) != EOF) {
        int M[ordem][ordem];

        for (int i = 0; i < ordem; i++) {
            for (int j = 0; j < ordem; j++) {
                if (i + j == ordem - 1) {
                    M[i][j] = 2;
                } else if (i == j) {
                    M[i][j] = 1;
                } else {
                    M[i][j] = 3;
                } // if 
            } // for culuna
        } // for linha

        for (int i = 0; i < ordem; i++) {
            for (int j = 0; j < ordem; j++) {
                printf("%d", M[i][j]);
            } // for printf coluna sub

            printf("\n");

        } // for printf linha
    } // while
    return 0;
} // main
