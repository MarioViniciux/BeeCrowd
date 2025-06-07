#include <stdio.h>

int main() {
    int cod1, num1, cod2, num2;
    float price1, price2, resultado;

    scanf("%d %d %f", &cod1, &num1, &price1);
    scanf("%d %d %f", &cod2, &num2, &price2);

    resultado = (num1 * price1) + (num2 * price2);

    printf("VALOR A PAGAR = R$ %.2f\n", resultado);

    return 0;
}