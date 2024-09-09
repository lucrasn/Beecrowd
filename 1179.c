/*

    @author: lucrasn;
    @date: 08/09/2024;
    @problem: Preenchimento de Vetor IV;

*/

#include <stdio.h>

int main() {
    int x, par[5], impar[5], cont_par = 0, cont_impar = 0;

    for (int i = 0; i < 15; i++) {
        scanf("%d", &x);

        if (x % 2 == 0) {
            par[cont_par] = x;
            cont_par++;

            if (cont_par == 5) {
                cont_par = 0;

                for (int j = 0; j < 5; j++) {
                    printf("par[%d] = %d\n", j, par[j]);

                } // for sub par       
            } // if sub par
        } else {
            impar[cont_impar] = x;
            cont_impar++;

            if (cont_impar == 5) {
                cont_impar = 0;

                for (int j = 0; j < 5; j++) {
                    printf("impar[%d] = %d\n", j, impar[j]);

                } // for sub impar
            } // if sub impar
        } // if impar/par
    } // for 15 termos

    for (int i = 0; i < cont_impar; i++) {
        printf("impar[%d] = %d\n", i, impar[i]);
        
    } // for impar

    for (int i = 0; i < cont_par; i++) {
        printf("par[%d] = %d\n", i, par[i]);

    } // for par

    return 0;
} // main
