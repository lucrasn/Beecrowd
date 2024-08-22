/*

    @author: lucrasn;
    @date: 21/08/2024;
    @problem: A Corrida de Lesmas;

*/

#include <stdio.h>

int main() {

    int qnt, maior, velo;
    while (scanf("%d", &qnt) != EOF) {

        for (int i = 0; i < qnt; ++i) {
            scanf("%d", &velo);
            
            if ((i == 0) || (velo > maior)) {
                maior = velo;
            } // if sub sub
        } // for sub

        if (maior < 10) {
            printf("1\n");
        } else if (10 <= maior && maior < 20) {
            printf("2\n");
        } else {
            printf("3\n");
        } // condição
    }

    return 0;
} // main
