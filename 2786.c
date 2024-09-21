/*

    @author: lucrasn;
    @date: 04/08/2024;
    @problem: Piso da Escola;

*/

#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese");

    int largura, comprimento, lajota_1, lajota_2;

    printf("Qual a largura? ");
    scanf("%d", &largura);
    printf("Qual o comprimento? ");
    scanf("%d", &comprimento);

    lajota_1 = largura * comprimento + (largura - 1) * (comprimento - 1);
    lajota_2 = (largura - 1) * 2 + (comprimento - 1) * 2;

    printf("Total de lajotas do tipo 1: %d\nTotal de lajotas do tipo 2: %d", lajota_1, lajota_2);
    return 0;
} // main
