/*

    @author: lucrasn;
    @date: 02/09/2024;
    @problem: Concurso de Contos;

*/

#include <stdio.h>
#include <string.h>

int main () {

	int n_linhas, n_caracteres, n_palavras, len;
	int linhas, paginas, letras;
	char palavra[71];

	while (scanf("%d %d %d", &n_palavras, &n_linhas, &n_caracteres) != EOF) {

		paginas = linhas = 1;
		scanf("%s", palavra);
		letras = strlen(palavra);

		n_palavras--;
		for (int i = 0; i < n_palavras; ++i) {
			scanf("%s", palavra);
			len = strlen(palavra);

			if ((letras + len + 1) <= n_caracteres) {
				letras += len + 1;
			} else {
				++linhas;

				if (linhas > n_linhas) {
					++paginas, linhas = 1;
                } // if sub

				letras = len;
			} // if
		} // for

		printf("%d\n", paginas);

	} // while
    return 0;
} // main
