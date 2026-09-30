#include <stdio.h>
int main(){
    int N;
    while(scanf("%d", &N)!=EOF){
        int vetor[N];
        for(int i=0;i<N;i++)
            vetor[i] =3;
        int comeco = 0;
        int final =(N-1);
        for(int i=0;i<N;i++){
            vetor[comeco] =  1;
            vetor[final] = 2;
            if(vetor[comeco]==vetor[final])
                vetor[final] =2;
            for(int j=0; j<N; j++){
                printf("%d", vetor[j]);
                vetor[j] =3;
            }
        comeco+=1;
        final-=1;
        printf("\n");         
        }
    }
    return 0;
}
    
