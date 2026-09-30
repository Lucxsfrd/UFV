#include <stdio.h>
int main(){
    double soma=0.0;
    double media=0.0;
    double matriz[12][12];
    char x;
    scanf("%c", &x);
    for(int i=0;i<12;i++)
        for(int j=0;j<12;j++){
            scanf("%lf", &matriz[i][j]);    
    }
    for(int i=0;i<5;i++){
        for(int j=(i+1);j<(12-1-i);j++){
            soma+=matriz[i][j];
        }
    }
    if(x=='S'){
        printf("%.1lf\n", soma);
    }else{
        media = soma/30;
        printf("%.1lf\n", media);
    } 
    return 0;
}