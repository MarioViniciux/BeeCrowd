#include <stdio.h>

int main() {
    double a, b;

    scanf("%lf", &a);
    scanf("%lf", &b);

    printf("%.3lf\n", (a * b) / 12);

    return 0;
}