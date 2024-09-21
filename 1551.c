/*

    @author: lucrasn;
    @date: 21/09/2024;
    @problem: Comparação de Substring;

*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        char frase[1000];
        scanf(" %[^\n]", frase);

        int total_letras = 0;
        int caract[26] = {0};
        int lenFrase = strlen(frase);

        // Percorre a frase
        for (int j = 0; j < lenFrase; j++) {
            if (isalpha(frase[j])) {
                char c = tolower(frase[j]); // tudo minúsculo
                int index = c - 'a'; // índice no ASCII

                // Verifica se a letra já foi contada
                if (caract[index] == 0) {
                    caract[index] = 1;
                    total_letras++;
                } // if sub
            } // if
        } // for sub

        // Verifica o número de letras únicas e imprime o resultado
        if (total_letras == 26) {
            printf("frase completa\n");
        } else if (total_letras >= 13 && total_letras <= 25) {
            printf("frase quase completa\n");
        } else {
            printf("frase mal elaborada\n");
        } // if
    } // for

    return 0;
} // main