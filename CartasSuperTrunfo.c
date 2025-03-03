#include <stdio.h>
#include <string.h>

int main() {
    // Declaração das variáveis para as duas cartas
    char estado1, estado2;
    char codigo_carta1[10], codigo_carta2[10];
    char nome_cidade1[50], nome_cidade2[50];
    int populacao1, populacao2, pontos_turisticos1, pontos_turisticos2;
    float area1, area2, PIB1, PIB2;
    float densidade1, densidade2, PIB_per_capita1, PIB_per_capita2;
    float super_poder1, super_poder2;
    
    // Entrada de dados para a primeira carta
    printf("Cadastro da primeira carta:\n");
    printf("Estado (A a H): ");
    scanf(" %c", &estado1);
    printf("Código da carta (ex: A01, B02): ");
    scanf("%s", codigo_carta1);
    printf("Nome da cidade: ");
    scanf("%s", nome_cidade1);
    printf("População da cidade: ");
    scanf("%d", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB da cidade: ");
    scanf("%f", &PIB1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // Entrada de dados para a segunda carta
    printf("Cadastro da segunda carta:\n");
    printf("Estado (A a H): ");
    scanf(" %c", &estado2);
    printf("Código da carta (ex: A01, B02): ");
    scanf("%s", codigo_carta2);
    printf("Nome da cidade: ");
    scanf("%s", nome_cidade2);
    printf("População da cidade: ");
    scanf("%d", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB da cidade: ");
    scanf("%f", &PIB2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // Cálculo das propriedades
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;
    PIB_per_capita1 = PIB1 / populacao1;
    PIB_per_capita2 = PIB2 / populacao2;

    // Escolha fixa do atributo para comparação (exemplo: População)
    char atributo[30] = "População";
    int valor1 = populacao1;
    int valor2 = populacao2;
    char *vencedor;

    // Comparação baseada no atributo escolhido
    printf("\n--- Comparação de Cartas ---\n");
    printf("Atributo escolhido: %s\n", atributo);
    printf("Carta 1 - %s: %d\n", nome_cidade1, valor1);
    printf("Carta 2 - %s: %d\n", nome_cidade2, valor2);

    if (valor1 > valor2) {
        vencedor = nome_cidade1;
    } else if (valor2 > valor1) {
        vencedor = nome_cidade2;
    } else {
        vencedor = "Empate";
    }

    printf("Resultado: %s venceu!\n", vencedor);
    return 0;
}
