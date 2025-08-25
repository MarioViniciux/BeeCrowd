#include <stdio.h>

int mdc(int a, int b) {
    int resto;

    while (b != 0) {
        resto = a % b;
        a = b;
        b = resto;
    }

    return a;
}

int main() {
    int n, f1, f2;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d %d", &f1, &f2);
        printf("%d\n", mdc(f1, f2));
    }

    return 0;
}