#include <stdio.h>

int main() {
    int a, b, c, d, prod1, prod2, diferenca;
    
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);

    prod1 = a * b;
    prod2 = c * d;
    diferenca = prod1 - prod2;

    printf("DIFERENCA = %d\n", diferenca);

    return 0;
}