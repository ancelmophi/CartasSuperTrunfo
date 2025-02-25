#include <stdio.h>

// Desafio Super Trunfo - Países

//Função para a entrada de dados
void entrada_dados() {

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
void saida_dados(){

  printf("Estado: %c\n ", estado);

  printf("Código da carta: %s\n ", codigo_carta);

  printf("Nome da cidade: %s\n ", nome_cidade);

  printf("População: %d\n", populacao);

  printf("Área: %f km²\n", area);

  printf("PIB: %f bilhões de reais\n", pib);

  printf("Número de pontos turísticos: %d\n", pontos_turisticos);

}

//Função para o cálculo da densidade populacional
void densidade(){

 (float) populacao / area;

}


int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  int populacao, pontos_turisticos;
  char estado, codigo_carta[20], nome_cidade[20];
  float area, pib, densidade_populacional, pib_percapita;

  // Área para entrada de dados
  entrada_dados();
  densidade_populacional = densidade();
  
  // Área para exibição dos dados da cidade
  saida_dados();
  printf("%f",&densidade_populacional);
  
  
return 0;
} 
