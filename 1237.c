/*

    @author: lucrasn;
    @date: 02/09/2024;
    @problem: Comparação de Substring;

*/

/// obs para mim mesmo: getchar() so se usa se entre um scanf() e um fgets(), respectivamente.

#include <stdio.h>
#include <string.h>

int maior_substring_comum(char *str1, char *str2) {
    int len1 = strlen(str1) - 1;
    int len2 = strlen(str2) - 1;
    int max_sub = 0;

    for (int i = 0; i < len1; i++) {
        for (int j = 0; j < len2; j++) {
            int k = 0;

            while (i + k < len1 && j + k < len2 && str1[i + k] == str2[j + k]) {
                ++k;

            } // while sub sub

            if (k > max_sub) {
                max_sub = k;

            } // if sub sub
        } // for sub
    } // for

    return max_sub;
} // função

int main() {
    char txt1[50], txt2[50];

    fgets(txt1, sizeof(txt1), stdin);
    fgets(txt2, sizeof(txt2), stdin);

    int result = maior_substring_comum(txt1, txt2);
    printf("%d", result);

    return 0;
} // main
