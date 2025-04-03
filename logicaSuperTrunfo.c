#include <stdio.h>

int main() {
    // Variáveis para as cartas
    char estado1[40], cidade1[40], estado2[40], cidade2[40];
    int populacao1, populacao2, pontosturisticos1, pontosturisticos2;
    float area1, area2, pib1, pib2, densidadepopulacional1, densidadepopulacional2;
    int escolha;

    // Entrada de dados para a primeira carta
    printf("Digite o nome do estado da primeira carta: ");
    scanf("%39s", estado1);
    printf("Digite o nome da cidade da primeira carta: ");
    scanf("%39s", cidade1);
    printf("Digite a população da primeira carta: ");
    scanf("%d", &populacao1);
    
    printf("Digite a área (km²) da primeira carta: ");
    scanf("%f", &area1);
    
    printf("Digite o PIB da primeira carta: ");
    scanf("%f", &pib1);
    
    printf("Digite o número de pontos turísticos da primeira carta: ");
    scanf("%d", &pontosturisticos1);

    // Entrada de dados para a segunda carta
    printf("\nDigite o nome do estado da segunda carta: ");
    scanf("%39s", estado2);
    printf("Digite o nome da cidade da segunda carta: ");
    scanf("%39s", cidade2);
    printf("Digite a população da segunda carta: ");
    scanf("%d", &populacao2);
    
    printf("Digite a área (km²) da segunda carta: ");
    scanf("%f", &area2);
    
    printf("Digite o PIB da segunda carta: ");
    scanf("%f", &pib2);
    
    printf("Digite o número de pontos turísticos da segunda carta: ");
    scanf("%d", &pontosturisticos2);

    // Cálculo da densidade populacional
    densidadepopulacional1 = populacao1 / area1;
    densidadepopulacional2 = populacao2 / area2;

    // Menu interativo
    printf("\nEscolha um atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade populacional\n");
    printf("Opção: ");

    // Adicionando validação para evitar entrada inválida
    if (scanf("%d", &escolha) != 1) {
        printf("Entrada inválida! Certifique-se de digitar um número.\n");
        return 1;  // Sai do programa caso a entrada seja inválida
    }

    switch (escolha) {
        case 1:
            printf("\nPopulação:\n");
            printf("%s: %d habitantes\n", estado1, populacao1);
            printf("%s: %d habitantes\n", estado2, populacao2);
            if (populacao1 > populacao2)
                printf("Vencedor: %s\n", estado1);
            else if (populacao2 > populacao1)
                printf("Vencedor: %s\n", estado2);
            else
                printf("Empate!\n");
            break;
        case 2:
            printf("\nÁrea:\n");
            printf("%s: %.2f km²\n", estado1, area1);
            printf("%s: %.2f km²\n", estado2, area2);
            if (area1 > area2)
                printf("Vencedor: %s\n", estado1);
            else if (area2 > area1)
                printf("Vencedor: %s\n", estado2);
            else
                printf("Empate!\n");
            break;
        case 3:
            printf("\nPIB:\n");
            printf("%s: %.2f\n", estado1, pib1);
            printf("%s: %.2f\n", estado2, pib2);
            if (pib1 > pib2)
                printf("Vencedor: %s\n", estado1);
            else if (pib2 > pib1)
                printf("Vencedor: %s\n", estado2);
            else
                printf("Empate!\n");
            break;
        case 4:
            printf("\nPontos turísticos:\n");
            printf("%s: %d pontos turísticos\n", estado1, pontosturisticos1);
            printf("%s: %d pontos turísticos\n", estado2, pontosturisticos2);
            if (pontosturisticos1 > pontosturisticos2)
                printf("Vencedor: %s\n", estado1);
            else if (pontosturisticos2 > pontosturisticos1)
                printf("Vencedor: %s\n", estado2);
            else
                printf("Empate!\n");
            break;
        case 5:
            printf("\nDensidade populacional:\n");
            printf("%s: %.2f hab/km²\n", estado1, densidadepopulacional1);
            printf("%s: %.2f hab/km²\n", estado2, densidadepopulacional2);
            if (densidadepopulacional1 < densidadepopulacional2)
                printf("Vencedor: %s\n", estado1);
            else if (densidadepopulacional2 < densidadepopulacional1)
                printf("Vencedor: %s\n", estado2);
            else
                printf("Empate!\n");
            break;
        default:
            printf("Opção inválida! Tente novamente.\n");
    }
    return 0;
}
