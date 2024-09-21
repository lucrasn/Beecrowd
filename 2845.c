/*

    @author: lucrasn;
    @date: 09/08/2024;
    @problem: Festa no Polo Norte;

*/

#include <stdio.h>

int main() {

    int num_conv, conv, suport;

    scanf("%d", &num_conv);
    scanf("%d", &conv);

    for (int i = 1; i < num_conv; i++) {
        scanf("%d", &suport);

        if (suport > conv) {
            conv = suport;
        }
    }

    printf("%d\n", ++conv);

    return 0;
} // main
