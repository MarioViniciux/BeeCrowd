#include <stdio.h>
#include <string.h>

int main() {
    int n;
    char linha[1001];

    scanf("%d\n", &n); // Lê o número de casos

    for (int i = 0; i < n; i++) {
        fgets(linha, 1001, stdin); // Lê a linha
        int len = strlen(linha);

        if (linha[len - 1] == '\n') linha[--len] = '\0'; // Remove '\n' se necessário

        // Primeira passada: avança 3 no alfabeto se for letra
        for (int j = 0; j < len; j++) {
            if ((linha[j] >= 'A' && linha[j] <= 'Z') || (linha[j] >= 'a' && linha[j] <= 'z')) {
                linha[j] += 3;
            }
        }

        // Segunda passada: inverte a string
        for (int j = 0; j < len / 2; j++) {
            char temp = linha[j];
            linha[j] = linha[len - 1 - j];
            linha[len - 1 - j] = temp;
        }

        // Terceira passada: diminui 1 na segunda metade
        for (int j = len / 2; j < len; j++) {
            linha[j] -= 1;
        }

        printf("%s\n", linha);
    }

    return 0;
}
