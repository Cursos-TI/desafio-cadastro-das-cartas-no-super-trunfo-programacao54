#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("*** Jogo Super Trunfo ***\n");
    printf("Informações da Carta 1\n");
    printf("Digite o nome de uma cidade:\n");
    scanf("%s", &cidade1);
    printf("Digite a população da cidade:\n");
    scanf("%d",&populacao1);
    printf("Digite a área da cidade:\n");
    scanf("%f", &area1);
    print("Digite o PIB:\n");
    scanf("%f", &pib1);
    print("Digite o número de pontos turísticos:\n");
    scanf("%d", &pontosTuristicos1 );
    printf("Informações da Carta 2\n");
    printf("Digite o nome de uma cidade:\n");
    scanf("%s", &cidade2);
    printf("Digite a população da cidade:\n");
    scanf("%d", &populacao2);
    printf("Digite a área da cidade:\n");
    scanf("%f", &area2);
    printf("Digite o PIB:\n");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &pontosTuristicos2);
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("Carta 1\n");
    printf("Estado: A\n");
    printf("Código A01\n");
    printf("Nome da cidade:%s\n", cidade1);
    printf("População:%d\n",populacao1);
    printf("Área:%f\n", area1);
    printf("PIB:%f\n", pib1);
    printf("Número de Pontos Turísticos:%d\n", pontosTuristicos1);
    printf("Carta 2\n");
    printf("Estado:B\n");
    printf("Código:B02\n");
    printf("Nome da cidade:%s\n", cidade2);
    printf("População:%d\n", populacao2);
    printf("Área:%f\n", area2);
    printf("PIB:%f\n", pib2);
    printf("Número de Pontos Turísticos:%d\n", pontosTuristicos2);

    return 0;
}
