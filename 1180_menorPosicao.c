#include <stdio.h>

int main() {
    int N, i;
    int menor, pos;

    scanf("%d", &N);

    int valores[N];

    for (i = 0; i < N; i++) {
        scanf("%d", &valores[i]);

        if (i == 0 || valores[i] < menor) {
            menor = valores[i];
            pos = i;
        }
    }

    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", pos);

    return 0;
}
