#include <stdio.h>

int main() {
    int a, anos = 0, meses = 0, dias = 0;

    scanf("%d", &a);

    do {
        if(a > 365) {
            a -= 365;
            anos++;
        } 

        if(a > 30) {
            a -= 30;
            meses++;
        } else {
            dias = a;
            a -= dias;
        }

    } while (a != 0);

    printf("%d ano(s)\n", anos);
    printf("%d mes(es)\n", meses);
    printf("%d dia(s)\n", dias);

    return 0;
}