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
    int escolha;
    char *vencedor;
    
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
    
    // Menu interativo para escolha do atributo
    printf("\nEscolha um atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade Demográfica (menor vence)\n");
    scanf("%d", &escolha);
    
    // Switch para determinar o vencedor com if-else aninhado
    printf("\n--- Comparação de Cartas ---\n");
    switch (escolha) {
        case 1:
            printf("Comparando População\n");
            if (populacao1 > populacao2) {
                vencedor = nome_cidade1;
            } else if(populacao2 > populacao1) {
                vencedor = nome_cidade2;
            } else {
                vencedor = "Empate!";
            }
            printf("%s vs %s", nome_cidade1, nome_cidade2);
            printf("Atributo escolhido: População");
            printf("%s: %d", nome_cidade1, populacao1);
            printf("%s: %d", nome_cidade2, populacao2);
            break;
        case 2:
            printf("Comparando Área\n");
            if (area1 > area2) {
                vencedor = nome_cidade1;
            } else if(area2 > area1) {
                vencedor = nome_cidade2;
            } else {
                vencedor = "Empate!";
            }
            printf("%s vs %s\n", nome_cidade1, nome_cidade2);
            printf("Atributo escolhido: Área\n");
            printf("%s: %f\n", nome_cidade1, area1);
            printf("%s: %f\n", nome_cidade2, area2);
            break;
        case 3:
            printf("Comparando PIB\n");
            if (PIB1 > PIB2) {
                vencedor = nome_cidade1;
            } else if(PIB2 > PIB1){
                vencedor = nome_cidade2;
            } else {
                vencedor = "Empate!";
            }
            printf("%s vs %s\n", nome_cidade1, nome_cidade2);
            printf("Atributo escolhido: PIB\n");
            printf("%s: %f\n", nome_cidade1, PIB1);
            printf("%s: %f\n", nome_cidade2, PIB2);
            break;
        case 4:
            printf("Comparando Pontos Turísticos\n");
            if (pontos_turisticos1 > pontos_turisticos2) {
                vencedor = nome_cidade1;
            } else if(pontos_turisticos2 > pontos_turisticos1) {
                vencedor = nome_cidade2;
            } else {
                vencedor = "Empate!";
            }
            printf("%s vs %s\n", nome_cidade1, nome_cidade2);
            printf("Atributo escolhido: Pontos Turísticos\n");
            printf("%s: %d\n", nome_cidade1, pontos_turisticos1);
            printf("%s: %d\n", nome_cidade2, pontos_turisticos2);
            break;
        case 5:
            printf("Comparando Densidade Demográfica\n");
            if (densidade1 < densidade2) {
                vencedor = nome_cidade1;
            } else if (densidade2 < densidade1) {
                vencedor = nome_cidade2;
            } else {
                vencedor = "Empate!";
            }
            printf("%s vs %s\n", nome_cidade1, nome_cidade2);
            printf("Atributo escolhido: População\n");
            printf("%s: %f\n", nome_cidade1, densidade1);
            printf("%s: %f\n", nome_cidade2, densidade2);
            break;
        default:
            printf("Opção inválida!\n");
            break;
    }
    
    printf("Vencedor: %s\n", vencedor);
    return 0;
}
