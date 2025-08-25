#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    char signal;
    char nome[21];
} Crianca;

int main() {
    int n, qntd = 0;

    scanf("%d", &n);

    Crianca *lista = (Crianca *) malloc(n * sizeof(Crianca));

    for(int i = 0; i < n; i++) {
        scanf(" %c %s", &lista[i].signal, lista[i].nome);
        getchar();
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            Crianca aux;

            if(strcmp(lista[j].nome, lista[j + 1].nome) > 0) { 
                aux = lista[j];
                lista[j] = lista[j + 1];
                lista[j + 1] = aux;
            }
        }
    }

    for(int i = 0; i < n; i++) {
        if(lista[i].signal == '-') {
            qntd++;
        }
    }

    for(int i = 0; i < n; i++) {
        printf("%s\n", lista[i].nome);
    }
    printf("Se comportaram: %d | Nao se comportaram: %d\n", (n - qntd), qntd);

    return 0;
}