#include <stdio.h>
#include <string.h>

int main() {
    char estado1, estado2;
    char codigo_carta1[10], codigo_carta2[10];
    char nome_cidade1[50], nome_cidade2[50];
    int populacao1, populacao2, pontos_turisticos1, pontos_turisticos2;
    float area1, area2, PIB1, PIB2;
    float densidade1, densidade2;
    int escolha1, escolha2;
    float valor1_c1, valor1_c2, valor2_c1, valor2_c2, soma1, soma2;
    char *vencedor;
    
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
    
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;
    
    printf("\nEscolha o primeiro atributo para comparar:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos turísticos\n5 - Densidade Demográfica (menor vence)\n");
    scanf("%d", &escolha1);
    
    printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
    scanf("%d", &escolha2);
    
    if (escolha2 == escolha1) {
        printf("Erro: O segundo atributo deve ser diferente do primeiro.\n");
        return 1;
    }
    
    switch (escolha1) {
        case 1: valor1_c1 = populacao1; valor1_c2 = populacao2; break;
        case 2: valor1_c1 = area1; valor1_c2 = area2; break;
        case 3: valor1_c1 = PIB1; valor1_c2 = PIB2; break;
        case 4: valor1_c1 = pontos_turisticos1; valor1_c2 = pontos_turisticos2; break;
        case 5: valor1_c1 = densidade1; valor1_c2 = densidade2; break;
    }
    
    switch (escolha2) {
        case 1: valor2_c1 = populacao1; valor2_c2 = populacao2; break;
        case 2: valor2_c1 = area1; valor2_c2 = area2; break;
        case 3: valor2_c1 = PIB1; valor2_c2 = PIB2; break;
        case 4: valor2_c1 = pontos_turisticos1; valor2_c2 = pontos_turisticos2; break;
        case 5: valor2_c1 = densidade1; valor2_c2 = densidade2; break;
    }
    
    soma1 = valor1_c1 + valor2_c1;
    soma2 = valor1_c2 + valor2_c2;
    
    vencedor = (soma1 > soma2) ? nome_cidade1 : (soma2 > soma1) ? nome_cidade2 : "Empate!";
    
    printf("\n--- Resultado da Comparação ---\n");
    printf("%s vs %s\n", nome_cidade1, nome_cidade2);
    printf("%s: %.2f + %.2f = %.2f\n", nome_cidade1, valor1_c1, valor2_c1, soma1);
    printf("%s: %.2f + %.2f = %.2f\n", nome_cidade2, valor1_c2, valor2_c2, soma2);
    printf("Vencedor: %s\n", vencedor);
    
    return 0;
}
