#include <stdio.h>
#include <string.h>

// Definição de constantes
#define MAX_TERRITORIOS 5
#define TAM_NOME 30
#define TAM_COR 10

// Definição da struct Territorio
struct Territorio {
    char nome[TAM_NOME];
    char cor[TAM_COR];
    int tropas;
};

int main() {
    // Vetor de 5 estruturas Territorio
    struct Territorio territorios[MAX_TERRITORIOS];

    printf("Vamos cadastrar os 5 territorios iniciais do nosso mundo.\n\n");

    // Cadastro dos territórios
    for (int i = 0; i < MAX_TERRITORIOS; i++) {
        printf("=== Cadastrando Territorio %d === \n", i + 1);

        printf("Nome do Territorio: ");
        scanf("%s", territorios[i].nome); 

        printf("Cor do Exercito(ex: Azul, Verde): ");
        scanf("%s", territorios[i].cor); 

        printf("Numero de Tropas: ");
        scanf("%d", &territorios[i].tropas);

        printf("\n"); 
    }

    printf("Cadastro inicial concluido com sucesso!\n\n");
    
    // Exibição dos dados cadastrados
    printf("============================\n");
    printf("    MAPA DO MUNDO ATUAL\n");
    printf("============================\n\n");

    for (int i = 0; i < MAX_TERRITORIOS; i++) {
        printf("TERRITORIO %d:\n", i + 1);
        printf("-Nome: %s\n", territorios[i].nome);
        printf("-Dominado por: Exercito %s\n", territorios[i].cor);
        printf("-Tropas: %d\n\n", territorios[i].tropas);
    }

    

    return 0;
}