#include <stdio.h>
#include <string.h>

long long fibo[40];
long long calls[40];

void precalc_fibonacci () {
    fibo[0] = 0;
    calls[0] = 1; 

    fibo[1] = 1;
    calls[1] = 1; 

    for (int i = 2; i <= 39; i++) {
        fibo[i] = fibo[i-1] + fibo[i-2];
        calls[i] = 1 + calls[i-1] + calls[i-2];
    }
}

int main() {
    int n, v;

    scanf("%d", &n);

    precalc_fibonacci();

    while (n--) {
        scanf("%d", &v);
        printf("fib(%d) = %lld calls = %lld\n", v, calls[v] - 1, fibo[v]);
    }

    return 0;
}