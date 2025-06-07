#include <stdio.h>

int main() {
    int n[1000], t;

    scanf("%d", &t);

    for(int i = 0; i < 1000; i++) {
        n[i] = i % t;
    }

    for(int i = 0; i < 1000; i++) {
        printf("N[%d] = %d\n", i, n[i]);
    }

    return 0;
}