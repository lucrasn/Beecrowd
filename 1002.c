/*

    @author: lucrasn;
    @date: 21/08/2024;
    @problem: �rea do C�rculo;

*/

#include <stdio.h>
#include <math.h>

int main() {
 
    double raio, pi = 3.14159, area;
    
    scanf("%lf", &raio);
    
    area = pi * pow(raio, 2);
    
    printf("A=%.4lf", area);
 
    return 0;
}