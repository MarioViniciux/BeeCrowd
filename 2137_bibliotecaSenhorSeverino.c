#include <stdio.h>

int main() {
    int n;
    char codigos[1000][5]; 

    while (scanf("%d", &n) != EOF) {
        for (int i = 0; i < n; i++) {
            scanf("%s", codigos[i]);
        }

        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                int k = 0;
                while (codigos[j][k] == codigos[j + 1][k] && codigos[j][k] != '\0') {
                    k++;
                }
                if (codigos[j][k] > codigos[j + 1][k]) {
                    // troca manual de strings
                    for (int l = 0; l < 5; l++) {
                        char temp = codigos[j][l];
                        codigos[j][l] = codigos[j + 1][l];
                        codigos[j + 1][l] = temp;
                    }
                }
            }
        }

        for (int i = 0; i < n; i++) {
            printf("%s\n", codigos[i]);
        }
    }

    return 0;
}
