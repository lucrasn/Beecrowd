/*

    @author: lucrasn;
    @date: 06/09/2024;
    @problem: Cédulas;

*/

#include <stdio.h>

int main() {
    int dinheiro;
    int cem = 0, cinquenta = 0, vinte = 0, dez = 0, cinco = 0, dois = 0, um = 0;
    scanf("%d", &dinheiro);
    
    printf("%d\n", dinheiro);

    if (dinheiro >= 100) {
        cem = dinheiro / 100;
        dinheiro %= 100;
    } // if 100
    if (dinheiro >= 50) {
        cinquenta = dinheiro / 50;
        dinheiro %= 50;
    } // if 50
    if (dinheiro >= 20) {
        vinte = dinheiro / 20;
        dinheiro %= 20;
    } // if 20
    if (dinheiro >= 10) {
        dez = dinheiro / 10;
        dinheiro %= 10;
    } // if 10
    if (dinheiro >= 5) {
        cinco = dinheiro / 5;
        dinheiro %= 5;
    } // if 5
    if (dinheiro >= 2) {
        dois = dinheiro / 2;
        dinheiro %= 2;
    } // if 2
    if (dinheiro >= 1) {
        um = dinheiro / 1;
    } // if 1

    printf("%d nota(s) de R$ 100,00\n", cem);
    printf("%d nota(s) de R$ 50,00\n", cinquenta);
    printf("%d nota(s) de R$ 20,00\n", vinte);
    printf("%d nota(s) de R$ 10,00\n", dez);
    printf("%d nota(s) de R$ 5,00\n", cinco);
    printf("%d nota(s) de R$ 2,00\n", dois);
    printf("%d nota(s) de R$ 1,00\n", um);

    return 0;
} // main
