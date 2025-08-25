#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[21];
} Pessoa;

int main() {
    int n, k;

    scanf("%d %d", &n, &k);   

    Pessoa *pessoa = (Pessoa*) malloc(n * sizeof(Pessoa));

    for(int i = 0; i < n; i++){
        scanf("%s", pessoa[i].nome);
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            Pessoa aux;

            if(strcmp(pessoa[j].nome, pessoa[j + 1].nome) > 0) {
                aux = pessoa[j];
                pessoa[j] = pessoa[j + 1];
                pessoa[j + 1] = aux;
            }
        }
    }

    printf("%s\n", pessoa[k - 1].nome);

    return 0;
}