/*

    @author: lucrasn;
    @date: 08/09/2024;
    @problem: Preenchimento de Vetor II;

*/

#include <stdio.h>

int main() {
    int N[1000], T, cont = 0;
    scanf("%d", &T);

    for (int i = 0; i < 1000; i++) {
        N[i] = cont;
        
        if (cont < (T - 1)) {
            cont++;
        } else {
            cont = 0;
        } // if incremento e reset

        printf("N[%d] = %d\n", i, N[i]);
    } // for
    return 0;
} // main
