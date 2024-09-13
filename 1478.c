/*

    @author: lucrasn;
    @date: 13/09/2024;
    @problem: Matriz Quadrada II;

*/

#include <stdio.h>

int main() {
    int ordem;

    while (scanf("%d", &ordem) && ordem != 0) {
        int M[ordem][ordem], item = 1, diagonal = 0;

        while (diagonal < ordem) {
            for (int i = 0; i < ordem; i++) {
                for (int j = 0; j < ordem; j++) {
                    if ((i + diagonal == j) || (j + diagonal == i)) {
                        M[i][j] = item;
                    } else if ((i == j) && (item == 1)) {
                        M[i][j] = item;
                    } // if condição
                } // for culuna
            } // for linha

            item++;
            diagonal++;
        } // while preenchimento
        
        for (int i = 0; i < ordem; i++) {
            for (int j = 0; j < ordem; j++) {
                if (j == 0) {
                    printf("%3d", M[i][j]);
                } else {
                    printf(" %3d", M[i][j]);
                } // if sub sub
            }  // for printf coluna sub

            printf("\n");

        } // for printf linha

        printf("\n");

    } // while
    return 0;
} // main
