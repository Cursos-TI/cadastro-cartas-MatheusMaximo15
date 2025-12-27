#include <stdio.h>
#include <stdlib.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  // Declaração das variáveis da primeira carta
  char estado1;
  char codigo1[4];
  char cidade1[50];
  int populacao1;
  float area1;
  float pib1;
  int pontosTuristicos1;

  // Declaração das variáveis da segunda carta
  char estado2;
  char codigo2[4];
  char cidade2[50];
  int populacao2;
  float area2;
  float pib2;
  int pontosTuristicos2;

  // Área para entrada de dados
  // Cadastro da primeira carta
  printf("Cadastro da Carta 1:\n");
  printf("Digite o estado: ");
  scanf("%c", &estado1);
  printf("Digite o codigo da carta: ");
  scanf("%s", codigo1);
  printf("Digite o nome da cidade: ");
  scanf("%s", cidade1);
  printf("Digite a populacao: ");
  scanf("%d", &populacao1);
  printf("Digite a area em km2: ");
  scanf("%f", &area1);
  printf("Digite o PIB: ");
  scanf("%f", &pib1);
  printf("Digite o numero de pontos turisticos: ");
  scanf("%d", &pontosTuristicos1);

  // Cadastro da segunda carta
  printf("\nCadastro da Carta 2:\n");
  printf("Digite o estado: ");
  scanf(" %c", &estado2);
  printf("Digite o codigo da carta: ");
  scanf("%s", codigo2);
  printf("Digite o nome da cidade: ");
  scanf("%s", cidade2);
  printf("Digite a populacao: ");
  scanf("%d", &populacao2);
  printf("Digite a area em km2: ");
  scanf("%f", &area2);
  printf("Digite o PIB: ");
  scanf("%f", &pib2);
  printf("Digite o numero de pontos turisticos: ");
  scanf("%d", &pontosTuristicos2);

  // Área para exibição dos dados da cidade
  // Exibição da primeira carta
  printf("\nDados da Carta 1:\n");
  printf("Estado: %c\n", estado1);
  printf("Codigo da Carta: %s\n", codigo1);
  printf("Nome da Cidade: %s\n", cidade1);
  printf("Populacao: %d\n", populacao1);
  printf("Area: %.2f km2\n", area1);
  printf("PIB: %.2f bilhoes\n", pib1);
  printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);

  // Exibição da segunda carta
  printf("\nDados da Carta 2:\n");
  printf("Estado: %c\n", estado2);
  printf("Codigo da Carta: %s\n", codigo2);
  printf("Nome da Cidade: %s\n", cidade2);
  printf("Populacao: %d\n", populacao2);
  printf("Area: %.2f km2\n", area2);
  printf("PIB: %.2f bilhoes\n", pib2);
  printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);

  printf("\n");
  system("pause");

return 0;
}
