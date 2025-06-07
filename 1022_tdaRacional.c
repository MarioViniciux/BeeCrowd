#include <stdio.h>

int mdc(int a, int b) {
    if (b == 0)
        return a;
    return mdc(b, a % b);
}

int abs_val(int x) {
    return x < 0 ? -x : x;
}

int main() {
    int n;
    scanf("%d", &n);

    while (n--) {
        int n1, d1, n2, d2;
        char op, barra;

        scanf("%d %c %d %c %d %c %d", &n1, &barra, &d1, &op, &n2, &barra, &d2);

        int num, den;

        switch (op) {
            case '+':
                num = n1 * d2 + n2 * d1;
                den = d1 * d2;
                break;
            case '-':
                num = n1 * d2 - n2 * d1;
                den = d1 * d2;
                break;
            case '*':
                num = n1 * n2;
                den = d1 * d2;
                break;
            case '/':
                num = n1 * d2;
                den = n2 * d1;
                break;
        }

        // Simplificação
        int divisor = mdc(abs_val(num), abs_val(den));
        int simp_num = num / divisor;
        int simp_den = den / divisor;

        printf("%d/%d = %d/%d\n", num, den, simp_num, simp_den);
    }

    return 0;
}
