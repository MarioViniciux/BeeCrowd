#include <stdio.h>

int main() {
    int par[5], impar[5], x, auxPar = 0, auxImpar = 0;

    for(int i = 0; i < 15; i++) {
        scanf("%d", &x);

        if(x % 2 == 0) {
            par[auxPar] = x;
            auxPar++;
        } else {
            impar[auxImpar] = x;
            auxImpar++;
        }

        if(auxPar == 5) {
            for(int i = 0; i < auxPar; i++) {
                printf("par[%d] = %d\n", i, par[i]);
            }

            auxPar = 0;
        } else if(auxImpar == 5) {
            for(int i = 0; i < auxImpar; i++) {
                printf("impar[%d] = %d\n", i, impar[i]);
            }

            auxImpar = 0;
        }
    }

    for(int i = 0; i < auxImpar; i++) {
        printf("impar[%d] = %d\n", i, impar[i]);
    }
    for(int i = 0; i < auxPar; i++) {
        printf("par[%d] = %d\n", i, par[i]);
    }

    return 0;
}