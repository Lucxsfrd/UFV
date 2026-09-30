#include <stdio.h>
int main(){
    int N, M;
    scanf("%d %d", &N,&M);
    int matriz[N][M];
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            matriz[i][j] = 0;
        }
    }
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            scanf("%d",&matriz[i][j]);
        }
    }
    int maiorsomacoluna = 0;
    int maiorsomalinha = 0;
    for(int i = 0; i < N; i++){
        int soma = 0;
        for(int j = 0; j < M; j++){
            soma+=matriz[i][j];
            if(soma>=maiorsomalinha){
                maiorsomalinha = soma;
            }
        }
    }
    for(int i = 0; i < M; i++){
        int soma = 0;
        for(int j = 0; j < N; j++){
            soma+=matriz[j][i];
            if(soma>=maiorsomacoluna){
                maiorsomacoluna = soma;
            }
        }
    }
    if(maiorsomalinha>=maiorsomacoluna){
        printf("%d\n", maiorsomalinha);
    }else{
        printf("%d\n", maiorsomacoluna);
    }
    return 0;
}
