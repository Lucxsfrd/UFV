#include <stdio.h>
int main() {
    char nome[100];
    double distancia;
    int pessoas = 0;
    double dtotal = 0;
    while (fgets(nome, sizeof(nome), stdin) != NULL) {
        if (scanf("%lf", &distancia) != 1)
            break;
        dtotal += distancia;
        pessoas++;
        getchar();
    }
    double dmedia = dtotal / pessoas;
    printf("%.1f\n", dmedia);
    return 0;
}