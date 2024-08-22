/*

    @author: lucrasn;
    @date: 22/08/2024;
    @problem: O Enigma do Pronalândia;

*/

#include <stdio.h>
#include <string.h>

int main() {

    unsigned long long num;
    char num_str[21];

    scanf("%llu", &num);

    snprintf(num_str, sizeof(num_str), "%llu", num); // convertendo de llu -> str

    int lenNum_str = strlen(num_str);

    for (int i = 0; i < lenNum_str / 2; ++i) {
        char suport = num_str[i];
        num_str[i] = num_str[lenNum_str - 1 - i];
        num_str[lenNum_str - 1 - i] = suport;
    } // for

    printf("%s\n", num_str);

    return 0;
} // main
