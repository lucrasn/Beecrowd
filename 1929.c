/*

    @author: lucrasn;
    @date: 22/08/2024;
    @problem: Triângulo;

*/

#include <stdio.h>

int main() {

    int lados[4];

    for (int i = 0; i <= 3; ++i) {
        scanf("%d", &lados[i]);
    } // for

    for (int i = 0; i <= 3; ++i) {
        for (int j = i + 1; j <= 3; ++j) {
            if (lados[j] < lados[i]) {
                int suport = lados[i];
                lados[i] = lados[j];
                lados[j] = suport;
            } // if
        } // for sub
    } // for

    if (lados[0] + lados[1] > lados[2] || lados[1] + lados[2] > lados[3]) {
        printf("S\n");
    } else {
        printf("N\n");
    }

    return 0;
} // main
