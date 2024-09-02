/*

    @author: lucrasn;
    @date: 02/09/2024;
    @problem: Criptografia;

*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char frase[100];

    int num;
    scanf("%d", &num);

    getchar(); // cada uma viu, paia;

    for (int i = 0; i < num; i++) {
        fgets(frase, sizeof(frase), stdin);

        int len = strlen(frase) - 1;
        int len_met = len / 2;

        // primeira criptografia
        for (int j = 0; j < len; j++) {
            if (isalpha(frase[j])) {
                frase[j] += 3;

            } // if sub sub
        } // for sub

        // segunda criptografia
        char suport;

        for (int j = 0; j < len_met; j++) {
            suport = frase[j];
            frase[j] = frase[len - j - 1];
            frase[len - j - 1] = suport;

        } // for sub

        // teceira criptografia
        for (int j = len_met; j < len; j++) {
            if (frase[j] != ' ') {
                frase[j] -= 1;

            } // if sub sub
        } // for sub

        printf("%s", frase); // não preciso colocar o \n porque a variável frase ja tem;

    } // for

    return 0;
} // main
