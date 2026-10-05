#include <stdio.h>

int main() {
    char estado[2], codigo[4], nome_cidade[50];
    char estado_2[2], codigo_2[4], nome_cidade_2[50];
    int pontos_turisticos, pontos_turisticos_2;
    double PIB, PIB_2;                        
    double pib_per_capita, pib_per_capita_2;    
    float area, area_2;
    float densidade_populacional, densidade_populacional_2;
    signed long int populacao, populacao_2;

    // === PRIMEIRA CARTA ===
    //enttrada de dados da primeira carta

    printf("Digite a primeira letra do estado: \n");
    scanf("%s", estado, 2);                   

    printf("Digite o codigo do estado: \n");
    scanf("%s", codigo, 4);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome_cidade, 50);

    printf("Digite a populacao: \n");
    scanf("%ld", &populacao);

    printf("Digite a area: \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%lf", &PIB);                     

    printf("Digite os pontos turisticos: \n");
    scanf("%d", &pontos_turisticos);

    // Calcula a densidade populacional e o PIB per capita

    densidade_populacional = (float)populacao / area;
    pib_per_capita = PIB / (double)populacao;  

    //saida de dados da primeira carta

    printf("\n--- Carta 1 ---\n");
    printf("Estado: %s\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Cidade: %s\n", nome_cidade);
    printf("Populacao: %ld\n", populacao);
    printf("Area: %.2f\n", area);
    printf("PIB: %.2lf\n", PIB);
    printf("Pontos turisticos: %d\n", pontos_turisticos);
    printf("Densidade populacional: %.2f\n", densidade_populacional);
    printf("PIB per capita: %.4lf\n", pib_per_capita); 

    // === SEGUNDA CARTA ===
    //entrada de dados da segunda carta
    printf("Digite a primeira letra do estado: \n");
    scanf("%s", estado_2, 2);

    printf("Digite o codigo do estado: \n");
    scanf("%s", codigo_2, 4);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome_cidade_2, 50);

    printf("Digite a populacao: \n");
    scanf("%ld", &populacao_2);

    printf("Digite a area: \n");
    scanf("%f", &area_2);

    printf("Digite o PIB: \n");
    scanf("%lf", &PIB_2);

    printf("Digite os pontos turisticos: \n");
    scanf("%d", &pontos_turisticos_2);

     // Calcula a densidade populacional e o PIB per capita

    densidade_populacional_2 = (float)populacao_2 / area_2;
    pib_per_capita_2 = PIB_2 / (double)populacao_2;

    //saida de dados da segunda carta

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %s\n", estado_2);
    printf("Codigo: %s\n", codigo_2);
    printf("Cidade: %s\n", nome_cidade_2);
    printf("Populacao: %ld\n", populacao_2);
    printf("Area: %.2f\n", area_2);
    printf("PIB: %.2lf\n", PIB_2);
    printf("Pontos turisticos: %d\n", pontos_turisticos_2);
    printf("Densidade populacional: %.2f\n", densidade_populacional_2);
    printf("PIB per capita: %.4lf\n", pib_per_capita_2);

    // === COMPARAÇÃO ===

    if (populacao > populacao_2) {
        printf("\nA primeira carta tem mais populacao.\n");
        printf("\n--- cartas ---\n");
        printf("população carta 1: %ld\n", populacao);
        printf("população carta 2: %ld\n", populacao_2);
    } else if (populacao < populacao_2) {
        printf("\nA segunda carta tem mais populacao.\n");
        printf("\n--- cartas ---\n");
        printf("população carta 2: %ld\n", populacao_2);
        printf("população carta 1: %ld\n", populacao);
    } else {
        printf("\nAs duas cartas tem a mesma populacao.\n");
        printf("\n--- cartas ---\n");
        printf("população carta 1: %ld\n", populacao);
        printf("população carta 2: %ld\n", populacao_2);
    }

    return 0;
}

  