/*

    @author: lucrasn;
    @date: 13/08/2024;
    @problem: Fibonacci Fácil;

*/

#include <stdio.h>
 
int main() {
 
    int ntermos, a = 0, b = 1, x;
    scanf("%d", &ntermos);
    
    
    for (int i = 1; i <= ntermos; i++) {
        
        if (i == 1) {
            if (ntermos == 1) {
                printf("%d\n", a);
            } else {
                printf("%d", a);
            } // else sub sub
            
        } else if (i == 2) {
            if (ntermos == 2) {
                printf(" %d\n", b);
            } else {
                printf(" %d", b);
            } // else sub sub
            
        } else {
            x = a + b;
            a = b;
            b = x;
            
            if (i != ntermos) {
             printf(" %d", x);
            } else {
                printf(" %d\n", x);
            } // else sub
        } // else main
    } // for
 
    return 0;
} // main