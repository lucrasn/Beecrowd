/*

    @author: lucrasn;
    @date: 09/08/2024;
    @problem: Fibonot;

*/

#include <stdio.h>

int main() {
    int a = 1, b = 1, x;                   // variáveis da sequência Fibonacci ( a + b = x ) - a, b, x...
    int flag_main = 1, flag_sub;           // variáveis de controle dos while - true
    int contador = 0, Kesimo_termo, termo; // variáveis da sequência de Fibonot
    int c, d, bb;                          // variável de cálculo

    scanf("%d", &Kesimo_termo);

    while (flag_main) {
        flag_sub = 1;
        x = a + b;
        bb = b;

        while (flag_sub && (x - b > 1)) {
            ++contador;
            c = bb + 1;
            d = c + 1;

            if ((d == x) || (contador == Kesimo_termo)) {
                termo = c;
                flag_sub = 0;
            } // if 1

            bb = c;
        } // while sub

        a = b;
        b = x;

        if (contador == Kesimo_termo) {
            flag_main = 0;
        } // if 2
    } //  while main

    printf("%d\n", termo);

    return 0;
} //  main
