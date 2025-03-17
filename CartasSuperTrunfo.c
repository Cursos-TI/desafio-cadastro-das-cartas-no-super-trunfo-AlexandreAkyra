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
    int pontos_turisticos1, pontos_turisticos2, comp_populacao, comp_area, comp_pib, comp_pontos, comp_densidade, comp_capita, comp_poder;
    unsigned long int populacao1, populacao2;
    float area1, pib1, area2, pib2, densidade_populacional1, pib_capita1, densidade_populacional2, pib_capita2, super_poder1, super_poder2;

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
    scanf("%ld", &populacao1);

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
    scanf("%ld", &populacao2);

    printf("Digite a área: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);
    fgets(buffer, 100, stdin); // Coletando os inputs indesejados que ficaram no stdin após o scanf

    // Calculando Densidade Populacional e PIB per Capita

    pib_capita1 = (float) (pib1 * 1000000000) / populacao1;
    pib_capita2 = (float) (pib2 * 1000000000) / populacao2;

    densidade_populacional1 = (float) populacao1 / area1;
    densidade_populacional2 = (float) populacao2 / area2;

    // Comparação de dados das cartas

    super_poder1 = populacao1 + area1 + pib1 + pontos_turisticos1 - densidade_populacional1 + pib_capita1;
    super_poder2 = populacao2 + area2 + pib2 + pontos_turisticos2 - densidade_populacional2 + pib_capita2;

    comp_populacao = populacao1 > populacao2;
    comp_area = area1 > area2;
    comp_pib = pib1 > pib2;
    comp_pontos = pontos_turisticos1 > pontos_turisticos2;
    comp_densidade = densidade_populacional1 < densidade_populacional2;
    comp_capita = pib_capita1 > pib_capita2;
    comp_poder = super_poder1 > super_poder2;

    // Exibição dos dados na tela do usuário
    printf("\nCarta 1:\n");

    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo_carta1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("População: %ld\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("PIB per Capita: %f reais\n", pib_capita1);

    printf("\nCarta 2:\n");

    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo_carta2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("População: %ld\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per Capita: %f reais\n", pib_capita2);

    printf("\nComparação de Cartas:\n");

    printf("\nResultado: 1 = Carta 1 vence\nResultado: 0 = Carta 2 vence\n");
    printf("\nPopulação: %d\n", comp_populacao);
    printf("Área: %d\n", comp_area);
    printf("PIB: %d\n", comp_pib);
    printf("Pontos Turísticos: %d\n", comp_pontos);
    printf("Densidade Populacional: %d\n", comp_densidade);
    printf("PIB per Capita: %d\n", comp_capita);
    printf("Super Poder: %d\n", comp_poder);

    return 0;
}
