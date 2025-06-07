#include <stdio.h>

int main() {
    int km;
    double combustivel, total;

    scanf("%d", &km);
    scanf("%lf", &combustivel);

    total = km / combustivel;

    printf("%.3lf km/l\n", total);

    return 0;
}