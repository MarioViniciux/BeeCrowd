#include <stdio.h>

int main() {
    double a, b, resultado;

    scanf("%lf", &a);
    scanf("%lf", &b);

    resultado = ((a * 3.5) + (b * 7.5)) / 11;
    
    printf("MEDIA = %.5lf\n", resultado);

    return 0;
}