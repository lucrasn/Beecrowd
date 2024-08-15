/*

    @author: lucrasn;
    @date: 13/08/2024;
    @problem: Média 2;

*/

#include <stdio.h>
 
int main() {
 
    double nota1, nota2, nota3, media;
    
    scanf("%le", &nota1);
    scanf("%le", &nota2);
    scanf("%le", &nota3);
    
    media = (nota1 * 2 + nota2 * 3 + nota3 * 5) / 10;
    
    printf("MEDIA = %.1f\n", media);
 
    return 0;
}
