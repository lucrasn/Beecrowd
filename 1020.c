/*

    @author: lucrasn;
    @date: 13/08/2024;
    @problem: Idade em Dias;

*/

#include <stdio.h>
 
int main() {
 
    int anos = 0, meses = 0, dias = 0;
    
    scanf("%d", &dias);
    
    while (dias >= 365) {
        dias -= 365;
        ++anos;
    }
    
    while (dias >= 30) {
        dias -= 30;
        ++meses;
    }
    
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", anos, meses, dias);
 
    return 0;
}
