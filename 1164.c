/*

    @author: lucrasn;
    @date: 09/08/2024;
    @problem: Número Perfeito;

*/

#include <stdio.h>

int main() {

    int n, num;

    scanf("%d", &n);

    for (int i = 1; i <= n; ++i) {
        scanf("%d", &num);

        int soma = 0;

        for (int k = 1; k < num; ++k) {
            if (num % k == 0) {
                soma += k;
            }
        }

        if (soma == num) {
            printf("%d eh perfeito\n", num);
        } else {
            printf("%d nao eh perfeito\n", num);
        }
    }

    return 0;
} // main
