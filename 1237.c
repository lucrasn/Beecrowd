/*

    @author: lucrasn;
    @date: 21/09/2024;
    @problem: Comparação de Substring;

*/

/// obs para mim mesmo: getchar() so se usa se entre um scanf() e um fgets(), respectivamente.
/// desisti de usar fgets()

#include <stdio.h>
#include <string.h>

int maior(int a, int b) {
    return a > b ? a : b;
}

int main() {
    char txt1[51], txt2[51];

    while (scanf(" %[^\n] %[^\n]", txt1, txt2) != EOF) {
        int tam1 = strlen(txt1), tam2 = strlen(txt2), tamMax = 0;

        for (int i = 0; i < tam1; i++) {
            for (int j = 0; j < tam2; j++) {
                int seq = 0;

                while (i + seq < tam1 && j + seq < tam2 && txt1[i + seq] == txt2[j + seq]) {
                    seq++;
                } // while sub contador de sub strings

                tamMax = maior(tamMax, seq); // pegando sempre a maior sequencia possivel
            } // for txt2
        } // for txt1

        printf("%d\n", tamMax);

    } // while

    return 0;
} // main
