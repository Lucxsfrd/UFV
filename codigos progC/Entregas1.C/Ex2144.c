#include <stdio.h>
int main() {
    int w1, w2, r;
    double soma = 0;
    int casos = 0;
    while (scanf("%d %d %d", &w1, &w2, &r) == 3) {
        if (w1 == 0 && w2 == 0 && r == 0)
            break;
        double media1 = 0, media2 = 0, media = 0;
        media1 = w1 * (1 + r / 30.0);
        media2 = w2 * (1 + r / 30.0);
        media = (media1 + media2) / 2;
        soma += media;
        casos++;
        if (media >= 1 && media < 13)
            printf("Nao vai da nao");
        else if (media >= 13 && media < 14)
            printf("E 13");
        else if (media >= 14 && media < 40)
            printf("Bora, hora do show! BIIR!");
        else if (media >= 40 && media <= 60)
            printf("Ta saindo da jaula o monstro!");
        else if (media > 60)
            printf("AQUI E BODYBUILDER!!");

        printf("\n");
    }
    double mediaGeral = soma / casos;
    if (mediaGeral > 40) {
        printf("\n");
        printf("Aqui nois constroi fibra rapaz! Nao e agua com musculo!\n");
    }
    return 0;
}