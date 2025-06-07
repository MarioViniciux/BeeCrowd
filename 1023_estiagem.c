#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Consumo {
    int consumo;  // consumo médio por pessoa (y / x)
    int pessoas;  // total de pessoas com esse consumo
};

// Função de comparação para ordenar pelo consumo crescente
int cmp(const void *a, const void *b) {
    struct Consumo *ca = (struct Consumo *)a;
    struct Consumo *cb = (struct Consumo *)b;
    return ca->consumo - cb->consumo;
}

int main() {
    int n, cidade = 1;

    while (scanf("%d", &n) && n != 0) {
        int total_pessoas = 0, total_consumo = 0;
        struct Consumo dados[200] = {0};
        int count = 0;

        for (int i = 0; i < n; i++) {
            int x, y;
            scanf("%d %d", &x, &y);

            int media = y / x;
            int found = 0;

            // Verifica se já existe esse consumo médio
            for (int j = 0; j < count; j++) {
                if (dados[j].consumo == media) {
                    dados[j].pessoas += x;
                    found = 1;
                    break;
                }
            }

            if (!found) {
                dados[count].consumo = media;
                dados[count].pessoas = x;
                count++;
            }

            total_pessoas += x;
            total_consumo += y;
        }

        // Ordenar os dados pelo consumo crescente
        qsort(dados, count, sizeof(struct Consumo), cmp);

        // Imprimir dados da cidade
        printf("Cidade# %d:\n", cidade++);
        for (int i = 0; i < count; i++) {
            printf("%d-%d", dados[i].pessoas, dados[i].consumo);
            if (i < count - 1) printf(" ");
        }
        printf("\n");

        // Imprimir consumo médio truncado com 2 casas decimais
        double media_final = (double)total_consumo / total_pessoas;
        printf("Consumo medio: %.2lf m3.\n", floor(media_final * 100) / 100);
    }

    return 0;
}
