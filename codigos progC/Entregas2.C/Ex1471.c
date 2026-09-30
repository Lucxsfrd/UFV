#include <stdio.h>
int main() {
    int N; 
    int R;
    while (scanf("%d %d", &N, &R) != EOF) {
        int vetor[R];
        int voltou[N+1];
        for (int i=0;i<=N;i++) {
            voltou[i] = 0;
        }
        for (int i = 0; i < R; i++) {
            scanf("%d", &vetor[i]);
            voltou[vetor[i]] = 1;
        }
        if (R == N) {
            printf("*");
        } else {
            for (int i = 1; i <= N; i++) {
                if (voltou[i] == 0) {
                    printf("%d ", i);
                }
            }
        }
        printf("\n");
    }
    return 0;
}
