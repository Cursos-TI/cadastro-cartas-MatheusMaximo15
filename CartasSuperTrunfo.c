#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Desafio Super Trunfo - Paises
// Sistema Completo - Todos os Niveis (Novato, Aventureiro e Mestre)

int main() {
  // Declaracao das variaveis das cartas
  char estado1, estado2;
  char codigo1[4], codigo2[4];
  char cidade1[50], cidade2[50];
  unsigned long int populacao1, populacao2;
  float area1, area2;
  float pib1, pib2;
  int pontosTuristicos1, pontosTuristicos2;
  float densidadePopulacional1, densidadePopulacional2;
  float pibPerCapita1, pibPerCapita2;

  // Variaveis para o sistema de menus
  int modoJogo, opcao1, opcao2;
  int vitoriasCartas1, vitoriasCartas2;
  float valor1_carta1, valor1_carta2, valor2_carta1, valor2_carta2;
  float soma1, soma2;
  char nomeAtributo1[50], nomeAtributo2[50];

  // CADASTRO DAS CARTAS
  printf("========================================\n");
  printf("     SUPER TRUNFO - PAISES\n");
  printf("========================================\n\n");

  printf("Cadastro da Carta 1:\n");
  printf("Digite o estado: ");
  scanf("%c", &estado1);
  printf("Digite o codigo da carta: ");
  scanf("%s", codigo1);
  printf("Digite o nome da cidade: ");
  scanf("%s", cidade1);
  printf("Digite a populacao: ");
  scanf("%lu", &populacao1);
  printf("Digite a area em km2: ");
  scanf("%f", &area1);
  printf("Digite o PIB em bilhoes: ");
  scanf("%f", &pib1);
  printf("Digite o numero de pontos turisticos: ");
  scanf("%d", &pontosTuristicos1);

  printf("\nCadastro da Carta 2:\n");
  printf("Digite o estado: ");
  scanf(" %c", &estado2);
  printf("Digite o codigo da carta: ");
  scanf("%s", codigo2);
  printf("Digite o nome da cidade: ");
  scanf("%s", cidade2);
  printf("Digite a populacao: ");
  scanf("%lu", &populacao2);
  printf("Digite a area em km2: ");
  scanf("%f", &area2);
  printf("Digite o PIB em bilhoes: ");
  scanf("%f", &pib2);
  printf("Digite o numero de pontos turisticos: ");
  scanf("%d", &pontosTuristicos2);

  // CALCULOS
  densidadePopulacional1 = (float)populacao1 / area1;
  pibPerCapita1 = (pib1 * 1000000000) / populacao1;
  densidadePopulacional2 = (float)populacao2 / area2;
  pibPerCapita2 = (pib2 * 1000000000) / populacao2;

  // EXIBICAO DOS DADOS
  printf("\n========================================\n");
  printf("          DADOS DAS CARTAS\n");
  printf("========================================\n");

  printf("\nCarta 1:\n");
  printf("Estado: %c\n", estado1);
  printf("Codigo: %s\n", codigo1);
  printf("Cidade: %s\n", cidade1);
  printf("Populacao: %lu\n", populacao1);
  printf("Area: %.2f km2\n", area1);
  printf("PIB: %.2f bilhoes\n", pib1);
  printf("Pontos Turisticos: %d\n", pontosTuristicos1);
  printf("Densidade Populacional: %.2f hab/km2\n", densidadePopulacional1);
  printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

  printf("\nCarta 2:\n");
  printf("Estado: %c\n", estado2);
  printf("Codigo: %s\n", codigo2);
  printf("Cidade: %s\n", cidade2);
  printf("Populacao: %lu\n", populacao2);
  printf("Area: %.2f km2\n", area2);
  printf("PIB: %.2f bilhoes\n", pib2);
  printf("Pontos Turisticos: %d\n", pontosTuristicos2);
  printf("Densidade Populacional: %.2f hab/km2\n", densidadePopulacional2);
  printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

  // MENU PRINCIPAL - Escolha do modo de jogo
  printf("\n========================================\n");
  printf("      ESCOLHA O MODO DE COMPARACAO\n");
  printf("========================================\n");
  printf("1 - Modo Completo (compara todos os atributos)\n");
  printf("2 - Modo Simples (escolhe 1 atributo)\n");
  printf("3 - Modo Avancado (escolhe 2 atributos)\n");
  printf("Digite sua escolha: ");
  scanf("%d", &modoJogo);

  switch(modoJogo) {
    case 1:
      // MODO COMPLETO - Compara todos os atributos
      printf("\n========================================\n");
      printf("   MODO COMPLETO - TODOS OS ATRIBUTOS\n");
      printf("========================================\n");

      vitoriasCartas1 = 0;
      vitoriasCartas2 = 0;

      // Populacao
      printf("\n1. Populacao:\n");
      printf("   Carta 1 (%s): %lu\n", cidade1, populacao1);
      printf("   Carta 2 (%s): %lu\n", cidade2, populacao2);
      if (populacao1 > populacao2) {
        printf("   Vencedor: Carta 1 (%s)\n", cidade1);
        vitoriasCartas1++;
      } else if (populacao2 > populacao1) {
        printf("   Vencedor: Carta 2 (%s)\n", cidade2);
        vitoriasCartas2++;
      } else {
        printf("   Empate\n");
      }

      // Area
      printf("\n2. Area:\n");
      printf("   Carta 1 (%s): %.2f km2\n", cidade1, area1);
      printf("   Carta 2 (%s): %.2f km2\n", cidade2, area2);
      if (area1 > area2) {
        printf("   Vencedor: Carta 1 (%s)\n", cidade1);
        vitoriasCartas1++;
      } else if (area2 > area1) {
        printf("   Vencedor: Carta 2 (%s)\n", cidade2);
        vitoriasCartas2++;
      } else {
        printf("   Empate\n");
      }

      // PIB
      printf("\n3. PIB:\n");
      printf("   Carta 1 (%s): %.2f bilhoes\n", cidade1, pib1);
      printf("   Carta 2 (%s): %.2f bilhoes\n", cidade2, pib2);
      if (pib1 > pib2) {
        printf("   Vencedor: Carta 1 (%s)\n", cidade1);
        vitoriasCartas1++;
      } else if (pib2 > pib1) {
        printf("   Vencedor: Carta 2 (%s)\n", cidade2);
        vitoriasCartas2++;
      } else {
        printf("   Empate\n");
      }

      // Pontos Turisticos
      printf("\n4. Pontos Turisticos:\n");
      printf("   Carta 1 (%s): %d\n", cidade1, pontosTuristicos1);
      printf("   Carta 2 (%s): %d\n", cidade2, pontosTuristicos2);
      if (pontosTuristicos1 > pontosTuristicos2) {
        printf("   Vencedor: Carta 1 (%s)\n", cidade1);
        vitoriasCartas1++;
      } else if (pontosTuristicos2 > pontosTuristicos1) {
        printf("   Vencedor: Carta 2 (%s)\n", cidade2);
        vitoriasCartas2++;
      } else {
        printf("   Empate\n");
      }

      // Densidade Populacional (menor vence)
      printf("\n5. Densidade Populacional:\n");
      printf("   Carta 1 (%s): %.2f hab/km2\n", cidade1, densidadePopulacional1);
      printf("   Carta 2 (%s): %.2f hab/km2\n", cidade2, densidadePopulacional2);
      if (densidadePopulacional1 < densidadePopulacional2) {
        printf("   Vencedor: Carta 1 (%s) [menor densidade]\n", cidade1);
        vitoriasCartas1++;
      } else if (densidadePopulacional2 < densidadePopulacional1) {
        printf("   Vencedor: Carta 2 (%s) [menor densidade]\n", cidade2);
        vitoriasCartas2++;
      } else {
        printf("   Empate\n");
      }

      // PIB per Capita
      printf("\n6. PIB per Capita:\n");
      printf("   Carta 1 (%s): %.2f reais\n", cidade1, pibPerCapita1);
      printf("   Carta 2 (%s): %.2f reais\n", cidade2, pibPerCapita2);
      if (pibPerCapita1 > pibPerCapita2) {
        printf("   Vencedor: Carta 1 (%s)\n", cidade1);
        vitoriasCartas1++;
      } else if (pibPerCapita2 > pibPerCapita1) {
        printf("   Vencedor: Carta 2 (%s)\n", cidade2);
        vitoriasCartas2++;
      } else {
        printf("   Empate\n");
      }

      // Resultado Final
      printf("\n========================================\n");
      printf("         RESULTADO FINAL\n");
      printf("========================================\n");
      printf("Carta 1 (%s): %d vitorias\n", cidade1, vitoriasCartas1);
      printf("Carta 2 (%s): %d vitorias\n", cidade2, vitoriasCartas2);
      printf("----------------------------------------\n");
      if (vitoriasCartas1 > vitoriasCartas2) {
        printf("VENCEDOR GERAL: Carta 1 (%s)!\n", cidade1);
      } else if (vitoriasCartas2 > vitoriasCartas1) {
        printf("VENCEDOR GERAL: Carta 2 (%s)!\n", cidade2);
      } else {
        printf("RESULTADO: Empate geral!\n");
      }
      break;

    case 2:
      // MODO SIMPLES - Escolhe 1 atributo
      printf("\n========================================\n");
      printf("      MODO SIMPLES - 1 ATRIBUTO\n");
      printf("========================================\n");
      printf("Escolha o atributo para comparar:\n");
      printf("1 - Populacao\n");
      printf("2 - Area\n");
      printf("3 - PIB\n");
      printf("4 - Pontos Turisticos\n");
      printf("5 - Densidade Populacional\n");
      printf("6 - PIB per Capita\n");
      printf("Digite sua escolha: ");
      scanf("%d", &opcao1);

      printf("\n========================================\n");
      printf("          RESULTADO\n");
      printf("========================================\n");

      switch(opcao1) {
        case 1:
          printf("Atributo: Populacao\n");
          printf("Carta 1 (%s): %lu\n", cidade1, populacao1);
          printf("Carta 2 (%s): %lu\n", cidade2, populacao2);
          printf("Vencedor: %s\n", (populacao1 > populacao2) ? cidade1 :
                                   (populacao2 > populacao1) ? cidade2 : "Empate");
          break;
        case 2:
          printf("Atributo: Area\n");
          printf("Carta 1 (%s): %.2f km2\n", cidade1, area1);
          printf("Carta 2 (%s): %.2f km2\n", cidade2, area2);
          printf("Vencedor: %s\n", (area1 > area2) ? cidade1 :
                                   (area2 > area1) ? cidade2 : "Empate");
          break;
        case 3:
          printf("Atributo: PIB\n");
          printf("Carta 1 (%s): %.2f bilhoes\n", cidade1, pib1);
          printf("Carta 2 (%s): %.2f bilhoes\n", cidade2, pib2);
          printf("Vencedor: %s\n", (pib1 > pib2) ? cidade1 :
                                   (pib2 > pib1) ? cidade2 : "Empate");
          break;
        case 4:
          printf("Atributo: Pontos Turisticos\n");
          printf("Carta 1 (%s): %d\n", cidade1, pontosTuristicos1);
          printf("Carta 2 (%s): %d\n", cidade2, pontosTuristicos2);
          printf("Vencedor: %s\n", (pontosTuristicos1 > pontosTuristicos2) ? cidade1 :
                                   (pontosTuristicos2 > pontosTuristicos1) ? cidade2 : "Empate");
          break;
        case 5:
          printf("Atributo: Densidade Populacional (menor vence)\n");
          printf("Carta 1 (%s): %.2f hab/km2\n", cidade1, densidadePopulacional1);
          printf("Carta 2 (%s): %.2f hab/km2\n", cidade2, densidadePopulacional2);
          printf("Vencedor: %s\n", (densidadePopulacional1 < densidadePopulacional2) ? cidade1 :
                                   (densidadePopulacional2 < densidadePopulacional1) ? cidade2 : "Empate");
          break;
        case 6:
          printf("Atributo: PIB per Capita\n");
          printf("Carta 1 (%s): %.2f reais\n", cidade1, pibPerCapita1);
          printf("Carta 2 (%s): %.2f reais\n", cidade2, pibPerCapita2);
          printf("Vencedor: %s\n", (pibPerCapita1 > pibPerCapita2) ? cidade1 :
                                   (pibPerCapita2 > pibPerCapita1) ? cidade2 : "Empate");
          break;
        default:
          printf("Opcao invalida!\n");
          break;
      }
      break;

    case 3:
      // MODO AVANCADO - Escolhe 2 atributos
      printf("\n========================================\n");
      printf("     MODO AVANCADO - 2 ATRIBUTOS\n");
      printf("========================================\n");

      printf("\nPRIMEIRO MENU - Escolha o primeiro atributo:\n");
      printf("1 - Populacao\n");
      printf("2 - Area\n");
      printf("3 - PIB\n");
      printf("4 - Pontos Turisticos\n");
      printf("5 - Densidade Populacional\n");
      printf("6 - PIB per Capita\n");
      printf("Digite sua escolha: ");
      scanf("%d", &opcao1);

      printf("\nSEGUNDO MENU - Escolha o segundo atributo:\n");
      if (opcao1 != 1) printf("1 - Populacao\n");
      if (opcao1 != 2) printf("2 - Area\n");
      if (opcao1 != 3) printf("3 - PIB\n");
      if (opcao1 != 4) printf("4 - Pontos Turisticos\n");
      if (opcao1 != 5) printf("5 - Densidade Populacional\n");
      if (opcao1 != 6) printf("6 - PIB per Capita\n");
      printf("Digite sua escolha: ");
      scanf("%d", &opcao2);

      // Obter valores do atributo 1
      switch(opcao1) {
        case 1:
          valor1_carta1 = (float)populacao1;
          valor1_carta2 = (float)populacao2;
          strcpy(nomeAtributo1, "Populacao");
          break;
        case 2:
          valor1_carta1 = area1;
          valor1_carta2 = area2;
          strcpy(nomeAtributo1, "Area");
          break;
        case 3:
          valor1_carta1 = pib1;
          valor1_carta2 = pib2;
          strcpy(nomeAtributo1, "PIB");
          break;
        case 4:
          valor1_carta1 = (float)pontosTuristicos1;
          valor1_carta2 = (float)pontosTuristicos2;
          strcpy(nomeAtributo1, "Pontos Turisticos");
          break;
        case 5:
          valor1_carta1 = densidadePopulacional1;
          valor1_carta2 = densidadePopulacional2;
          strcpy(nomeAtributo1, "Densidade Populacional");
          break;
        case 6:
          valor1_carta1 = pibPerCapita1;
          valor1_carta2 = pibPerCapita2;
          strcpy(nomeAtributo1, "PIB per Capita");
          break;
      }

      // Obter valores do atributo 2
      switch(opcao2) {
        case 1:
          valor2_carta1 = (float)populacao1;
          valor2_carta2 = (float)populacao2;
          strcpy(nomeAtributo2, "Populacao");
          break;
        case 2:
          valor2_carta1 = area1;
          valor2_carta2 = area2;
          strcpy(nomeAtributo2, "Area");
          break;
        case 3:
          valor2_carta1 = pib1;
          valor2_carta2 = pib2;
          strcpy(nomeAtributo2, "PIB");
          break;
        case 4:
          valor2_carta1 = (float)pontosTuristicos1;
          valor2_carta2 = (float)pontosTuristicos2;
          strcpy(nomeAtributo2, "Pontos Turisticos");
          break;
        case 5:
          valor2_carta1 = densidadePopulacional1;
          valor2_carta2 = densidadePopulacional2;
          strcpy(nomeAtributo2, "Densidade Populacional");
          break;
        case 6:
          valor2_carta1 = pibPerCapita1;
          valor2_carta2 = pibPerCapita2;
          strcpy(nomeAtributo2, "PIB per Capita");
          break;
      }

      // Comparacoes individuais
      printf("\n========================================\n");
      printf("      COMPARACAO DOS ATRIBUTOS\n");
      printf("========================================\n");

      printf("\nAtributo 1: %s\n", nomeAtributo1);
      printf("  Carta 1 (%s): %.2f\n", cidade1, valor1_carta1);
      printf("  Carta 2 (%s): %.2f\n", cidade2, valor1_carta2);
      if (opcao1 == 5) {
        printf("  Vencedor: %s\n", (valor1_carta1 < valor1_carta2) ? cidade1 :
                                   (valor1_carta2 < valor1_carta1) ? cidade2 : "Empate");
      } else {
        printf("  Vencedor: %s\n", (valor1_carta1 > valor1_carta2) ? cidade1 :
                                   (valor1_carta2 > valor1_carta1) ? cidade2 : "Empate");
      }

      printf("\nAtributo 2: %s\n", nomeAtributo2);
      printf("  Carta 1 (%s): %.2f\n", cidade1, valor2_carta1);
      printf("  Carta 2 (%s): %.2f\n", cidade2, valor2_carta2);
      if (opcao2 == 5) {
        printf("  Vencedor: %s\n", (valor2_carta1 < valor2_carta2) ? cidade1 :
                                   (valor2_carta2 < valor2_carta1) ? cidade2 : "Empate");
      } else {
        printf("  Vencedor: %s\n", (valor2_carta1 > valor2_carta2) ? cidade1 :
                                   (valor2_carta2 > valor2_carta1) ? cidade2 : "Empate");
      }

      // Soma e resultado final
      soma1 = valor1_carta1 + valor2_carta1;
      soma2 = valor1_carta2 + valor2_carta2;

      printf("\n========================================\n");
      printf("         RESULTADO FINAL\n");
      printf("========================================\n");
      printf("Soma dos atributos:\n");
      printf("  Carta 1 (%s): %.2f\n", cidade1, soma1);
      printf("  Carta 2 (%s): %.2f\n", cidade2, soma2);
      printf("----------------------------------------\n");
      printf("VENCEDOR: %s\n", (soma1 > soma2) ? cidade1 :
                               (soma2 > soma1) ? cidade2 : "Empate");
      break;

    default:
      printf("\nOpcao invalida! Encerrando programa.\n");
      break;
  }

  printf("\n");
  system("pause");

  return 0;
}
