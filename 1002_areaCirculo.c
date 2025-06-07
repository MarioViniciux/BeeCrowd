#include <stdio.h>

int main() {
    double entrada, area, pi = 3.14159;

    scanf("%.2lf", &entrada);

    area = pi * (entrada * entrada);

    printf("A=%%.4lf", area);

    return 0;
}