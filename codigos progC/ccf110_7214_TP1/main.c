#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Criação de uma struct para armazenar as informações das seleções.
typedef struct {
    char nome[50];
    int pontos;
    int gols;
} Dados;

// Criação do vetor que armazena as seleções obtidas na leitura do arquivo.
Dados InfoSelecoes[48];

// Função para inscrever a seleção (Inserí-la no vetor criado acima)
Dados InscreverSelecao(char n[50]){
    Dados t;
    strcpy(t.nome, n);
    t.pontos = 0;
    t.gols = 0;
    return t;
}

// Função para checar se a seleção lida no arquivo "jogos.txt" realmente existe
int ProcurarSelecao(char n[50]){
    int i;
    for (i=0; i<48; i++){
        if (strcmp(InfoSelecoes[i].nome, n) == 0){
            return(i);
            // Se sim, retorne sua posição no vetor
        }
    }
    return(-1);
    // Se não, retorne -1
}

int Melhor(Dados A, Dados B){
    // Criterios de Desempate
    // 1. Verificar se a pontuação das seleções é diferente
    if (A.pontos != B.pontos)
        return A.pontos > B.pontos;

    // 2. Se não for, verificar se a quantidade de gols das seleções é diferente
    if (A.gols != B.gols)
        return A.gols > B.gols;

    // 3. Se não, decidir na ordem alfabética
    return strcmp(A.nome, B.nome) < 0;
}

int main(){
    // Abrir ponteiro do arquivo das seleções
    FILE *file;
    file = fopen("selecoes.txt", "r");

    // Confirmando se é possível ler o arquivo
    if(file==NULL){
        printf("Nao foi possivel abrir o arquivo!\n");
        return 1;
    } 

    int i = 0, qtd = 0;

    char buffer[50];

    // Enquanto tiver linhas com coisas escritas , leia.
    while(fgets(buffer, 50, file)!=NULL){
        buffer[strcspn(buffer, "\n")] = '\0';
        
        qtd++;
        Dados j = InscreverSelecao(buffer);   
        InfoSelecoes[i] = j;
        i++;
    }
    // Fechar ponteiro do primeiro arquivo
    fclose(file);
    
    // Abrir ponteiro do segundo arquivo, referente aos jogos
    FILE *jogos;
    jogos = fopen("jogos.txt", "r");
    if(jogos==NULL){
        printf("Nao foi possivel abrir o arquivo!\n");
        return 1;
    }
    
    char timeA[50], timeB[50];
    int golsA, golsB;
    // Leitura das partidas
    while (fscanf(jogos, "%s %d x %d %s", timeA, &golsA, &golsB, timeB) == 4){
        int ver_A = ProcurarSelecao(timeA);
        int ver_B = ProcurarSelecao(timeB);
        if (ver_A > -1 && ver_B > -1){
            if (golsA > golsB){
                // Time A ganhou de B
                InfoSelecoes[ver_A].pontos += 3;
                InfoSelecoes[ver_A].gols += golsA;
                InfoSelecoes[ver_B].gols += golsB;
            } else if (golsB > golsA){
                // Time B ganhou de A
                InfoSelecoes[ver_B].pontos += 3;
                InfoSelecoes[ver_A].gols += golsA;
                InfoSelecoes[ver_B].gols += golsB;
            } else {
                // Times A e B empataram
                InfoSelecoes[ver_A].pontos += 1;
                InfoSelecoes[ver_B].pontos += 1;
                InfoSelecoes[ver_A].gols += golsA;
                InfoSelecoes[ver_B].gols += golsB;
            }
        }else {
            printf("ALERTA: Selecao Invalida\n"); // Informa que uma seleção inválida foi encontrada.
        }
    }

    // Fechar o ponteiro do segundo arquivo
    fclose(jogos);

    // Dado o retorno da função, ordena as seleções a partir dos critérios de desempate
    for (i = 0; i < qtd-1; i++){
        for (int j = 0; j < qtd-1-i; j++){
            if (!Melhor(InfoSelecoes[j], InfoSelecoes[j+1])){
                Dados aux = InfoSelecoes[j];
                InfoSelecoes[j] = InfoSelecoes[j+1];
                InfoSelecoes[j+1] = aux;
            }
        }
    }
    
    // Criação de um arquivo de texto que contém a classificação final das seleções:
    FILE *classificacao;
    classificacao = fopen("classificacao.txt", "w");

    if(classificacao == NULL){
        printf("Erro ao criar o arquivo!\n");
        return 1; 
    }
    fprintf(classificacao,
        "==================================================\n"
        "       CLASSIFICACAO FINAL DA COPA DO MUNDO\n"
        "==================================================\n\n"
        "PODIO DOS CAMPEOES:\n"
        "1o Lugar: %s - %d pontos (%d gols)\n"
        "2o Lugar: %s - %d pontos (%d gols)\n"
        "3o Lugar: %s - %d pontos (%d gols)\n\n"
        "==================================================\n",
        InfoSelecoes[0].nome, InfoSelecoes[0].pontos, InfoSelecoes[0].gols,
        InfoSelecoes[1].nome, InfoSelecoes[1].pontos, InfoSelecoes[1].gols,
        InfoSelecoes[2].nome, InfoSelecoes[2].pontos, InfoSelecoes[2].gols
        );
    // Fecha o ponteiro do novo arquivo criado
    fclose(classificacao);
    return 0;
}