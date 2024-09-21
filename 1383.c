/*

    @author: lucrasn;
    @date: 20/09/2024;
    @problem: Sudoku;

*/

#include <stdio.h>

#define SIM 1
#define NAO 0

int main() {
    int sudoku[9][9], n, verificador;
    int correto[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    scanf("%d", &n);

    for (int x = 0; x < n; x++) {
        // ler a matriz sudoku
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                scanf("%d", &sudoku[i][j]);
            } // for sub sub coluna da matriz
        } // for sub linha da matriz

        // analise de linha e coluna
        for (int i = 0; i < 9; i++) {
            int linha[9] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
            int coluna[9] = {0, 0, 0, 0, 0, 0, 0, 0, 0};

            // verificador
            for (int j = 0; j < 9; j++) {
                switch (sudoku[i][j]) {
                case 1:
                    linha[0] = 1;
                    break;
                case 2:
                    linha[1] = 2;
                    break;
                case 3:
                    linha[2] = 3;
                    break;
                case 4:
                    linha[3] = 4;
                    break;
                case 5:
                    linha[4] = 5;
                    break;
                case 6:
                    linha[5] = 6;
                    break;
                case 7:
                    linha[6] = 7;
                    break;
                case 8:
                    linha[7] = 8;
                    break;
                case 9:
                    linha[8] = 9;
                    break;
                default:
                    break;
                } // stich case para as linhas
                switch (sudoku[j][i]) {
                case 1:
                    coluna[0] = 1;
                    break;
                case 2:
                    coluna[1] = 2;
                    break;
                case 3:
                    coluna[2] = 3;
                    break;
                case 4:
                    coluna[3] = 4;
                    break;
                case 5:
                    coluna[4] = 5;
                    break;
                case 6:
                    coluna[5] = 6;
                    break;
                case 7:
                    coluna[6] = 7;
                    break;
                case 8:
                    coluna[7] = 8;
                    break;
                case 9:
                    coluna[8] = 9;
                    break;
                default:
                    break;
                } // stich case para as colunas
            }

            // confimador
            for (int k = 0; k < 9; k++) {
                if (linha[k] == correto[k] && coluna[k] == correto[k]) {
                    verificador = SIM;
                } else {
                    verificador = NAO;
                    break;
                } // if verificador
            }

            if (!verificador) {
                break;
            } // if so preciso de um caso
        } // for analise

        // analise blocos 3x3
        if (verificador) {
            for (int LB = 0; LB < 9; LB += 3) {
                for (int CB = 0; CB < 9; CB += 3) {
                    int bloco[9] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
                    
                    // verificador
                    for (int i = LB; i < LB + 3; i++) {
                        for (int j = CB; j < CB + 3; j++) {
                            switch (sudoku[i][j]) {
                            case 1:
                                bloco[0] = 1;
                                break;
                            case 2:
                                bloco[1] = 2;
                                break;
                            case 3:
                                bloco[2] = 3;
                                break;
                            case 4:
                                bloco[3] = 4;
                                break;
                            case 5:
                                bloco[4] = 5;
                                break;
                            case 6:
                                bloco[5] = 6;
                                break;
                            case 7:
                                bloco[6] = 7;
                                break;
                            case 8:
                                bloco[7] = 8;
                                break;
                            case 9:
                                bloco[8] = 9;
                                break;
                            default:
                                break;
                            }
                        } // for coluna bloco soduko
                    } // for linha bloco soduko

                    // confirmador
                    for (int k = 0; k < 9; k++) {
                        if (bloco[k] == correto[k]) {
                            verificador = SIM;
                        } else {
                            verificador = NAO;
                            break;
                        } // if verificador
                    }
                } // for coluna sudoku

                if (!verificador) {
                    break;
                } // if so preciso de um caso
            } // for linha sudoku
        } // if main

        // print da resposta
        printf("Instancia %d\n", x + 1);
        if (verificador) {
            printf("SIM\n\n");
        } else {
            printf("NAO\n\n");
        } // if resposta
    } // for número de sudokus
    return 0;
} // main
