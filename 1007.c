/*

    @author: lucrasn;
    @date: 06/08/2024;
    @problem: Diferença;

*/

#include <stdio.h>
 
int main() {
 
    int a, b, c, d, dif;
    
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    
    dif = a * b - c * d;
    
    printf("DIFERENCA = %d\n", dif);
    
    return 0;
}
