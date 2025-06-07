#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int busca(int *arr, int n, int x) {
    int inicio = 0, fim = n - 1, resultado = -1;

    while(inicio <= fim) {
        int meio = (inicio + fim) / 2;
        if(arr[meio] == x) {
            resultado = meio;
            fim = meio - 1;
        } else if(arr[meio] < x) {
            inicio = meio + 1;
        } else {
            fim = meio - 1;
        }
    }

    return resultado;
}

int main() {
    int n, q, caso = 1;

    while(scanf("%d %d", &n, &q), n || q) {
        int num[n];

        for(int i = 0; i < n; i++) {
            scanf("%d", &num[i]);
        }

        qsort(num, n, sizeof(int), compare);

        printf("CASE# %d:\n", caso++);

        for(int i = 0; i < q; i++) {
            int consulta;
            scanf("%d", &consulta);

            int pos = busca(num, n, consulta);

            if(pos != -1) {
                printf("%d found at %d\n", consulta, pos + 1);
            } else {
                printf("%d not found\n", consulta);
            }
        }
    }

    return 0;
}