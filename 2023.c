/*

    @author: lucrasn;
    @date: 21/09/2024;
    @problem: A Última Criança Boa;

*/

#include <stdio.h>
#include <string.h>

int main() {
    char nome[81];
    char nomeMaior[81] = "";

    while (scanf(" %[^\n]", nome) != EOF) {
        int comparacao = strcasecmp(nome, nomeMaior); // compara sem case sensitivy

        if (comparacao > 0) {
            strcpy(nomeMaior, nome);
        } // if
    } // while

    printf("%s\n", nomeMaior);

    return 0;
} // main
