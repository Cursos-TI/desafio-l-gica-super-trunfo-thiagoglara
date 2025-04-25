#include<stdio.h>

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

        // Exibição resumida
        printf("\nDados resumidos:\n");
        printf("Carta 1 - %s (%c): Populacao = %lu\n", cidade1, estado1, populacao1);
        printf("Densidade Populacional: %.2f \n", densidade1);
        printf("PIB per capita: %.2f \n", pibpercapita1);
        printf("Carta 2 - %s (%c): Populacao = %lu\n", cidade2, estado2, populacao2);
        printf("Densidade Populacional: %.2f \n", densidade2);
        printf("PIB per capita: %.2f \n", pibpercapita2);
        

        // Comparação por atributo: POPULAÇÃO
        printf("\nComparacao de cartas (Atributo: Populacao):\n");

        if (populacao1 > populacao2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        } else if (populacao2 > populacao1) {
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        } else {
            printf("Resultado: Empate!\n");
        }

    return 0;
}
