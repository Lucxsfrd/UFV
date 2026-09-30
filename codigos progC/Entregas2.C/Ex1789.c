#include <stdio.h>
int main() {
    int L;
    while (scanf("%d", &L) != EOF) {
        int velocidade;
        int maior = 0;
        for (int i = 0; i < L; i++) {
            scanf("%d", &velocidade);
            if (velocidade > maior)
                maior = velocidade;
        }
        if (maior < 10)
            printf("1\n");
        else if (maior < 20)
            printf("2\n");
        else
            printf("3\n");
    }
    return 0;
}