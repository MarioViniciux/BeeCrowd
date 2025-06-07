#include <stdio.h>

int main() {
    unsigned long long fibo[70]; 
    unsigned int casos, x;

    fibo[0] = 0;
    fibo[1] = 1;

    for(int i = 2; i < 70; i++) {
        fibo[i] = fibo[i - 2] + fibo[i - 1];
    }

    scanf("%u", &casos);

    for(int i = 0; i < casos; i++) {
        scanf("%u", &x);
        
        printf("Fib(%u) = %llu\n", x,fibo[x]);
    }

    return 0;
}