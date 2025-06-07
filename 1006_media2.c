#include <stdio.h>

int main() {
    double a, b, c, resultado;

    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);

    resultado = ((a * 2) + (b * 3) + (c * 5)) / 10;

    printf("MEDIA = %.1lf\n", resultado);

    return 0;
}