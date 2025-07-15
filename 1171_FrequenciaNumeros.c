#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, v, aux, c = 0, d = 0, troca = 1;

    scanf("%d", &n);

    int vetor[n];

    // atribuindo valores ao vetor
    for(int i = 0; i < n; i++) {
        scanf("%d", &v);
        vetor[i] = v;
    }

    // ordena o vetor em ordem crescente
    while(troca) {
        troca = 0;
        int fim = n - 1;
        int inicio = 0;

        for(int i = inicio; i < fim; i++) {
            if(vetor[i] > vetor[i + 1]) {
                aux = vetor[i + 1];
                vetor[i + 1] = vetor[i];
                vetor[i] = aux;
                troca = 1;
            }
        }
        fim--;

        for(int i = fim; i > inicio; i--) {
            if(vetor[i] < vetor[i - 1]) {
                aux = vetor[i - 1];
                vetor[i - 1] = vetor[i];
                vetor[i] = aux;
                troca = 1;
            }
        }
        inicio++;
    }

    // contagem de caracteres diferentes
    for(int i = 0; i < n; i++) {
        if(vetor[i] != vetor[i + 1]) {
            c++;
        }
    }

    // criação do vetor dinâmico
    int *ptrarray = (int*) malloc(c * sizeof(int));
    int x = 0;
    
    // inserindo valores não repetidos no vetor dinâmico
    for(int i = 0; i < n; i++) {
        if(vetor[i] != vetor[i + 1]) {
            ptrarray[x] = vetor[i];
            x++;
        }
    }

    x = 0;
    int rep[c];

    // definindo quantidade de vezes que o número se repete
    for(int i = 0; i < c; i++) {
        for(int j = 0; j < n; j++) {
            if(vetor[j] == ptrarray[i]) {
                x++;
            }
        }
        rep[d] = x; 
        d++;
        x = 0;
    }

    for(int i = 0; i < c; i++) {
        printf("%d aparece %d vez(es)\n", ptrarray[i], rep[i]);
    }

    return 0; 
}