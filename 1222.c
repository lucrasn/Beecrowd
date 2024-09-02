/*

    @author: lucrasn;
    @date: 02/09/2024;
    @problem: Concurso de Contos;

*/

#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    float suport, max_linhas_pagina, max_caracteres_linha;
    int num_palavras, caracteres, n_linhas, n_paginas;
    char texto[500];

    scanf("%d %f %f", &num_palavras, &max_linhas_pagina, &max_caracteres_linha);
    getchar(); // melzinho na chupeta - sempre esqueço como é possivel
    fgets(texto, sizeof(texto), stdin);

    caracteres = strlen(texto) - 1;

    suport = caracteres / max_caracteres_linha;
    n_linhas = (int)ceil(suport);

    suport = n_linhas / max_linhas_pagina;
    n_paginas = (int)ceil(suport);

    printf("%d\n", n_paginas);

    return 0;
} // main
