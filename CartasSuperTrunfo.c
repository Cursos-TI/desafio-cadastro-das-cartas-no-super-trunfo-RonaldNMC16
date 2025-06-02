#include <stdio.h>

int main() {
    char Estado1[30], cidade1[30], Codcarta1[15];
    int populacao1, Numero_P_T1;
    float Area1, PIB1;

    char Estado2[30], cidade2[30], Codcarta2[15];
    int populacao2, Numero_P_T2;
    float Area2, PIB2;

    // Primeira cidade 
    printf("Digite o primeiro estado: ");
    scanf(" %s", Estado1);

    printf("Digite sua cidade: ");
    scanf(" %s", cidade1);

    printf("Insira o código da carta: ");
    scanf(" %s", Codcarta1);  

    printf("Qual a população da sua cidade?: ");
    scanf("%d", &populacao1);

    printf("Qual a área em km² da sua cidade?: ");
    scanf("%f", &Area1);

    printf("Qual o PIB da sua cidade?: ");
    scanf("%f", &PIB1);

    printf("Qual o número de pontos turísticos da sua cidade?: ");
    scanf("%d", &Numero_P_T1);

    // Segunda cidade 
    printf("\nDigite o segundo estado: ");
    scanf(" %s", Estado2);  

    printf("Digite sua cidade: ");
    scanf(" %s", cidade2);

    printf("Insira o código da carta: ");
    scanf(" %s", Codcarta2);

    printf("Qual a população da sua cidade?: ");
    scanf("%d", &populacao2);

    printf("Qual a área em km² da sua cidade?: ");
    scanf("%f", &Area2);

    printf("Qual o PIB da sua cidade?: ");
    scanf("%f", &PIB2);

    printf("Qual o número de pontos turísticos da sua cidade?: ");
    scanf("%d", &Numero_P_T2);

    // Exibir os dados das cidades
    printf("\n\n=== DADOS DAS CIDADES ===\n");

    // Cidade 1
    printf("\n--- CIDADE 1 ---\n");
    printf("Estado: %s\n", Estado1);
    printf("Cidade: %s\n", cidade1);
    printf("Código da carta: %s\n", Codcarta1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", Area1);
    printf("PIB: R$ %.2f\n", PIB1);
    printf("Pontos turísticos: %d\n", Numero_P_T1);
    printf("PIB per capita: R$ %.2f\n", PIB1 / populacao1);
    printf("Densidade populacional: %.2f hab/km²\n", populacao1 / Area1);

    // Cidade 2
    printf("\n--- CIDADE 2 ---\n");
    printf("Estado: %s\n", Estado2);
    printf("Cidade: %s\n", cidade2);
    printf("Código da carta: %s\n", Codcarta2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", Area2);
    printf("PIB: R$ %.2f\n", PIB2);
    printf("Pontos turísticos: %d\n", Numero_P_T2);
    printf("PIB per capita: R$ %.2f\n", PIB2 / populacao2);
    printf("Densidade populacional: %.2f hab/km²\n", populacao2 / Area2);

    return 0;
}
