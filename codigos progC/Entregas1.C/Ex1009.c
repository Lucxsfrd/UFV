#include <stdio.h>
int main(){
    char nome[50]; double salario; double vendas; double total;
    scanf("%s %lf %lf", &nome, &salario , &vendas);
    total = salario + (0.15*vendas);
    printf("TOTAL = R$ %.2lf\n", total );
    return 0;
}