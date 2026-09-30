#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);
    int matriz[N][M];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
    int ultimoPivo = -1;
    int encontrouLinhaZero = 0;
    int escada = 1;
    for (int i = 0; i < N && escada; i++) {
        int pivo = -1;
        for (int j = 0; j < M; j++) {
            if (matriz[i][j] != 0) {
                pivo = j;
                break;
            }
        }
        if (pivo == -1) {
            encontrouLinhaZero = 1;
        }
        else {
            if (encontrouLinhaZero) {
                escada = 0;
            }
            if (pivo <= ultimoPivo) {
                escada = 0;
            }
            ultimoPivo = pivo;
        }
    }
    if (escada) {
        printf("S\n");
    } else {
        printf("N\n");
    }
    return 0;
}