#include <stdio.h>

int main() {
    int horas, numero;
    float valorHR, salary;

    scanf("%d", &numero);
    scanf("%d", &horas);
    scanf("%f", &valorHR);
    
    salary = horas * valorHR;

    printf("NUMBER = %d\n", numero);
    printf("SALARY = U$ %.2f\n", salary);

    return 0;
}