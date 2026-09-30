#include <stdio.h>
#include "Contabancaria.h"
int main(){
    ContaBancaria conta1;
    
    conta1.numero = 157;
   
    char nome[50] = {"Lucas"};
    
    setnome(&conta1, &(*nome));
    
    int cpf[11] = {1,1,1,1,1,1,1,1,1,1,1};
    
    setcpf(&conta1, &(*cpf));
    
    conta1.tipo = *"c";
    
    conta1.anoabertura = 2025;
    
    conta1.saldo = 500.00;
    
    imprime(conta1);
    
    saque(&conta1, 100);
    
    printf("Apos Saque: %.2f\n",conta1.saldo);
    
    deposito(&conta1, 50);
    
    printf("Apos deposito: %.2f\n",conta1.saldo);
    
    emprestimo(&conta1);
    

    return 0;
}