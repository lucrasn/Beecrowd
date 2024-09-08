/*

    @author: lucrasn;
    @date: 08/09/2024;
    @problem: Preenchimento de Vetor III;

*/

#include <stdio.h>

int main() {
    double x, N[100];
    scanf("%lf", &x);

    N[0] = x;

    for (int i = 1; i < 100; i++) {
        N[i] = N[i - 1] / 2;

    } // for 1

    for (int i = 0; i < 100; i++) {
        printf("N[%d] = %.4lf\n", i, N[i]);

    } // for 2
    return 0;
} // main
