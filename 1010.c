/*

    @author: lucrasn;
    @date: 07/08/2024;
    @problem: Cálculo Simples;

*/

#include <stdio.h>

int main() {

    int c1, c2, n1, n2;
    float v1, v2, valor;

    scanf("%d", &c1);
    scanf("%d", &n1);
    scanf("%f", &v1);

    scanf("%d", &c2);
    scanf("%d", &n2);
    scanf("%f", &v2);

    valor = n1 * v1 + n2 * v2;

    printf("VALOR A PAGAR: R$ %.2f\n", valor);

    return 0;
}
