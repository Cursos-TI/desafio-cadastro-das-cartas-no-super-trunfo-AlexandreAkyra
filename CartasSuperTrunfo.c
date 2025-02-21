#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    
    // Declaração de variáveis das cartas
    char estado1, estado2;
    char codigo_carta1[10], codigo_carta2[10], buffer[100]; // A variável buffer seria a "lixeira" dos inputs indesejados que ficam no stdin
    char nome_cidade1[50], nome_cidade2[50];
    int populacao1, pontos_turisticos1, populacao2, pontos_turisticos2;
    float area1, pib1, area2, pib2;

    // Leitura dos dados digitados pelo usuário
    printf("Bem vindo ao Super trunfo\n");
    printf("Cadastre suas cartas abaixo\n");

    //Cadastro da Carta 1
    printf("\nCarta 1\n");

    printf("Estado [Digite uma letra de A a H]: ");
    scanf("%c",&estado1);
    fgets(buffer, 100, stdin); // Coletando os inputs indesejados que ficaram no stdin após o scanf

    printf("Digite o código da carta [Letra do estado seguida de um número de 01 a 04]: ");
    fgets(codigo_carta1, 50, stdin);
    codigo_carta1[strcspn(codigo_carta1, "\n")] = 0; // Essa linha serve para substituir o "/n" pelo "/0" que o fgets coloca no final da string

    printf("Digite o nome da cidade: ");
    fgets(nome_cidade1, 50, stdin);
    nome_cidade1[strcspn(nome_cidade1, "\n")] = 0; // Essa linha serve para substituir o "/n" pelo "/0" que o fgets coloca no final da string

    printf("Digite a população: ");
    scanf("%d", &populacao1);

    printf("Digite a área: ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);
    fgets(buffer, 100, stdin); // Coletando os inputs indesejados que ficaram no stdin após o scanf

    //Cadastro da carta 2
    printf("\nCarta 2\n");

    printf("Estado [Digite uma letra de A a H]: ");
    scanf("%c",&estado2);
    fgets(buffer, 100, stdin); // Coletando os inputs indesejados que ficaram no stdin após o scanf

    printf("Digite o código da carta [Letra do estado seguida de um número de 01 a 04]: ");
    fgets(codigo_carta2, 50, stdin);
    codigo_carta2[strcspn(codigo_carta2, "\n")] = 0; // Essa linha serve para substituir o "/n" pelo "/0" que o fgets coloca no final da string

    printf("Digite o nome da cidade: ");
    fgets(nome_cidade2, 50, stdin);
    nome_cidade2[strcspn(nome_cidade2, "\n")] = 0; // Essa linha serve para substituir o "/n" pelo "/0" que o fgets coloca no final da string

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite a área: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);
    fgets(buffer, 100, stdin); // Coletando os inputs indesejados que ficaram no stdin após o scanf
    
    // Exibição dos dados na tela do usuário
    printf("\nCarta 1:\n");

    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo_carta1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos1);

    printf("\nCarta 2:\n");

    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo_carta2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos2);

    return 0;
}
