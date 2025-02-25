#include <stdio.h>

// Desafio Super Trunfo - Países

//Função para a entrada de dados
void entrada_dados() {

  int populacao, pontos_turisticos;
  char estado, codigo_carta[20], nome_cidade[20];
  float area, pib;

  printf("Digite o estado: ");
  scanf("%c", &estado);

  printf("Digite o código da carta: ");
  scanf("%s", &codigo_carta);

  printf("Digite o nome da cidade: ");
  scanf("%s", &nome_cidade);

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
void saida_dados() {

  int populacao, pontos_turisticos;
  char estado, codigo_carta[20], nome_cidade[20];
  float area, pib, densidade_populacional, pib_percapita;


  printf("Estado: %c\n ", estado);

  printf("Código da carta: %s\n ", codigo_carta);

  printf("Nome da cidade: %s\n ", nome_cidade);

  printf("População: %d\n", populacao);

  printf("Área: %f km²\n", area);

  printf("PIB: %f bilhões de reais\n", pib);

  printf("Número de pontos turísticos: %d\n", pontos_turisticos);

  printf("Densidade populacional: %f\n", densidade_populacional);

  printf("PIB per capita: %f\n", pib_percapita);

}

//Função para o cálculo da densidade populacional
float densidade (int populacao, float area){

  return populacao / area;

}

//Função para o cálculo do PIB per capita
float PIB (float pib, int populacao){

  return pib / populacao;

}


int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  float densidade_populacional, pib_percapita;
  
  // Área para entrada de dados
  entrada_dados();
  
  

  //Cálculo da densidade populacional
  densidade_populacional = densidade();

  //Cálculo do PIB per capita
  pib_percapita = PIB();
  
  
  // Área para exibição dos dados da cidade
  saida_dados();
  
  
  
return 0;
} 
