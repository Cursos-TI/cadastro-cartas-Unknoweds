#include <stdio.h>
#include <string.h>
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.
// Carta 1
int main(void) {
  char estado; //caractere para definir um estado ex: A ou B
  char codigo[4]; //código para definir um estado ex: A01 ou B01
  char cidade[50]; //nome da cidade 
  int populacao; //número de habitantes
  float area; //área total
  float pib; //pib total da cidade
  int pt; //número de pontos turísticos da cidade aproximadamente

  printf("Digite o estado:");
  scanf("%c", &estado);
  printf("O estado é: %c\n", estado);

  printf("Digite o código:");
  scanf("%s",codigo);
  printf("O código é: %s\n", codigo);

  printf("Digite a cidade:");
  scanf("%s", cidade);
  printf("A cidade é: %s\n", cidade); 

  printf("Digite o número de habitantes:");
  scanf("%d", &populacao);
  printf("O número de habitantes é: %d habitantes\n", populacao);

  printf("Digite a área total:");
  scanf("%f", &area);
  printf("A área total é: %.2f km²\n", area);

  printf("Digite o PIB total da cidade:");
  scanf("%f", &pib);
  printf("O PIB total da cidade é: %.2f bilhões de reais\n", pib);

  printf("Digite o número de pontos turísticos da cidade:");
  scanf("%d", &pt);
  printf("O número de pontos turísticos da cidade é: %d\n", pt);
  
  return 0;
}
