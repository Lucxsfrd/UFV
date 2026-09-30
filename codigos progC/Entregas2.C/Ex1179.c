#include <stdio.h>
int main(){
    int vetorpar[5];
    int vetorimpar[5];
    int auxiliarpar = 0; int auxiliarimpar=0;
    int x = 0;
    for(int i = 0; i<15;i++){
        scanf("%d", &x);
        if(x%2==0){
            vetorpar[auxiliarpar] = x;
            auxiliarpar++;
            if(auxiliarpar==5){
                for(int i=0;i<auxiliarpar;i++)
                    printf("par[%d] = %d\n",i, vetorpar[i]);
                auxiliarpar = 0;
            }    
        }else{
            vetorimpar[auxiliarimpar] = x;
            auxiliarimpar++;
            if(auxiliarimpar==5){
                for(int i=0; i<auxiliarimpar;i++)
                    printf("impar[%d] = %d\n", i, vetorimpar[i]);
                auxiliarimpar=0;
            }            
        }           
    }
    for(int i=0;i<auxiliarimpar;i++)
        printf("impar[%d] = %d\n", i, vetorimpar[i]);
    for(int i=0; i<auxiliarpar;i++)
        printf("par[%d] = %d\n",i, vetorpar[i]); 
    return 0;
}