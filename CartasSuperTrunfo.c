#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    char estado1;
    char codigo_da_carta1[4];
    char nome_da_cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int numero_de_pontos_turisticos1;

    char estado2;
    char codigo_da_carta2[3];
    char nome_da_cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int numero_de_pontos_turisticos2;
    
    // Leitura dos dados da primeira carta cidade
    printf("Digite o estado da primeira carta cidade: ");
    scanf(" %c", &estado1);

    printf("Digite o codigo da primeira carta cidade: ");
    scanf("%s", codigo_da_carta1);

    printf("Digite o nome da cidade da primeira carta cidade: ");
    scanf("%[^\n]", nome_da_cidade1);

    printf("Digite a populacao da primeira carta cidade: ");
    scanf("%d", &populacao1);

    printf("Digite a area da primeira carta cidade: ");
    scanf("%f", &area1);

    printf("Digite o pib da primeira carta cidade: ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos da primeira carta cidade: ");
    scanf("%d", &numero_de_pontos_turisticos1);

    // Leitura dos dados da segunda carta cidade

    printf("\nDigite o estado da segunda carta cidade: ");
    scanf(" %c", &estado2);

    printf("Digite o codigo da segunda carta cidade: ");
    scanf("%s", codigo_da_carta2);

    printf("Digite o nome da cidade da segunda carta cidade: ");
    scanf("%[^\n]", nome_da_cidade2);

    printf("Digite a populacao da segunda carta cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a area da segunda carta cidade: ");
    scanf("%f", &area2);

    printf("Digite o pib da segunda carta cidade: ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos da segunda carta cidade: ");
    scanf("%d", &numero_de_pontos_turisticos2);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
