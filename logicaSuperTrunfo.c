#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int pontos1 = 0, pontos2 = 0;
    char primeiroAtributo, segundoAtributo;
    int populacao1, populacao2, pib1, pib2, densidade1, densidade2;

    srand(time(0)); // Gera números aleatórios diferentes a cada execução

    // Geração de valores aleatórios entre 1 e 100
    populacao1 = rand() % 100 + 1;
    populacao2 = rand() % 100 + 1;
    pib1 = rand() % 100 + 1;
    pib2 = rand() % 100 + 1;
    densidade1 = rand() % 100 + 1;
    densidade2 = rand() % 100 + 1;

    printf("Bem-vindo ao Super Trunfo de Países!\n\n");

    // PRIMEIRO ATRIBUTO
    printf("Escolha o primeiro atributo para comparar:\n");
    printf("P. População\nB. PIB\nD. Densidade Demográfica\n");
    printf("Escolha a comparação: ");
    scanf(" %c", &primeiroAtributo);

    switch (primeiroAtributo) {
    case 'P':
    case 'p':
    printf("\nVocê escolheu População!\n");
    if (populacao1 > populacao2) pontos1++;
    else if (populacao2 > populacao1) pontos2++;
    break;
    case 'B':
    case 'b':
    printf("\nVocê escolheu PIB!\n");
    if (pib1 > pib2) pontos1++;
    else if (pib2 > pib1) pontos2++;
    break;
    case 'D':
    case 'd':
    printf("\nVocê escolheu Densidade Demográfica!\n");
    if (densidade1 < densidade2) pontos1++;
    else if (densidade2 < densidade1) pontos2++;
    break;
    default:
    printf("\nOpção inválida!\n");
    }

    // SEGUNDO ATRIBUTO
    printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
    printf("P. População\nB. PIB\nD. Densidade Demográfica\n");
    printf("Escolha a comparação: ");
    scanf(" %c", &segundoAtributo);

    if (primeiroAtributo == segundoAtributo) {
    printf("\nVocê escolheu o mesmo atributo duas vezes. Encerrando.\n");
    }

    switch (segundoAtributo) {
    case 'P':
    case 'p':
    printf("\nVocê escolheu População!\n");
    if (populacao1 > populacao2) pontos1++;
    else if (populacao2 > populacao1) pontos2++;
    break;
    case 'B':
    case 'b':
    printf("\nVocê escolheu PIB!\n");
    if (pib1 > pib2) pontos1++;
    else if (pib2 > pib1) pontos2++;
    break;
    case 'D':
    case 'd':
    printf("\nVocê escolheu Densidade Demográfica!\n");
    if (densidade1 < densidade2) pontos1++;
    else if (densidade2 < densidade1) pontos2++;
    break;
    default:
    printf("\nOpção inválida!\n");
    }

    // RESULTADOS
    printf("\n=== RESULTADO DAS CARTAS ===\n");
    printf("População: País 1 = %d | País 2 = %d\n", populacao1, populacao2);
    printf("PIB:        País 1 = %d | País 2 = %d\n", pib1, pib2);
    printf("Densidade:  País 1 = %d | País 2 = %d\n", densidade1, densidade2);

    printf("\n=== PLACAR FINAL ===\n");
    printf("País 1: %d ponto(s)\n", pontos1);
    printf("País 2: %d ponto(s)\n", pontos2);

    if (pontos1 > pontos2) {
    printf("\nParabéns! Você venceu!\n");
    } else if (pontos2 > pontos1) {
    printf("\nVocê perdeu! País 2 venceu!\n");
    } else {
    printf("\nEmpate!\n");
    }

    return 0;
}
