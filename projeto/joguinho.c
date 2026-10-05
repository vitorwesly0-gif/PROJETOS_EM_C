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
    printf("Digite a primeira letra do estado: \n");
    scanf_s("%s", estado, 2);                   

    printf("Digite o codigo do estado: \n");
    scanf_s("%s", codigo, 4);

    printf("Digite o nome da cidade: \n");
    scanf_s("%s", nome_cidade, 50);

    printf("Digite a populacao: \n");
    scanf_s("%ld", &populacao);

    printf("Digite a area: \n");
    scanf_s("%f", &area);

    printf("Digite o PIB: \n");
    scanf_s("%lf", &PIB);                     

    printf("Digite os pontos turisticos: \n");
    scanf_s("%d", &pontos_turisticos);

    densidade_populacional = (float)populacao / area;
    pib_per_capita = PIB / (double)populacao;  

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
    printf("Digite a primeira letra do estado: \n");
    scanf_s("%s", estado_2, 2);

    printf("Digite o codigo do estado: \n");
    scanf_s("%s", codigo_2, 4);

    printf("Digite o nome da cidade: \n");
    scanf_s("%s", nome_cidade_2, 50);

    printf("Digite a populacao: \n");
    scanf_s("%ld", &populacao_2);

    printf("Digite a area: \n");
    scanf_s("%f", &area_2);

    printf("Digite o PIB: \n");
    scanf_s("%lf", &PIB_2);

    printf("Digite os pontos turisticos: \n");
    scanf_s("%d", &pontos_turisticos_2);

    densidade_populacional_2 = (float)populacao_2 / area_2;
    pib_per_capita_2 = PIB_2 / (double)populacao_2;

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
    float soma_1 = (float)populacao + area + (float)PIB + pontos_turisticos + densidade_populacional + (float)pib_per_capita;
    float soma_2 = (float)populacao_2 + area_2 + (float)PIB_2 + pontos_turisticos_2 + densidade_populacional_2 + (float)pib_per_capita_2;

    printf("\n--- Resultado ---\n");
    if (soma_1 > soma_2){
        printf("A primeira carta e melhor!\n");
    }else if (soma_1 < soma_2){
        printf("A segunda carta e melhor!\n");
    }else{
        printf("As duas cartas sao iguais.\n");
    }

    return 0;
}