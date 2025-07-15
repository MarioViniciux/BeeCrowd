#include <stdio.h>

void juntar_crescente(int arr[], int inicio, int meio, int fim) {
    int i, j, k;
    int n1 = meio - inicio + 1;
    int n2 = fim - meio;

    int l[n1], r[n2];

    for (i = 0; i < n1; i++) {
        l[i] = arr[inicio + i];
    } 

    for (j = 0; j < n2;  j++) {
        r[j] = arr[meio + 1 + j];
    }

    i = 0;
    j = 0;
    k = inicio;

    while (i < n1 && j < n2) {
        if (l[i] <= r[j]) {
            arr[k] = l[i];
            i++;
        } else {
            arr[k] = r[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = l[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = r[j];
        j++;
        k++;
    }
}

void juntar_descrescente(int arr[], int inicio, int meio, int fim) {
    int i, j, k;
    int n1 = meio - inicio + 1;
    int n2 = fim - meio;
    int l[n1], r[n2];

    for(i = 0; i < n1; i++) {
        l[i] = arr[inicio + i];
    }

    for(j = 0; j < n2; j++) {
        r[j] = arr[meio + 1 + j];
    }

    i = 0;
    j = 0;
    k = inicio;

    while (i < n1 && j < n2) {
        if (l[i] >= r[j]) {
            arr[k] = l[i];
            i++;
        } else {
            arr[k] = r[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = l[i];
        i++;
        k++;
    }

    while(j < n2) {
        arr[k] = r[j];
        j++;
        k++;
    }
}

void sort(int arr[], int inicio, int fim, int crescente) {
    if (inicio < fim) {
        int meio = inicio + (fim - inicio) / 2;

        sort(arr, inicio, meio, crescente);
        sort(arr, meio + 1, fim, crescente);

        if (crescente) {
            juntar_crescente(arr, inicio, meio, fim);
        } else {
            juntar_descrescente(arr, inicio, meio, fim);
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int pares[100005];
    int impares[100005];
    int cont_par = 0;
    int cont_impar = 0;

    for (int i = 0; i < n; i++) {
        int valor;
        scanf("%d", &valor);

        if (valor % 2 == 0) {
            pares[cont_par++] = valor;
        } else {
            impares[cont_impar++] = valor;
        }
    }

    if (cont_par > 0) {
        sort(pares, 0, cont_par - 1, 1);
    }

    if (cont_impar > 0) {
        sort(impares, 0, cont_impar - 1, 0);
    }

    for(int i = 0; i < cont_par; i++) {
        printf("%d\n", pares[i]);
    }

    for(int i = 0; i < cont_impar; i++) {
        printf("%d\n", impares[i]);
    }

    return 0;
}