#ifndef JOGADORFUTEBOL_H
#define JOGADORFUTEBOL_H

typedef struct{
    char nome[50];
    int idade;
    int numeroCamisa;
    char pernaDominante;
    char posicao[20];
    char nacionalidade[20];
}jogador;

void inicializa(jogador* player, int idade, int numeroCamisa, char* nome, char pernadominante, char* posicao, char* nacionalidade);

char* getNome(jogador*);
int getIdade(jogador*);
int getNumeroCamisa(jogador*);
char getPernadominante(jogador*);
char* getPosicao(jogador*);
char* getNacionalidade(jogador*);

void setIdade(jogador* player, int idade);
void setNumeroCamisa(jogador* player, int numeroCamisa);
void setNome(jogador* player, char* nome);
void setPernaDominante(jogador* player, char pernadominante);
void setPosicao(jogador* player, char* posicao);
void setNacionalidade(jogador* player, char* nacionaliadde);


void Imprime(jogador* player);





#endif