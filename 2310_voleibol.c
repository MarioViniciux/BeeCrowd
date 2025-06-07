#include <stdio.h>

int main() {
    int n, s, b, a, s1, b1, a1;
    double totS = 0, totB = 0, totA = 0, totS1 = 0, totB1 = 0, totA1 = 0;
    char p[10];

    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf(" %[^\n]", p);
        scanf("%d %d %d", &s, &b, &a);
        scanf("%d %d %d", &s1, &b1, &a1);

        totS += s;
        totB += b;
        totA += a;
        totS1 += s1;
        totB1 += b1;
        totA1 += a1;
    }

    printf("Pontos de Saque: %.2lf %%.\n", (totS1 / totS) * 100);
    printf("Pontos de Bloqueios: %.2lf %%.\n", (totB1 / totB) * 100);
    printf("Pontos de Ataque: %.2lf %%.\n", (totA1 / totA) * 100);

    return 0;
}