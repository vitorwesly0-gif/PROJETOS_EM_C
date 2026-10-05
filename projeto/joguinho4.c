#include <stdio.h>

int main() {
    char estado[2], codigo[4], nome_cidade[50];
    char estado_2[2], codigo_2[4], nome_cidade_2[50];
    int pontos_turisticos, pontos_turisticos_2,escolha,escolha_2;
    double PIB, PIB_2;                        
    double pib_per_capita, pib_per_capita_2;    
    float area, area_2;
    float densidade_populacional, densidade_populacional_2;
    signed long int populacao, populacao_2;
    int placar_1 = 0, placar_2 = 0;

    // === PRIMEIRA CARTA ===
    //enttrada de dados da primeira carta

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

    printf("### Menu de comparação ###\n");
    printf("1. populacao\n");
    printf("2. area\n");
    printf("3. PIB\n");
    printf("4. Pontos turisticos\n");
    printf("5. Densidade populacional\n");
    printf("6. PIB per capita\n");
    printf("Escolha uma opção: ");
    scanf("%d", &escolha);

    switch (escolha){
        case 1:
            if(populacao > populacao_2){
                printf("Carta 1 tem maior população.\n");
                placar_1++;
            } else if (populacao < populacao_2){
                printf("Carta 2 tem maior população.\n");
                placar_2++;
            } else {
                printf("As duas cartas tem a mesma população.\n");
            }
            break;
        case 2:
            if(area > area_2){
                printf("Carta 1 tem maior área.\n");
                placar_1++;
            } else if (area < area_2){
                printf("Carta 2 tem maior área.\n");
                placar_2++;
            } else {
                printf("As duas cartas tem a mesma área.\n");
            }
            break;
        case 3:
            if(PIB > PIB_2){
                printf("Carta 1 tem maior PIB.\n");
                placar_1++;
            } else if (PIB < PIB_2){
                printf("Carta 2 tem maior PIB.\n");
                placar_2++;
            } else {
                printf("As duas cartas tem o mesmo PIB.\n");
            }
            break;
        case 4:
            if(pontos_turisticos > pontos_turisticos_2){
                printf("Carta 1 tem mais pontos turísticos.\n");
                placar_1++;
            } else if (pontos_turisticos < pontos_turisticos_2){
                printf("Carta 2 tem mais pontos turísticos.\n");
                placar_2++;
            } else {
                printf("As duas cartas tem a mesma quantidade de pontos turísticos.\n");
            }
            break;
        case 5:
             if(densidade_populacional > densidade_populacional_2){
                printf("Carta 1 tem maior densidade populacional.\n");
                placar_1++;
            } else if (densidade_populacional < densidade_populacional_2){
                printf("Carta 2 tem maior densidade populacional.\n");
                placar_2++;
            } else {
                printf("As duas cartas tem a mesma densidade populacional.\n");
            }
             break;
        case 6:
             if(pib_per_capita > pib_per_capita_2){
                printf("Carta 1 tem maior PIB per capita.\n");
                placar_1++;
            } else if (pib_per_capita < pib_per_capita_2){
                printf("Carta 2 tem maior PIB per capita.\n");
                placar_2++;
            } else {
                printf("As duas cartas tem o mesmo PIB per capita.\n");
             }
             break;
        default:
             printf("Opção inválida.\n");
             break;

        }
    
    printf("### Menu de comparação do segundo atributo ###\n");
    printf("1. populacao\n");
    printf("2. area\n");
    printf("3. PIB\n");
    printf("4. Pontos turisticos\n");
    printf("5. Densidade populacional\n");
    printf("6. PIB per capita\n");
    printf("Escolha uma opção: ");
    scanf("%d", &escolha_2);


    
        if (escolha_2 == escolha){
                printf("Você já comparou esse atributo, escolha outro.\n");
            }else{
                switch (escolha_2){
                    case 1:
                        if(populacao > populacao_2){
                            printf("Carta 1 tem maior população.\n");
                            placar_1++;
                        } else if (populacao < populacao_2){
                            printf("Carta 2 tem maior população.\n");
                            placar_2++;
                        } else {
                            printf("As duas cartas tem a mesma população.\n");
                        }
                        break;
                    case 2:
                        if(area > area_2){
                            printf("Carta 1 tem maior área.\n");
                            placar_1++;
                        } else if (area < area_2){
                            printf("Carta 2 tem maior área.\n");
                            placar_2++;
                        } else {
                            printf("As duas cartas tem a mesma área.\n");
                        }
                        break;
                    case 3:
                        if(PIB > PIB_2){
                            printf("Carta 1 tem maior PIB.\n");
                            placar_1++;
                        } else if (PIB < PIB_2){
                            printf("Carta 2 tem maior PIB.\n");
                            placar_2++;
                        } else {
                            printf("As duas cartas tem o mesmo PIB.\n");
                        }
                        break;
                    case 4:
                        if(pontos_turisticos > pontos_turisticos_2){
                            printf("Carta 1 tem mais pontos turísticos.\n");
                            placar_1++;
                        } else if (pontos_turisticos < pontos_turisticos_2){
                            printf("Carta 2 tem mais pontos turísticos.\n");
                            placar_2++;
                        } else {
                            printf("As duas cartas tem a mesma quantidade de pontos turísticos.\n");
                        }
                        break;
                    case 5:
                         if(densidade_populacional > densidade_populacional_2){
                            printf("Carta 1 tem maior densidade populacional.\n");
                            placar_1++;
                        } else if (densidade_populacional < densidade_populacional_2){
                            printf("Carta 2 tem maior densidade populacional.\n");
                            placar_2++;
                        } else {
                            printf("As duas cartas tem a mesma densidade populacional.\n");
                        }
                         break;
                    case 6:
                         if(pib_per_capita > pib_per_capita_2){
                            printf("Carta 1 tem maior PIB per capita.\n");
                            placar_1++;
                        } else if (pib_per_capita < pib_per_capita_2){
                            printf("Carta 2 tem maior PIB per capita.\n");
                            placar_2++;
                        } else {
                            printf("As duas cartas tem o mesmo PIB per capita.\n");
                         }
                            break;
                    default:
                         printf("Opção inválida.\n");
                         break;    
        
            
                }   
        }    
printf("\n--- Resultado Final ---\n");
if(placar_1 > placar_2){
    printf("Carta 1 venceu!\n");
} else if (placar_2 > placar_1){
    printf("Carta 2 venceu!\n");
} else {
    printf("Empate!\n");
}       
        
    return 0;
}