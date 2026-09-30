#include <stdio.h>
int main(){
    int N=0; int x = 0; 
    scanf("%d",&N);
    int vetor[N];
    for(int i=0; i<N; i++){
        scanf("%d", &x);
        vetor[i] = x;
    }
    int menor = vetor[0];
    int imenor = 0;
    for(int i=0; i<N; i++){
        if(vetor[i]<menor){
            menor = vetor[i];
            imenor = i;
        }
    }
    printf("Menor valor: %d\n",menor);
    printf("Posicao: %d\n",imenor);
    return 0;
}