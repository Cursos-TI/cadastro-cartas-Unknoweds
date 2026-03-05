#include <stdio.h>
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.
// Carta 1
int main() {
  char estado1; //caractere para definir um estado ex: A ou B
  char codigo1[4]; //código para definir um estado ex: A01 ou B01
  char cidade1[50]; //nome da cidade 
  int populacao1; //número de habitantes
  float area1; //área total
  float pib1; //pib total da cidade
  int pt1; //número de pontos turísticos da cidade aproximadamente
  
 //entrada de dados
  printf("Digite o estado:");
  scanf("%c", &estado1);
  printf("O estado é: %c\n", estado1);

  printf("Digite o código:");
  scanf("%s",codigo1);
  printf("O código é: %s\n", codigo1);

  printf("Digite a cidade:");
  scanf("%s", cidade1);
  printf("A cidade é: %s\n", cidade1); 

  printf("Digite o número de habitantes:");
  scanf("%d", &populacao1);
  printf("O número de habitantes é: %d habitantes\n", populacao1);

  printf("Digite a área total:");
  scanf("%f", &area1);
  printf("A área total é: %.2f km²\n", area1);

  printf("Digite o PIB total da cidade:");
  scanf("%f", &pib1);
  printf("O PIB total da cidade é: %.2f bilhões de reais\n", pib1);

  printf("Digite o número de pontos turísticos da cidade:");
  scanf("%d", &pt1);
  printf("O número de pontos turísticos da cidade é: %d\n", pt1);

  float densidade1; //densidade demográfica da cidade
  float pib_per_capita1; //PIB per capita da cidade

  densidade1 = populacao1 / area1; //cálculo da densidade demográfica
  pib_per_capita1 = pib1 * 1000000000 / populacao1; //cálculo do PIB per capita 
  //obs: para calcular pib per capita, o PIB deve ser convertido para a mesma unidade da população, ou seja, bilhões de reais para milhões de habitantes. Para isso, basta multiplicar o PIB por 1000 antes de dividir pela população.

  printf("A densidade demográfica da cidade é: %.2f hab/km²\n", densidade1);
  printf("O PIB per capita da cidade é: %.2f reais\n", pib_per_capita1);

// Carta 2
  printf("carta 2\n");

  char estado2; //caractere para definir um estado ex: A ou B
  char codigo2[4]; //código para definir um estado ex: A01 ou B01
  char cidade2[50]; //nome da cidade 
  int populacao2; //número de habitantes
  float area2; //área total
  float pib2; //pib total da cidade
  int pt2; //número de pontos turísticos da cidade aproximadamente
  
 //entrada de dados
  printf("Digite o estado2:");
  scanf("%c", &estado2);
  printf("O estado2 é: %c\n", estado2);

  printf("Digite o código2:");
  scanf("%s",codigo2);
  printf("O código2 é: %s\n", codigo2);

  printf("Digite a cidade2:");
  scanf("%s", cidade2);
  printf("A cidade2 é: %s\n", cidade2); 

  printf("Digite o número de habitantes2:");
  scanf("%d", &populacao2);
  printf("O número de habitantes2 é: %d habitantes\n", populacao2);

  printf("Digite a área total2:");
  scanf("%f", &area2);
  printf("A área total2 é: %.2f km²\n", area2);

  printf("Digite o PIB total da cidade2:");
  scanf("%f", &pib2);
  printf("O PIB total da cidade2 é: %.2f bilhões de reais\n", pib2);

  printf("Digite o número de pontos turísticos da cidade2:");
  scanf("%d", &pt2);
  printf("O número de pontos turísticos da cidade2 é: %d\n", pt2);

  float densidade2; //densidade demográfica da cidade
  float pib_per_capita2; //PIB per capita da cidade

  densidade2 = populacao2 / area2; //cálculo da densidade demográfica
  pib_per_capita2 = pib2 * 1000000000 / populacao2; //cálculo do PIB per capita 
  //obs: para calcular pib per capita, o PIB deve ser convertido para a mesma unidade da população, ou seja, bilhões de reais para milhões de habitantes. Para isso, basta multiplicar o PIB por 1000 antes de dividir pela população.

  printf("A densidade demográfica da cidade2 é: %.2f hab/km²\n", densidade2);
  printf("O PIB per capita da cidade2 é: %.2f reais\n", pib_per_capita2);
  
  return 0;
}