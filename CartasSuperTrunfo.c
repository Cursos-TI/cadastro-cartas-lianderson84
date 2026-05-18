#include <stdio.h>

int main() {
  char estado1[3], estado2[3]; 
  char codcarta1[10], codcarta2[10]; 
  char cidade1[50], cidade2[50];
  int pop1, pop2; 
  int pontostur1, pontostur2;
  float area1, area2;
  float pib1, pib2;

  printf("Digite a sigla do estado da primeira carta: ");
  scanf("%s", &estado1);

  printf("Digite o código da primeira carta: ");
  scanf("%s", &codcarta1);

  printf("Digite a cidade da primeira carta: ");
  scanf("%s", &cidade1);

  printf("Digite a população total da primeira cidade: ");
  scanf("%i", &pop1);

  printf("Digite quantos pontos turisticos tem a primeira cidade: ");
  scanf("%i", &pontostur1);

  printf("Digite a área da primeira cidade: ");
  scanf("%f", &area1);

  printf("Digite o PIB da primeira cidade: ");
  scanf("%f", &pib1);

  printf("Carta 1: \n ESTADO: %s\n CÓDIGO: %s\n CIDADE: %s\n POPULAÇÃO: %i\n PONTOS TURÍSTICOS: %i\n ÁREA: %f\n PIB: %f\n", 
    estado1, codcarta1, cidade1, pop1, pontostur1, area1, pib1);

return 0;
} 
