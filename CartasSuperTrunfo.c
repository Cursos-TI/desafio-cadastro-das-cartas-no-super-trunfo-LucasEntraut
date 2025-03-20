#include <stdio.h>

int main() {
    // Informações carta 1
    char carta[4] = ""; // Código da carta (ex: A01) + '\0'
    char estado[30];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;

    // Informações carta 2
    char carta2[4] = "";
    char estado2[30];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;

    // Solicitar os dados da carta 1
    printf("Digite os dados da carta 1\n");
    printf("--------------------------------\n");
    printf("Digite o código da carta (ex: C03; F01): ");
    scanf("%3s", carta); // Lê apenas 3 caracteres

    printf("Digite o estado: ");
    scanf(" %[^\n]", estado); // %[^\n] lê até a quebra de linha

    printf("Digite a cidade: ");
    scanf(" %[^\n]", cidade);

    printf("Digite a população: ");
    scanf("%d", &populacao);

    printf("Digite a área (em km²): ");
    scanf("%f", &area);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos);

    // Calcular densidade populacional e PIB per capita
    densidadePopulacional = (float)populacao / area;
    pibPerCapita = (float)(pib * 1000000000) / populacao;

    printf("A Densidade populacional é: %.2f habitantes por km²\n", densidadePopulacional);
    printf("O PIB per capita é: R$ %.2f\n", pibPerCapita); 

    /* informações necessárias para teste, referente a carta 1.
        
    Código da carta: A01
    Estado: Paraná
    Cidade: Curitiba
    População: 1774000 de habitantes
    Área: 432 KM²
    PIB: R$98 bilhões
    Pontos turísticos: 70 pontos
    */

    // Solicitar os dados da carta 2
    printf("\nDigite os dados da carta 2\n");
    printf("--------------------------------\n");
    printf("Digite o código da carta (ex: C03; F01): ");
    scanf("%3s", carta2);

    printf("Digite o estado: ");
    scanf(" %[^\n]", estado2);

    printf("Digite a cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite a área (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Calcular densidade populacional e PIB per capita para a carta 2
    densidadePopulacional2 = (float)populacao2 / area2;
    pibPerCapita2 = (float)(pib2 * 1000000000) / populacao2;

    printf("A Densidade populacional é: %.2f habitantes por clekm²\n", densidadePopulacional2);
    printf("O PIB per capita é: R$ %.2f\n", pibPerCapita2);

    /* informações necessárias para teste, referente a carta 2.
        
    Código da carta: B03
    Estado: São Paulo
    Cidade: São Paulo
    População: 12396372 de habitantes
    Área: 1521,11 km²
    PIB: R$829,3 bilhões 
    Pontos turísticos: 760 pontos
    */

    // Exibir os dados da carta 1
    printf("\n####  DADOS DA CARTA 1  ####\n");
    printf("--------------------------------\n");
    printf("🃏  O código da carta é: %s\n", carta);
    printf("📍 O estado é: %s\n", estado);
    printf("🏙️  A cidade é: %s\n", cidade);
    printf("👤 A população é: %d de habitantes\n", populacao);
    printf("📏 A área é: %.2f km²\n", area);
    printf("📈 O PIB é: R$ %.2f bilhões\n", pib);
    printf("⛲ A quantidade de pontos turísticos é: %d pontos\n", pontosTuristicos);
    printf("📊 Densidade populacional: %.2f hab/km²\n", densidadePopulacional);
    printf("💰 PIB per capita: R$ %.2f\n", pibPerCapita);

    // Exibir os dados da carta 2
    printf("\n####  DADOS DA CARTA 2  ####\n");
    printf("--------------------------------\n");
    printf("🃏  O código da carta é: %s\n", carta2);
    printf("📍 O estado é: %s\n", estado2);
    printf("🏙️  A cidade é: %s\n", cidade2);
    printf("👤 A população é: %d de habitantes\n", populacao2);
    printf("📏 A área é: %.2f km²\n", area2);
    printf("📈 O PIB é: R$ %.2f bilhões\n", pib2);
    printf("⛲ A quantidade de pontos turísticos é: %d pontos\n", pontosTuristicos2);
    printf("📊 Densidade populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("💰 PIB per capita: R$ %.2f\n", pibPerCapita2);

    return 0;
}