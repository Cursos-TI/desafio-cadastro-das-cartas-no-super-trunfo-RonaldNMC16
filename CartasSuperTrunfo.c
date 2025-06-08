#include <stdio.h>

int main() {
    char Estado1[30], cidade1[30], Codcarta1[15];
    char Estado2[30], cidade2[30], Codcarta2[15];

    unsigned long int populacao1, populacao2;
    int Numero_P_T1, Numero_P_T2;
    float Area1, PIB1, Area2, PIB2;

    // Entrada da primeira cidade
    printf("Digite o primeiro estado: ");
    scanf(" %s", Estado1);

    printf("Digite sua cidade: ");
    scanf(" %s", cidade1);

    printf("Insira o código da carta: ");
    scanf(" %s", Codcarta1);  

    printf("Qual a população da sua cidade?: ");
    scanf("%lu", &populacao1);

    printf("Qual a área em km² da sua cidade?: ");
    scanf("%f", &Area1);

    printf("Qual o PIB da sua cidade?: ");
    scanf("%f", &PIB1);

    printf("Qual o número de pontos turísticos da sua cidade?: ");
    scanf("%d", &Numero_P_T1);

    // Entrada da segunda cidade
    printf("\nDigite o segundo estado: ");
    scanf(" %s", Estado2);  

    printf("Digite sua cidade: ");
    scanf(" %s", cidade2);

    printf("Insira o código da carta: ");
    scanf(" %s", Codcarta2);

    printf("Qual a população da sua cidade?: ");
    scanf("%lu", &populacao2);

    printf("Qual a área em km² da sua cidade?: ");
    scanf("%f", &Area2);

    printf("Qual o PIB da sua cidade?: ");
    scanf("%f", &PIB2);

    printf("Qual o número de pontos turísticos da sua cidade?: ");
    scanf("%d", &Numero_P_T2);

    // Cálculos 
    float densidade1 = populacao1 / Area1;
    float densidade2 = populacao2 / Area2;

    float ppc1 = PIB1 / populacao1;
    float ppc2 = PIB2 / populacao2;

    float superpoder1 = populacao1 + Area1 + PIB1 + Numero_P_T1 + ppc1 + (1 / densidade1);
    float superpoder2 = populacao2 + Area2 + PIB2 + Numero_P_T2 + ppc2 + (1 / densidade2);

    // Exibição dos dados
    printf("\n\n=== DADOS DAS CIDADES ===\n");

    // Cidade 1
    printf("\n--- CIDADE 1 ---\n");
    printf("Estado: %s\n", Estado1);
    printf("Cidade: %s\n", cidade1);
    printf("Código da carta: %s\n", Codcarta1);
    printf("População: %lu habitantes\n", populacao1);
    printf("Área: %.2f km²\n", Area1);
    printf("PIB: R$ %.2f\n", PIB1);
    printf("Pontos turísticos: %d\n", Numero_P_T1);
    printf("PIB per capita: R$ %.2f\n", ppc1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade1);
    printf("Super Poder: %.2f\n", superpoder1);

    // Cidade 2
    printf("\n--- CIDADE 2 ---\n");
    printf("Estado: %s\n", Estado2);
    printf("Cidade: %s\n", cidade2);
    printf("Código da carta: %s\n", Codcarta2);
    printf("População: %lu habitantes\n", populacao2);
    printf("Área: %.2f km²\n", Area2);
    printf("PIB: R$ %.2f\n", PIB2);
    printf("Pontos turísticos: %d\n", Numero_P_T2);
    printf("PIB per capita: R$ %.2f\n", ppc2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade2);
    printf("Super Poder: %.2f\n", superpoder2);

    // Comparações
    printf("\n\n=== Comparação de Cartas ===\n");
    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", Area1 > Area2);
    printf("PIB: Carta 1 venceu (%d)\n", PIB1 > PIB2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", Numero_P_T1 > Numero_P_T2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2); // menor vence
    printf("PIB per Capita: Carta 1 venceu (%d)\n", ppc1 > ppc2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superpoder1 > superpoder2);

    return 0;
}
