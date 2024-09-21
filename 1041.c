/*

    @author: lucrasn;
    @date: 07/08/2024;
    @problem: Coordenadas de um Ponto;

*/

#include <stdio.h>
 
int main() {
 
    float x, y;
    
    scanf("%f", &x);
    scanf("%f", &y);
    
    if (x == 0 || y == 0) {
        if ((x > 0 || x < 0) && y == 0) {
            printf("Eixo X\n");
        } else if ((y > 0 || y < 0) && x == 0) {
            printf("Eixo Y\n");
        } else {
            printf("Origem\n");
        } // else
    } else if (x > 0 && y > 0) {
        printf("Q1\n");
    } else if (x > 0 && y < 0) {
        printf("Q4\n");
    } else if (x < 0 && y > 0) {
        printf("Q2\n");
    } else {
        printf("Q3\n");
    } // else
 
    return 0;
} // main
