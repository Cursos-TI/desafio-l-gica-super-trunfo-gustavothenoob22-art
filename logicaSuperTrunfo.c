#include <stdio.h>

int main() {
    // ================================================================
    // 1) Dados das duas cartas (pré-definidos)
    // ================================================================

    // Carta 1 - Mato Grosso
    char estado1[] = "MT";
    char codigo1[] = "MT001";
    char cidade1[] = "Mato Grosso";
    int populacao1 = 3600000;      // habitantes (exemplo aproximado)
    float area1 = 903366.0;        // km²
    float pib1 = 230000000.0;      // PIB hipotético (em milhões)
    int pontos_turisticos1 = 25;

    // Carta 2 - Espírito Santo
    char estado2[] = "ES";
    char codigo2[] = "ES001";
    char cidade2[] = "Espírito Santo";
    int populacao2 = 4100000;      // habitantes (exemplo aproximado)
    float area2 = 46077.0;         // km²
    float pib2 = 170000000.0;      // PIB hipotético (em milhões)
    int pontos_turisticos2 = 30;

    // ================================================================
    // 2) Cálculo da Densidade Populacional e do PIB per capita
    // ================================================================
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    float pibPerCapita1 = pib1 / populacao1;
    float pibPerCapita2 = pib2 / populacao2;

    // ================================================================
    // 3) Exibir os dados das cartas
    // ================================================================
    printf("\n===== Carta 1 =====\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.6f hab/km²\n", densidade1);
    printf("PIB per Capita: %.6f\n", pibPerCapita1);

    printf("\n===== Carta 2 =====\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.6f hab/km²\n", densidade2);
    printf("PIB per Capita: %.6f\n", pibPerCapita2);

    // ================================================================
    // 4) Escolher o atributo de comparação (feito no código)
    // ================================================================
    // Opções: 
    // 1 = População
    // 2 = Área
    // 3 = PIB
    // 4 = Densidade Populacional (menor vence)
    // 5 = PIB per Capita
    int atributo = 4; // <---- Mude o número para escolher o atributo

    // ================================================================
    // 5) Comparação das cartas
    // ================================================================
    printf("\n===== Comparação de Cartas =====\n");

    if (atributo == 1) {
        printf("Atributo escolhido: População\n");
        printf("%s: %d\n", cidade1, populacao1);
        printf("%s: %d\n", cidade2, populacao2);

        if (populacao1 > populacao2)
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        else if (populacao2 > populacao1)
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        else
            printf("Resultado: Empate!\n");

    } else if (atributo == 2) {
        printf("Atributo escolhido: Área\n");
        printf("%s: %.2f km²\n", cidade1, area1);
        printf("%s: %.2f km²\n", cidade2, area2);

        if (area1 > area2)
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        else if (area2 > area1)
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        else
            printf("Resultado: Empate!\n");

    } else if (atributo == 3) {
        printf("Atributo escolhido: PIB\n");
        printf("%s: %.2f\n", cidade1, pib1);
        printf("%s: %.2f\n", cidade2, pib2);

        if (pib1 > pib2)
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        else if (pib2 > pib1)
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        else
            printf("Resultado: Empate!\n");

    } else if (atributo == 4) {
        printf("Atributo escolhido: Densidade Populacional (menor vence)\n");
        printf("%s: %.6f hab/km²\n", cidade1, densidade1);
        printf("%s: %.6f hab/km²\n", cidade2, densidade2);

        if (densidade1 < densidade2)
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        else if (densidade2 < densidade1)
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        else
            printf("Resultado: Empate!\n");

    } else if (atributo == 5) {
        printf("Atributo escolhido: PIB per Capita\n");
        printf("%s: %.6f\n", cidade1, pibPerCapita1);
        printf("%s: %.6f\n", cidade2, pibPerCapita2);

        if (pibPerCapita1 > pibPerCapita2)
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        else if (pibPerCapita2 > pibPerCapita1)
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        else
            printf("Resultado: Empate!\n");

    } else {
        printf("Atributo inválido! Escolha de 1 a 5.\n");
    }

    return 0;
}
}
