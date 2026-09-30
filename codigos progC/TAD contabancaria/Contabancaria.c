#include <stdio.h>
#include <stdlib.h>
#include "Contabancaria.h"
void inicializar(ContaBancaria* conta, int numero, char* nome, int* CPF, char tipo, int anoabertura, double saldo){
    conta->numero = numero;
    setnome(conta,nome);
    setcpf(conta,CPF);
    conta->tipo = tipo;
    conta->anoabertura = anoabertura;
    conta->saldo = saldo;
}

void imprime(ContaBancaria conta){
    printf("Numero da Conta:%d\n",conta.numero);
    
    printf("Dono da conta: ");
    for(int i =0; conta.nome[i]!='\0'; i++){
        printf("%c",conta.nome[i]);
    }
    printf("\n");
    
    printf("CPF do dono: ");
    for(int i =0; i<11; i++){
        printf("%d",conta.CPF[i]);
    }
    printf("\n");
    
    printf("Tipo da conta:%c\n", conta.tipo);
    printf("Ano de Abertura de Conta:%d\n", conta.anoabertura);
    printf("Saldo na Conta: %.2f\n", conta.saldo);
}
void getnome(ContaBancaria* conta, char* nome){
    int i = 0;
    while(conta->nome[i]!='\0'){
        nome[i] = conta->nome[i];
        i++;
    }
    nome[i] = '\0';
}

void getcpf(ContaBancaria* conta, int* cpf){
    for(int i=0;i<11;i++){
        cpf[i] = conta->CPF[i];
    }
}
void setnome(ContaBancaria* conta, char* nome){
    int i = 0;
    while(nome[i]!='\0'){
        conta->nome[i] = nome[i];
        i++;
    }
    conta->nome[i] = '\0'; 
}

void setcpf(ContaBancaria* conta, int* cpf){
    for(int i=0;i<11;i++){
        conta->CPF[i] = cpf[i];
    }
}

void saque(ContaBancaria* conta, double valor){
    conta->saldo-=valor;
}
void deposito(ContaBancaria* conta, double valor){
    conta->saldo+=valor;
}

void emprestimo(ContaBancaria* conta){
    if((2026-conta->anoabertura)>2){
        printf("Usuario elegivel para emprestimo");
    }else{
        printf("Usuario nao elegivel para emprestimo");
    }
}