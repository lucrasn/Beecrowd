/*

    @author: lucrasn;
    @date: 12/09/2024;
    @problem: Matriz Quadrada I;

*/

#include <stdio.h>

int main() {
    int ordem;

    while (scanf("%d", &ordem) && ordem != 0) {
        int M[ordem][ordem], item = 1, menos = 0, centro = 0;

        while (ordem - menos > 0) {
            for (int i = 0 + centro; i < ordem - menos; i++) {
                for (int j = 0 + centro; j < ordem - menos; j++) {
                    M[i][j] = item;
                } // for culuna
            } // for linha

            menos++;
            centro++;
            item++;
        }

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
