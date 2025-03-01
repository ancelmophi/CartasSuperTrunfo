#include <stdio.h>

// Desafio Super Trunfo - Países

//Função para a entrada de dados
void entrada_dados(char estado, char codigo_carta[], char cidade[], int populacao, int pontos_turisticos, float area, float pib ) 
{

  printf("Digite o estado: ");
  scanf("%c", &estado);

  printf("Digite o código da carta: ");
  scanf("%s", &codigo_carta);

  printf("Digite o nome da cidade: ");
  scanf("%s", &cidade);

  printf("Digite a população: ");
  scanf("%d", &populacao);

  printf("Digite a área: ");
  scanf("%f", &area);

  printf("Digite o PIB: ");
  scanf("%f",&pib);

  printf("Digite o número de pontos turísticos: ");
  scanf("%d", &pontos_turisticos);

}

//Função para saída de dados
void saida_dados (char estado, char codigo_carta[], char cidade[], int populacao, int pontos_turisticos, float area, float pib ) 
{

  printf("Estado: %c\n ", estado);

  printf("Código da carta: %s\n ", codigo_carta);

  printf("Nome da cidade: %s\n ", cidade);

  printf("População: %d\n", populacao);

  printf("Área: %f km²\n", area);

  printf("PIB: %f bilhões de reais\n", pib);

  printf("Número de pontos turísticos: %d\n", pontos_turisticos);

  

}

//Função para o cálculo da densidade populacional
float densidade (int populacao, float area )
{
  return populacao / area;
}

//Função para o cálculo do PIB per capita
float percapita (float pib, int populacao) 
{
  return pib / populacao;
}


int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado1, estado2, codigo_carta1[20], codigo_carta2[20], cidade1, cidade2;
  int populacao1, populacao2, pontos_turisticos1, pontos_turisticos2;
  float area1, area2, pib1, pib2, densidade_populacional1, densidade_populacional2, pib_percapita1, pib_percapita2;

  // Área para entrada de dados
  printf("Digite os dados referentes a carta 1\n");
  entrada_dados(estado1, codigo_carta1, cidade1, populacao1, pontos_turisticos1, area1, pib1);
  printf("Digite os dados referentes a carta 2\n");
  entrada_dados(estado2, codigo_carta2, cidade2, populacao2, pontos_turisticos2, area2, pib2);

  //Cálculo da densidade populacional
  densidade_populacional1 = densidade(populacao1, area1);
  densidade_populacional2 = densidade(populacao2, area2);

  //Cálculo do PIB per capita
  pib_percapita1 = percapita(pib1, populacao1);
  pib_percapita2 = percapita(pib2, populacao2);
  
  // Área para exibição dos dados da cidade
  printf("Carta 1: \n");
  saida_dados(estado1, codigo_carta1, cidade1, populacao1, pontos_turisticos1, area1, pib1);
  saida_dados(estado2, codigo_carta2, cidade2, populacao2, pontos_turisticos2, area2, pib2);
  
return 0;
} 
