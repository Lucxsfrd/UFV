#include <stdio.h>
#include <stdlib.h>
#include "JogadorFutebol.h"

void inicializa(jogador* player, int idade, int numeroCamisa, char* nome, char pernadominante, char* posicao, char* nacionalidade){
    setIdade(player,idade);
    setNumeroCamisa(player,numeroCamisa);
    setNome(player,nome);
    setPernaDominante(player, pernadominante);
    setPosicao(player, posicao);
    setNacionalidade(player, nacionalidade);
}

char* getNome(jogador* player){
    return player->nome;
}

int getIdade(jogador* player){
    return player->idade;
}

int getNumeroCamisa(jogador* player){
    return player->numeroCamisa;
}

char getPernadominante(jogador* player){
    return player->pernaDominante;
}

char* getPosicao(jogador* player){
    return player->posicao;
}

char* getNacionalidade(jogador* player){
    return player->nacionalidade;
}

void setIdade(jogador* player, int idade){
    player->idade = idade;
}

void setNumeroCamisa(jogador* player, int numeroCamisa){
    player->numeroCamisa = numeroCamisa;
}

void setNome(jogador* player, char* nome){
    int i =0;
    while(nome[i]!='\0'){
        player->nome[i] = nome[i];
        i++;
    }
    player->nome[i] = '\0';

}

void setPernaDominante(jogador* player, char pernadominante){
    player->pernaDominante = pernadominante;
}

void setPosicao(jogador* player, char* posicao){
    int i =0;
    while(posicao[i]!='\0'){
        player->posicao[i] = posicao[i];
        i++;
    }
    player->posicao[i] = '\0';

}

void setNacionalidade(jogador* player, char* nacionalidade){
    int i =0;
    while(nacionalidade[i] != '\0'){
        player->nacionalidade[i] = nacionalidade[i];
        i++;
    }
    player->nacionalidade[i] = '\0';
}


void Imprime(jogador* player){
    
}
