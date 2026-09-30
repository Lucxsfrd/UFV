#include <stdio.h>
int main(){
    int a = 0;
    int b = 1;
    int N;
    int sequencia = 0;
    scanf("%d", &N);
    for(int i = 1; i<(N+1); i++){
        if (i==1)
            printf("%d", a);
        else if (i>0)
            printf(" %d", a);  
        sequencia = a+b;
        a = b;
        b = sequencia;
    }
    printf("\n");
    return 0;
}

