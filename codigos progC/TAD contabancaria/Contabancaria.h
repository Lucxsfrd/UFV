#ifndef CONTABANCARIA_H
#define CONTABANCARIA_H
typedef struct{
    int numero;
    char nome[50];
    int CPF[11];
    char tipo;
    int anoabertura;
    double saldo;
}ContaBancaria;
void inicializar(ContaBancaria* conta, int numero, char* nome, int* CPF, char tipo, int anoabertura, double saldo);
void imprime(ContaBancaria conta);
void getnome(ContaBancaria* conta, char* nome);
void getcpf(ContaBancaria* conta, int* cpf);
void setnome(ContaBancaria* conta, char* nome);
void setcpf(ContaBancaria* conta, int* cpf);
void saque(ContaBancaria* conta, double valor);
void deposito(ContaBancaria* conta, double valor);
void emprestimo(ContaBancaria* conta);
#endif