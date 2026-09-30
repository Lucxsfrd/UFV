#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int possui[N + 1];
    for (int i = 0; i <= N; i++) {
        possui[i] = 0;
    }
    for (int i = 0; i < N - 1; i++) {
        int x;
        scanf("%d", &x);
        possui[x] = 1;
    }
    for (int i = 1; i <= N; i++) {
        if (possui[i] == 0) {
            printf("%d\n", i);
            return 0;
        }
    }
    return 0;
}