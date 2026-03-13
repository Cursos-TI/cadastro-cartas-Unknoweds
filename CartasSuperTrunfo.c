#include <stdio.h>
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.
// Carta 1
int main() {
  char estado1; //caractere para definir um estado ex: A ou B
  char codigo1[4]; //código para definir um estado ex: A01 ou B01
  char cidade1[50]; //nome da cidade 
  unsigned long int populacao1; //número de habitantes
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
  scanf("%lu", &populacao1);
  printf("O número de habitantes é: %lu habitantes\n", populacao1);

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
  float inverso_densidade1; //inverso da densidade demográfica
  float super_poder1; //super poder da cidade

  densidade1 = populacao1 / area1; //cálculo da densidade demográfica
  pib_per_capita1 = pib1 * 1000000000 / populacao1; //cálculo do PIB per capita 
  //obs: para calcular pib per capita, o PIB deve ser convertido para a mesma unidade da população, ou seja, bilhões de reais para milhões de habitantes. Para isso, basta multiplicar o PIB por 1000 antes de dividir pela população.

  printf("A densidade demográfica da cidade é: %.2f hab/km²\n", densidade1);
  printf("O PIB per capita da cidade é: %.2f reais\n", pib_per_capita1);

  inverso_densidade1 = area1 / populacao1; //cálculo do inverso da densidade demográfica
  printf("O inverso da densidade demográfica da cidade1 é: %.6f km²/hab\n", inverso_densidade1);

  super_poder1 = (float) (populacao1 + area1 + pib1 + pt1 + pib_per_capita1 + inverso_densidade1);
  printf("O super poder da cidade1 é: %.2f\n", super_poder1);

// Carta 2
  printf("carta 2\n");

  char estado2; //caractere para definir um estado ex: A ou B
  char codigo2[4]; //código para definir um estado ex: A01 ou B01
  char cidade2[50]; //nome da cidade 
  unsigned long int populacao2; //número de habitantes
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
  scanf("%lu", &populacao2);
  printf("O número de habitantes2 é: %lu habitantes\n", populacao2);

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
  float inverso_densidade2; //inverso da densidade demográfica
  float super_poder2; //super poder da cidade
  densidade2 = populacao2 / area2; //cálculo da densidade demográfica
  pib_per_capita2 = pib2 * 1000000000 / populacao2; //cálculo do PIB per capita 
  //obs: para calcular pib per capita, o PIB deve ser convertido para a mesma unidade da população, ou seja, bilhões de reais para milhões de habitantes. Para isso, basta multiplicar o PIB por 1000 antes de dividir pela população.

  printf("A densidade demográfica da cidade2 é: %.2f hab/km²\n", densidade2);
  printf("O PIB per capita da cidade2 é: %.2f reais\n", pib_per_capita2);

  inverso_densidade2 = area2 / populacao2; //cálculo do inverso da densidade demográfica
  printf("O inverso da densidade demográfica da cidade2 é: %.6f km²/hab\n", inverso_densidade2);

  super_poder2 = (float) (populacao2 + area2 + pib2 + pt2 + pib_per_capita2 + inverso_densidade2);
  printf("O super poder da cidade2 é: %.2f\n", super_poder2);

  int comparacao_populacao; //variável para comparação de população
  int comparacao_area; //variável para comparação de área
  int comparacao_pib; //variável para comparação de PIB
  int comparacao_pt; //variável para comparação de pontos turísticos
  int comparacao_pib_per_capita; //variável para comparação de PIB per capita
  int comparacao_inverso_densidade; //variável para comparação do inverso
  int comparacao_super_poder; //variável para comparação do super poder
  
  // comparação entre as cartas
  comparacao_populacao = (populacao1 > populacao2) ? 1 : 0; 
  printf("Comparação de população: %s\n", comparacao_populacao ? "(1) carta 1 venceu": "(0) carta 2 venceu");
  comparacao_area = (area1 > area2) ? 1 : 0;
  printf("Comparação de área: %s\n", comparacao_area ? "(1) carta 1 venceu": "(0) carta 2 venceu");
  comparacao_pib = (pib1 > pib2) ? 1 : 0;
  printf("Comparação de PIB: %s\n", comparacao_pib ? "(1) carta 1 venceu": "(0) carta 2 venceu");
  comparacao_pt = (pt1 > pt2) ? 1 : 0;
  printf("Comparação de pontos turísticos: %s\n", comparacao_pt ? "(1) carta 1 venceu": "(0) carta 2 venceu");
  comparacao_pib_per_capita = (pib_per_capita1 > pib_per_capita2) ? 1 : 0;
  printf("Comparação de PIB per capita: %s\n", comparacao_pib_per_capita ? "(1) carta 1 venceu": "(0) carta 2 venceu");
  comparacao_inverso_densidade = (inverso_densidade1 > inverso_densidade2) ? 1 : 0;
  printf("Comparação do inverso da densidade demográfica: %s\n", comparacao_inverso_densidade ? "(1) carta 1 venceu": "(0) carta 2 venceu");
  comparacao_super_poder = (super_poder1 > super_poder2) ? 1 : 0;
  printf("Comparação do super poder: %s\n", comparacao_super_poder ? "(1) carta 1 venceu": "(0) carta 2 venceu");
  
  
// comparação entre um elemento das cartas com estrutura if_else
  int populacao_comparacao1 = 123250000;
  int populacao_comparacao2 = 347657;

  if(populacao_comparacao1 > populacao_comparacao2) {
    printf("Carta 1 vence!\n");
  } else {
    printf("Carta 2 vence!\n");
  }
  return 0;
}