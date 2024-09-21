/*

    @author: lucrasn;
    @date: 13/08/2024;
    @problem: Média 1;

*/

#include <stdio.h>
 
int main() {
 
    float nota1, nota2, media;
    
    scanf("%f", &nota1);
    scanf("%f", &nota2);
    
    media = (nota1 * 3.5 + nota2 * 7.5) / 11;
    
    printf("MEDIA = %.5f\n", media);
 
    return 0;
}