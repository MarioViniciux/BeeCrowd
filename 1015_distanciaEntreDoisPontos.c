#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, d, resultado;

    scanf("%lf %lf", &a, &b);
    scanf("%lf %lf", &c, &d);

    resultado = sqrt(((c - a) * (c - a)) + ((d - b) * (d - b)));

    printf("%.4lf\n", resultado);

    return 0;
}