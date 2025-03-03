#include <stdio.h>

int main() {
    // Declaração das variáveis de cada carta
    char estado1[5], estado2[5];
    char codigo1[5], codigo2[5];
    char cidade1[30], cidade2[30];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;

    // Entrada de dados da carta 1
    printf("Insira os dados da primeira carta:\n");
    printf("Estado:\n");
    scanf(" %s", estado1);
    printf("Código da Carta:\n");
    scanf(" %s", codigo1);
    printf("Nome da Cidade:\n");
    scanf(" %s", cidade1);
    printf("População da Cidade:\n");
    scanf(" %i", &populacao1);
    printf("Área (km²):\n");
    scanf(" %f", &area1);
    printf("PIB da Cidade:\n");
    scanf(" %f", &pib1);
    printf("Pontos Turísticos:\n");
    scanf(" %i", &pontos1);

    // Entrada de dados da carta 2
    printf("Insira os dados da segunda carta:\n");
    printf("Estado:\n");
    scanf(" %s", estado2);
    printf("Código da Carta:\n");
    scanf(" %s", codigo2);
    printf("Nome da Cidade:\n");
    scanf(" %s", cidade2);
    printf("População da Cidade:\n");
    scanf(" %i", &populacao2);
    printf("Área (km²):\n");
    scanf(" %f", &area2);
    printf("PIB da Cidade:\n");
    scanf(" %f", &pib2);
    printf("Pontos Turísticos:\n");
    scanf(" %i", &pontos2);

    // Exibição dos dados informados da carta 1
    printf("Carta 1: \n");
    printf("Estado: %s \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Nome da Cidade: %s \n", cidade1);
    printf("População da Cidade: %i \n", populacao1);
    printf("Área da Cidade: %.2f km² \n", area1);
    printf("PIB da Cidade: R$ %.2f (reais) \n", pib1);
    printf("Pontos Turísticos: %d \n", pontos1);

    // Exibição dos dados informados da carta 2
    printf("Carta 2: \n");
    printf("Estado: %s \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da Cidade: %s \n", cidade2);
    printf("População da Cidade: %i \n", populacao2);
    printf("Área da Cidade: %.2f Km² \n", area2);
    printf("PIB da Cidade: R$ %.2f (reais) \n", pib2);
    printf("Pontos Turísticos: %d \n", pontos2);

    return 0;
}

