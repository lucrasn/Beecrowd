/*

    @author: lucrasn;
    @date: 08/09/2024;
    @problem: Fibonacci em Vetor;

*/

/// primeiros elementos da série fibonacci são 0 e 1 e cada próximo termo é a
/// soma dos 2 anteriores a ele

#include <stdio.h>

int main() {
    int n_testes, n_termo;
    scanf("%d", &n_testes);

    for (int i = 0; i < n_testes; i++) {
        scanf("%d", &n_termo);

        unsigned long long fib[4] = {0, 0, 0, 0};

        if (n_termo == 1) {
            fib[2] = 1; // {0, 0, 1, 0}
        } else {
            fib[1] = 1; // {0, 1, 0, 0}

            // o fib[3] serve somente de suporte e fib[2] será sempre o proximo termo
            for (int j = 2; j <= n_termo; j++) { // {0, 1, 0, 0} / {1, 1, 1, 1}
                fib[2] = fib[1] + fib[0]; //        {0, 1, 1, 0} / {1, 1, 2, 1}
                fib[3] = fib[1]; //                 {0, 1, 1, 1} / {1, 1, 2, 1}
                fib[1] = fib[2]; //                 {0, 1, 1, 1} / {1, 2, 2, 1}
                fib[0] = fib[3]; //                 {1, 1, 1, 1} / {1, 2, 2, 1}
            } // for sub
        } // if

        printf("Fib(%d) = %llu\n", n_termo, fib[2]);
        
    } // for
    return 0;
} // main
