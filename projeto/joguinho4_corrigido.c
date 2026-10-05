#include <stdio.h>

int main() {
    char estado[2], codigo[4], nome_cidade[50];
    char estado_2[2], codigo_2[4], nome_cidade_2[50];
    int pontos_turisticos, pontos_turisticos_2, escolha, escolha_2;
    double PIB, PIB_2;
    double pib_per_capita, pib_per_capita_2;
    float area, area_2;
    float densidade_populacional, densidade_populacional_2;
    signed long int populacao, populacao_2;
    double soma_1 = 0, soma_2 = 0;

    // === PRIMEIRA CARTA ===
    printf("Digite a primeira letra do estado: \n");
    scanf("%s", estado);

    printf("Digite o codigo do estado: \n");
    scanf("%s", codigo);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome_cidade);

    printf("Digite a populacao: \n");
    scanf("%ld", &populacao);

    printf("Digite a area: \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%lf", &PIB);

    printf("Digite os pontos turisticos: \n");
    scanf("%d", &pontos_turisticos);

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
    scanf("%s", estado_2);

    printf("Digite o codigo do estado: \n");
    scanf("%s", codigo_2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome_cidade_2);

    printf("Digite a populacao: \n");
    scanf("%ld", &populacao_2);

    printf("Digite a area: \n");
    scanf("%f", &area_2);

    printf("Digite o PIB: \n");
    scanf("%lf", &PIB_2);

    printf("Digite os pontos turisticos: \n");
    scanf("%d", &pontos_turisticos_2);

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

    // === PRIMEIRO ATRIBUTO ===
    printf("\n### Menu de comparação ###\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Pontos turisticos\n");
    printf("5. Densidade populacional\n");
    printf("6. PIB per capita\n");
    printf("Escolha uma opção: ");
    scanf("%d", &escolha);

    switch (escolha) {
        case 1:
            if(populacao > populacao_2)
                printf("Carta 1 tem maior população.\n");
            else if(populacao < populacao_2)
                printf("Carta 2 tem maior população.\n");
            else
                printf("As duas cartas tem a mesma população.\n");
            soma_1 += (double)populacao;
            soma_2 += (double)populacao_2;
            break;
        case 2:
            if(area > area_2)
                printf("Carta 1 tem maior área.\n");
            else if(area < area_2)
                printf("Carta 2 tem maior área.\n");
            else
                printf("As duas cartas tem a mesma área.\n");
            soma_1 += area;
            soma_2 += area_2;
            break;
        case 3:
            if(PIB > PIB_2)
                printf("Carta 1 tem maior PIB.\n");
            else if(PIB < PIB_2)
                printf("Carta 2 tem maior PIB.\n");
            else
                printf("As duas cartas tem o mesmo PIB.\n");
            soma_1 += PIB;
            soma_2 += PIB_2;
            break;
        case 4:
            if(pontos_turisticos > pontos_turisticos_2)
                printf("Carta 1 tem mais pontos turísticos.\n");
            else if(pontos_turisticos < pontos_turisticos_2)
                printf("Carta 2 tem mais pontos turísticos.\n");
            else
                printf("As duas cartas tem a mesma quantidade de pontos turísticos.\n");
            soma_1 += pontos_turisticos;
            soma_2 += pontos_turisticos_2;
            break;
        case 5:
            if(densidade_populacional > densidade_populacional_2)
                printf("Carta 1 tem maior densidade populacional.\n");
            else if(densidade_populacional < densidade_populacional_2)
                printf("Carta 2 tem maior densidade populacional.\n");
            else
                printf("As duas cartas tem a mesma densidade populacional.\n");
            soma_1 += densidade_populacional;
            soma_2 += densidade_populacional_2;
            break;
        case 6:
            if(pib_per_capita > pib_per_capita_2)
                printf("Carta 1 tem maior PIB per capita.\n");
            else if(pib_per_capita < pib_per_capita_2)
                printf("Carta 2 tem maior PIB per capita.\n");
            else
                printf("As duas cartas tem o mesmo PIB per capita.\n");
            soma_1 += pib_per_capita;
            soma_2 += pib_per_capita_2;
            break;
        default:
            printf("Opção inválida.\n");
            break;
    }

    // === SEGUNDO ATRIBUTO ===
    printf("\n### Menu de comparação do segundo atributo ###\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Pontos turisticos\n");
    printf("5. Densidade populacional\n");
    printf("6. PIB per capita\n");
    printf("Escolha uma opção: ");
    scanf("%d", &escolha_2);

    if (escolha_2 == escolha) {
        printf("Você já comparou esse atributo, escolha outro.\n");
    } else {
        switch (escolha_2) {
            case 1:
                if(populacao > populacao_2)
                    printf("Carta 1 tem maior população.\n");
                else if(populacao < populacao_2)
                    printf("Carta 2 tem maior população.\n");
                else
                    printf("As duas cartas tem a mesma população.\n");
                soma_1 += (double)populacao;
                soma_2 += (double)populacao_2;
                break;
            case 2:
                if(area > area_2)
                    printf("Carta 1 tem maior área.\n");
                else if(area < area_2)
                    printf("Carta 2 tem maior área.\n");
                else
                    printf("As duas cartas tem a mesma área.\n");
                soma_1 += area;
                soma_2 += area_2;
                break;
            case 3:
                if(PIB > PIB_2)
                    printf("Carta 1 tem maior PIB.\n");
                else if(PIB < PIB_2)
                    printf("Carta 2 tem maior PIB.\n");
                else
                    printf("As duas cartas tem o mesmo PIB.\n");
                soma_1 += PIB;
                soma_2 += PIB_2;
                break;
            case 4:
                if(pontos_turisticos > pontos_turisticos_2)
                    printf("Carta 1 tem mais pontos turísticos.\n");
                else if(pontos_turisticos < pontos_turisticos_2)
                    printf("Carta 2 tem mais pontos turísticos.\n");
                else
                    printf("As duas cartas tem a mesma quantidade de pontos turísticos.\n");
                soma_1 += pontos_turisticos;
                soma_2 += pontos_turisticos_2;
                break;
            case 5:
                if(densidade_populacional > densidade_populacional_2)
                    printf("Carta 1 tem maior densidade populacional.\n");
                else if(densidade_populacional < densidade_populacional_2)
                    printf("Carta 2 tem maior densidade populacional.\n");
                else
                    printf("As duas cartas tem a mesma densidade populacional.\n");
                soma_1 += densidade_populacional;
                soma_2 += densidade_populacional_2;
                break;
            case 6:
                if(pib_per_capita > pib_per_capita_2)
                    printf("Carta 1 tem maior PIB per capita.\n");
                else if(pib_per_capita < pib_per_capita_2)
                    printf("Carta 2 tem maior PIB per capita.\n");
                else
                    printf("As duas cartas tem o mesmo PIB per capita.\n");
                soma_1 += pib_per_capita;
                soma_2 += pib_per_capita_2;
                break;
            default:
                printf("Opção inválida.\n");
                break;
        }

        // === RESULTADO FINAL ===
        printf("\n--- Resultado Final ---\n");
        printf("Soma Carta 1: %.2f\n", soma_1);
        printf("Soma Carta 2: %.2f\n", soma_2);

        if(soma_1 > soma_2)
            printf("Carta 1 venceu!\n");
        else if(soma_2 > soma_1)
            printf("Carta 2 venceu!\n");
        else
            printf("Empate!\n");
    }

    return 0;
}