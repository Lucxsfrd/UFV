#include <stdio.h>
int main() {
    double salario, imposto = 0;
    scanf("%lf", &salario);
    if (salario > 4500.00) {
        imposto += (salario - 4500.00) * 0.28;
        salario = 4500.00;
    }
    if (salario > 3000.00) {
        imposto += (salario - 3000.00) * 0.18;
        salario = 3000.00;
    }
    if (salario > 2000.00) {
        imposto += (salario - 2000.00) * 0.08;
    }
    if (imposto == 0)
        printf("Isento\n");
    else
        printf("R$ %.2lf\n", imposto);
    return 0;
}