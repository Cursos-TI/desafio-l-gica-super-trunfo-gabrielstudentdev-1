#include <stdio.h>

int main() {
    // Variáveis para a primeira e segunda carta
    char estado1[40], codigo1[3], cidade1[40], estado2[40], codigo2[3], cidade2[40];
    int populacao1, populacao2, pontosturisticos1, pontosturisticos2;
    float area1, area2, pib1, pib2, pibpercapita1, pibpercapita2, densidadepopulacional1, densidadepopulacional2;

    // Entrada de dados para a primeira carta
    printf("Digite o nome do estado da sua primeira carta: ");
    scanf(" %[^\n]", estado1);
    printf("Digite o nome da cidade da primeira carta: ");
    scanf(" %[^\n]", cidade1);
    printf("Digite o código da sua primeira carta: "); 
    scanf("%s", codigo1);
    printf("Digite a população de pessoas da sua primeira carta: ");
    scanf("%d", &populacao1);
    printf("Digite quantos km² tem a área da sua primeira carta: ");
    scanf("%f", &area1);
    printf("Digite qual o PIB da sua primeira carta: ");
    scanf("%f", &pib1);
    printf("Digite quantos pontos turísticos tem sua primeira carta: ");
    scanf("%d", &pontosturisticos1);

    // Entrada de dados para a segunda carta
    printf("\nDigite o nome do estado da sua segunda carta: ");
    scanf(" %[^\n]", estado2);
    printf("Digite o nome da cidade da sua segunda carta: ");
    scanf(" %[^\n]", cidade2);
    printf("Digite o código da sua segunda carta: ");
    scanf("%s", codigo2);
    printf("Digite a população de pessoas da sua segunda carta: ");
    scanf("%d", &populacao2);
    printf("Digite quantos km² tem a área da sua segunda carta: ");
    scanf("%f", &area2);
    printf("Digite qual o PIB da sua segunda carta: ");
    scanf("%f", &pib2);
    printf("Digite quantos pontos turísticos tem na sua segunda carta: ");
    scanf("%d", &pontosturisticos2);

    // Cálculo dos atributos derivados
    pibpercapita1 = pib1 / populacao1;
    pibpercapita2 = pib2 / populacao2;
    densidadepopulacional1 = populacao1 / area1;
    densidadepopulacional2 = populacao2 / area2;

    // Exibição dos dados das cartas
    printf("\n--- Primeira Carta ---\n");
    printf("Cidade: %s\n", cidade1);
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", pontosturisticos1);
    printf("PIB per capita: %.2f\n", pibpercapita1);
    printf("Densidade Populacional: %.2f\n", densidadepopulacional1);

    printf("\n--- Segunda Carta ---\n");
    printf("Cidade: %s\n", cidade2);
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", pontosturisticos2);
    printf("PIB per capita: %.2f\n", pibpercapita2);
    printf("Densidade Populacional: %.2f\n", densidadepopulacional2);

    // Comparação das cartas
    printf("\n--- Comparação de Cartas ---\n");

    // Comparação de população
    if (populacao1 > populacao2) {
        printf("População: %s venceu!\n", estado1);
    } else {
        if (populacao2 > populacao1) {
            printf("População: %s venceu!\n", estado2);
        } else {
            printf("População: Empate!\n");
        }
    }

    // Comparação de área
    if (area1 > area2) {
        printf("Área: %s venceu!\n", estado1);
    } else {
        if (area2 > area1) {
            printf("Área: %s venceu!\n", estado2);
        } else {
            printf("Área: Empate!\n");
        }
    }

    // Comparação de PIB
    if (pib1 > pib2) {
        printf("PIB: %s venceu!\n", estado1);
    } else {
        if (pib2 > pib1) {
            printf("PIB: %s venceu!\n", estado2);
        } else {
            printf("PIB: Empate!\n");
        }
    }

    // Comparação de pontos turísticos
    if (pontosturisticos1 > pontosturisticos2) {
        printf("Pontos turísticos: %s venceu!\n", estado1);
    } else {
        if (pontosturisticos2 > pontosturisticos1) {
            printf("Pontos turísticos: %s venceu!\n", estado2);
        } else {
            printf("Pontos turísticos: Empate!\n");
        }
    }

    // Comparação de PIB per capita
    if (pibpercapita1 > pibpercapita2) {
        printf("PIB per capita: %s venceu!\n", estado1);
    } else {
        if (pibpercapita2 > pibpercapita1) {
            printf("PIB per capita: %s venceu!\n", estado2);
        } else {
            printf("PIB per capita: Empate!\n");
        }
    }

    // Comparação de densidade populacional
    if (densidadepopulacional1 < densidadepopulacional2) {
        printf("Densidade populacional: %s venceu!\n", estado1);
    } else {
        if (densidadepopulacional2 < densidadepopulacional1) {
            printf("Densidade populacional: %s venceu!\n", estado2);
        } else {
            printf("Densidade populacional: Empate!\n");
        }
    }

    return 0;
} 
