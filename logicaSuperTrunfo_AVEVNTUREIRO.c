#include <stdio.h>
#include <stdlib.h>

int main() {
    // Dados da Carta 1
    char estado1;
    char codigo1[4];
    char cidade1[30];
    unsigned long int populacao1;
    float area1, pib1;
    int pontoturistico1;
    float densidade1, pibpercapita1;

    // Dados da Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[30];
    unsigned long int populacao2;
    float area2, pib2;
    int pontoturistico2;
    float densidade2, pibpercapita2;

    // Leitura da Carta 1
    printf("Cadastro da Carta 1\n");
    printf("Informe o estado (letra A a H): ");
    scanf(" %c", &estado1);
    printf("Informe o codigo da carta (ex:A01): ");
    scanf("%s", codigo1);
    printf("Informe o nome da cidade: ");
    scanf(" %s", cidade1);
    printf("Informe a populacao: ");
    scanf("%lu", &populacao1);
    printf("Informe a area da cidade (em km2): ");
    scanf("%f", &area1);
    printf("Informe o PIB da cidade: ");
    scanf("%f", &pib1);
    printf("Informe o numero de pontos turisticos: ");
    scanf("%d", &pontoturistico1);

    // Leitura da Carta 2
    printf("\nCadastro da Carta 2\n");
    printf("Informe o estado (letra A a H): ");
    scanf(" %c", &estado2);
    printf("Informe o codigo da carta (ex:A02): ");
    scanf("%s", codigo2);
    printf("Informe o nome da cidade: ");
    scanf(" %s", cidade2);
    printf("Informe a populacao: ");
    scanf("%lu", &populacao2);
    printf("Informe a area da cidade (em km2): ");
    scanf("%f", &area2);
    printf("Informe o PIB da cidade: ");
    scanf("%f", &pib2);
    printf("Informe o numero de pontos turisticos: ");
    scanf("%d", &pontoturistico2);

    // Cálculos
    densidade1 = populacao1 / area1;
    pibpercapita1 = pib1 / populacao1;

    densidade2 = populacao2 / area2;
    pibpercapita2 = pib2 / populacao2;

    // Menu de escolha de atributo
    int opcao;
    printf("\nEscolha o atributo para comparar:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Populacional\n");
    printf("Digite a opcao: ");
    scanf("%d", &opcao);

    printf("\nComparando %s (Carta 1) com %s (Carta 2)\n", cidade1, cidade2);

    // Comparações com base na escolha do jogador
    switch (opcao) {
        case 1: 
            printf("Atributo: Populacao\n");
            printf("%s: %lu\n", cidade1, populacao1);
            printf("%s: %lu\n", cidade2, populacao2);
            if (populacao1 > populacao2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            } else if (populacao2 > populacao1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
        case 2: 
            printf("Atributo: Area\n");
            printf("%s: %.2f\n", cidade1, area1);
            printf("%s: %.2f\n", cidade2, area2);
            if (area1 > area2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            } else if (area2 > area1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
        case 3: 
            printf("Atributo: PIB\n");
            printf("%s: %.2f\n", cidade1, pib1);
            printf("%s: %.2f\n", cidade2, pib2);
            if (pib1 > pib2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            } else if (pib2 > pib1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
        case 4: 
            printf("Atributo: Pontos Turisticos\n");
            printf("%s: %d\n", cidade1, pontoturistico1);
            printf("%s: %d\n", cidade2, pontoturistico2);
            if (pontoturistico1 > pontoturistico2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            } else if (pontoturistico2 > pontoturistico1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
        case 5: // Densidade (MENOR vence)
            printf("Atributo: Densidade Populacional (MENOR vence!)\n");
            printf("%s: %.2f\n", cidade1, densidade1);
            printf("%s: %.2f\n", cidade2, densidade2);
            if (densidade1 < densidade2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            } else if (densidade2 < densidade1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
        default:
            printf("Opcao invalida! Tente novamente.\n");
    }

    return 0;
}
