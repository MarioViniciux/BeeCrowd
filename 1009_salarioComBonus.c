#include <stdio.h>

int main() {
    char nome[20];
    double salario, vendas;

    scanf("%s", &nome);
    scanf("%lf", &salario);
    scanf("%lf", &vendas);

    printf("TOTAL = R$ %.2lf\n", salario += (vendas * 0.15));

    return 0;
}