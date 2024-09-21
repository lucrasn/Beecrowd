/*

    @author: lucrasn;
    @date: 15/08/2024;
    @problem: Vampiros;

*/

#include <stdio.h>
#include <math.h>

double probabilidade(int n1, int n2, int at) {
    if (at == 3) {
        return (double)n1 / (double)(n1 + n2);
    } else {
        double p;
        p = (1 - (at / 6.0)) / (at / 6.0); // razão de chances

        return (1.0 - pow(p, n1)) / (1.0 - pow(p, n1 + n2)); // probabilidade acumulada
    }
}

int main() {
    double prob;
    int ev1, ev2, at, d, tmp;

    while (scanf("%d %d %d %d", &ev1, &ev2, &at, &d), ev1 && ev2 && at && d) {
        tmp = ev1;
        ev1 = 0;

        while (tmp > 0)
            tmp -= d, ++ev1;

        tmp = ev2;
        ev2 = 0;

        while (tmp > 0)
            tmp -= d, ++ev2;

        prob = probabilidade(ev1, ev2, at);
        printf("%.1f\n", prob * 100);
    }
    return 0;
} // main
