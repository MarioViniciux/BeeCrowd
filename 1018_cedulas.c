#include <stdio.h>

int main() {
    int notas[7] = {100, 50, 20, 10, 5, 2, 1};
    int qntd[7] = {0, 0, 0, 0, 0, 0, 0};
    int valor, aux;

    scanf("%d", &valor);
    aux = valor;

    for (int i = 0; i < 7; i++) {
        qntd[i] = valor / notas[i];
        valor %= notas[i];
    }

    printf("%d\n", aux);
    for(int i = 0; i < 7; i++) {
        printf("%d nota(s) de R$ %d,00\n", qntd[i], notas[i]);
    }

    return 0;
}
