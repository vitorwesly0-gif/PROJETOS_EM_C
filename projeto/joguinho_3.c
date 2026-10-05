#include <stdio.h>

int main() {
    char estado[2], codigo[4], nome_cidade[50];
    char estado_2[2], codigo_2[4], nome_cidade_2[50];
    int pontos_turisticos, pontos_turisticos_2,escolha;
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

    // menu de comparacao

    printf("\n--- Menu de Comparacao ---\n");
    printf("1. populacao\n");
    printf("2. area\n");
    printf("3. PIB\n");
    printf("4. pontos turisticos\n");
    printf("5. densidade populacional\n");
    printf("escolha o atributo para comparar(digite uma número de 1 á 5): \n");
    scanf("%d", &escolha);

    //operador de comparação(switch case)

    switch (escolha) {
        case 1:
            if (populacao > populacao_2) {
                printf("Carta 1 tem maior populacao.\n");
            } else if (populacao < populacao_2) {
                printf("Carta 2 tem maior populacao.\n");
            } else {
                printf("As duas cartas tem a mesma populacao.\n");
            }
            break;
        case 2:
            if (area > area_2) {
                printf("Carta 1 tem maior area.\n");
            } else if (area < area_2) {
                printf("Carta 2 tem maior area.\n");
            } else {
                printf("As duas cartas tem a mesma area.\n");
            }
            break;
        case 3:
            if (PIB > PIB_2) {
                printf("Carta 1 tem maior PIB.\n");
            } else if (PIB < PIB_2) {
                printf("Carta 2 tem maior PIB.\n");
            } else {
                printf("As duas cartas tem o mesmo PIB.\n");
            }
            break;
        case 4:
            if (pontos_turisticos > pontos_turisticos_2) {
                printf("Carta 1 tem mais pontos turisticos.\n");
            } else if (pontos_turisticos < pontos_turisticos_2) {
                printf("Carta 2 tem mais pontos turisticos.\n");
            } else {
                printf("As duas cartas tem a mesma quantidade de pontos turisticos.\n");
            }
            break;
        case 5:
            if (densidade_populacional > densidade_populacional_2) {
                printf("Carta 1 tem maior densidade populacional.\n");
            } else if (densidade_populacional < densidade_populacional_2) {
                printf("Carta 2 tem maior densidade populacional.\n");
            } else {
                printf("As duas cartas tem a mesma densidade populacional.\n");
            }
            break;
        default:
            printf("Escolha invalida. Por favor, escolha um número de 1 á 5.\n");
    }


    return 0;
}