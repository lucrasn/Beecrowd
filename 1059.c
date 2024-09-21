/*

    @author: lucrasn;
    @date: 04/08/2024;
    @problem: Números Pares;

*/

#include <stdio.h>
 
int main() {
 
    for (int i = 1; i <= 100; i++) {
        if ((i % 2) == 0) {
            printf("%d\n", i);
        }
    }
 
    return 0;
} // main
