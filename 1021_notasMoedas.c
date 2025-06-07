#include <stdio.h>

int main() {
    int notas[6] = {10000, 5000, 2000, 1000, 500, 200};
    int moedas[6] = {100, 50, 25, 10, 5, 1};
    int qntdNotas[6] = {0}, qntdMoedas[6] = {0};
    double valor;
    scanf("%lf", &valor);

    int centavos = (int)(valor * 100 + 0.5);

    for (int i = 0; i < 6; i++) {
        qntdNotas[i] = centavos / notas[i];
        centavos %= notas[i];
    }

    for (int i = 0; i < 6; i++) {
        qntdMoedas[i] = centavos / moedas[i];
        centavos %= moedas[i];
    }

    printf("NOTAS:\n");
    for (int i = 0; i < 6; i++) {
        printf("%d nota(s) de R$ %.2f\n", qntdNotas[i], notas[i] / 100.0);
    }

    printf("MOEDAS:\n");
    for (int i = 0; i < 6; i++) {
        printf("%d moeda(s) de R$ %.2f\n", qntdMoedas[i], moedas[i] / 100.0);
    }

    return 0;
}
