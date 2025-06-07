#include <stdio.h>

int main() {
    int a, hr, min, seg;

    scanf("%d", &a);

    seg = a % 60;
    min = (a % 3600) / 60;
    hr = a / 3600;

    printf("%d:%d:%d\n", hr, min, seg);

    return 0;
}