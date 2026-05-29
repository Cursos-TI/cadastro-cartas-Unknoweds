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

  int escolhaCartao1, escolhaCartao2;
//Escolha para o cartão 1
  printf("***Comparação entre as cartas utilizando switch case***\n");
  printf("Nome da carta 1: %s\n", cidade1);
  printf("1.População da carta 1: %lu\n", populacao1);
  printf("2.Área da carta 1: %.2f km²\n", area1);
  printf("3.PIB da carta 1: %.2f bilhões de reais\n", pib1);
  printf("4.Pontos turísticos da carta 1: %d\n", pt1);
  printf("5.Densidade demográfica da carta 1: %.2f hab/km²\n", densidade1);
//Escolha para o cartão 2
  printf("Nome da carta 2: %s\n", cidade2);
  printf("1.População da carta 2: %lu\n", populacao2);
  printf("2.Área da carta 2: %.2f km²\n", area2);
  printf("3.PIB da carta 2: %.2f bilhões de reais\n", pib2);
  printf("4.Pontos turísticos da carta 2: %d\n", pt2);
  printf("5.Densidade demográfica da carta 2: %.2f hab/km²\n", densidade2);
  printf("Escolha um  do cartão 1 para comparar (1 a 5): ");
  scanf("%d", &escolhaCartao1);
  printf("Escolha um  do cartão 2 para comparar (1 a 5): ");
  scanf("%d", &escolhaCartao2);

//Comparação utilizando switch case
  switch(escolhaCartao1) {
    case 1:
      printf("População da carta 1: %lu habitantes\n", populacao1);
      break;
    case 2:
      printf("Área da carta 1: %.2f km²\n", area1);
      break;
    case 3:
      printf("PIB da carta 1: %.2f bilhões de reais\n", pib1);
      break;
    case 4:
      printf("Pontos turísticos da carta 1: %d\n", pt1);
      break;
    case 5:
      printf("Densidade demográfica da carta 1: %.2f hab/km²\n", densidade1);
      break;
    default:
      printf("***Opção inválida***ERROR\n");
      break;
  }
  switch(escolhaCartao2) {
    case 1:
      printf("População da carta 2: %lu habitantes\n", populacao2);
      break;
    case 2:
      printf("Área da carta 2: %.2f km²\n", area2);
      break;
    case 3:
      printf("PIB da carta 2: %.2f bilhões de reais\n", pib2);
      break;
    case 4:
      printf("Pontos turísticos da carta 2: %d\n", pt2);
      break;
    case 5:
      printf("Densidade demográfica da carta 2: %.2f hab/km²\n", densidade2);
      break;
    default:
      printf("***Opção inválida*** ERROR\n");
      break;
  }
//Comparação utilizando if else encadeado
if (populacao1 > populacao2) {
  printf("Comparação das cidades %s e %s:\n", cidade1, cidade2);
  printf("Atributo de comparação: População\n");
  printf("População da carta1: %lu habitantes e da carta2: %lu habitantes\n", populacao1, populacao2);
  printf("Carta 1 VENCEU!\n");
} else if (populacao1 < populacao2) {
  printf("Comparação das cidades %s e %s:\n", cidade1, cidade2);
  printf("Atributo de comparação: População\n");
  printf("População da carta1: %lu habitantes e da carta2: %lu habitantes\n", populacao1, populacao2);
  printf("Carta 2 VENCEU!\n");
} else {
  printf("EMPATE!\n");
} 

if (area1 > area2) {
  printf("Comparação das cidades %s e %s:\n", cidade1, cidade2);
  printf("Atributo de comparação: Área\n");
  printf("Área da carta1: %.2f km² e da carta2: %.2f km²\n", area1, area2);
  printf("Carta 1 VENCEU!\n");
} else if (area1 < area2) {
  printf("Comparação das cidades %s e %s:\n", cidade1, cidade2);
  printf("Atributo de comparação: Área\n");
  printf("Área da carta1: %.2f km² e da carta2: %.2f km²\n", area1, area2);
  printf("Carta 2 VENCEU!\n");
} else {
  printf("EMPATE!\n");
}

if (pib1 > pib2) {
  printf("Comparação das cidades %s e %s:\n", cidade1, cidade2);
  printf("Atributo de comparação: PIB\n");
  printf("PIB da carta1: %.2f bilhões de reais e da carta2: %.2f bilhões de reais\n", pib1, pib2);
  printf("Carta 1 VENCEU!\n");
} else if (pib1 < pib2) {
  printf("Comparação das cidades %s e %s:\n", cidade1, cidade2);
  printf("Atributo de comparação: PIB\n");
  printf("PIB da carta1: %.2f bilhões de reais e da carta2: %.2f bilhões de reais\n", pib1, pib2);
  printf("Carta 2 VENCEU!\n");
} else {
  printf("EMPATE!\n");
}

if (pt1 > pt2) {
  printf("Comparação das cidades %s e %s:\n", cidade1, cidade2);
  printf("Atributo de comparação: Pontos turísticos\n");
  printf("Pontos turísticos da carta1: %d e da carta2: %d\n", pt1, pt2);
  printf("Carta 1 VENCEU!\n");
} else if (pt1 < pt2) {
  printf("Comparação das cidades %s e %s:\n", cidade1, cidade2);
  printf("Atributo de comparação: Pontos turísticos\n");
  printf("Pontos turísticos da carta1: %d e da carta2: %d\n", pt1, pt2);
  printf("Carta 2 VENCEU!\n");
} else {
  printf("EMPATE!\n");
}

if (densidade1 < densidade2) {
  printf("Comparação das cidades %s e %s:\n", cidade1, cidade2);
  printf("Atributo de comparação: Densidade demográfica\n");
  printf("Densidade demográfica da carta1: %.2f hab/km² e da carta2: %.2f hab/km²\n", densidade1, densidade2);
  printf("Carta 1 VENCEU!\n");
} else if (densidade1 > densidade2) {
  printf("Comparação das cidades %s e %s:\n", cidade1, cidade2);
  printf("Atributo de comparação: Densidade demográfica\n");
  printf("Densidade demográfica da carta1: %.2f hab/km² e da carta2: %.2f hab/km²\n", densidade1, densidade2);
  printf("Carta 2 VENCEU!\n");
} else {
  printf("EMPATE!\n");
}

//lógica de comparação mais sofisticada, utilizando switch, operador ternário, if else e munus interativos

int resultado1, resultado2;
char primeiroAtributo, segundoAtributo;
int ataque1, ataque2, defesa1, defesa2, recuo1, recuo2;
ataque1 = populacao1;
ataque2 = populacao2;
defesa1= area1;
defesa2 = area2;
recuo1 = pib1;
recuo2 = pib2;

//início do jogo

printf("***Bem-vindo ao jogo!***\n");
printf("Escolha o primeiro atributo\n");
printf("A.ataque\n");
printf("D.defesa\n");
printf("R.recuo\n");

printf("Escolha a comparação do primeiro atributo (A, D ou R): ");
scanf(" %c", &primeiroAtributo);

switch (primeiroAtributo) {
  case 'A':
  case 'a':
    printf("você escolheu a comparação de ATAQUE.\n");
    resultado1 = (ataque1 > ataque2) ? 1 : 0;
    break;
  case 'D':
  case 'd':
    printf("você escolheu a comparação de DEFESA.\n");
    resultado1 = (defesa1 > defesa2) ? 1 : 0;
    break;
  case 'R':
  case 'r':
    printf("você escolheu a comparação de RECUO.\n");
    resultado1 = (recuo1 > recuo2) ? 1 : 0;
    break;
  default:
    printf("OPÇÃO INVÁLIDA! ERROR\n");
}

  printf("Escolha a comparação do segundo atributo (A, D ou R): ");
  scanf(" %c", &segundoAtributo);

  if (primeiroAtributo == segundoAtributo) {
    printf(  "OPÇÃO INVÁLIDA! Você já escolheu esse atributo, você de escolher outro atributo para comparar. ERRRROR\n");
  } else {
    switch (segundoAtributo) {
      case 'A':
      case 'a':
        printf("você escolheu a comparação de ATAQUE.\n");
        resultado2 = (ataque1 > ataque2) ? 1 : 0;
        break;
      case 'D':
      case 'd':
        printf("você escolheu a comparação de DEFESA.\n");
        resultado2 = (defesa1 > defesa2) ? 1 : 0;
        break;
      case 'R':
      case 'r':
        printf("você escolheu a comparação de RECUO.\n");
        resultado2 = (recuo1 > recuo2) ? 1 : 0;
        break;
      default:
        printf("OPÇÃO INVÁLIDA! ERROR\n");
    }
  }

  if (resultado1 == 1 && resultado2 == 1) {
    printf("Comparação das cidades %s e %s:\n", cidade1, cidade2);
    printf("Atributos de comparação: %c e %c\n", primeiroAtributo, segundoAtributo);
    printf("valores do primeiro atributo: %d e do segundo atributo: %d\n", resultado1, resultado2);
    printf("O resultado da comparação é: %d\n", resultado1 + resultado2);
    printf("Parabéns! Você GANHOU!\n");
  } else if (resultado1 == 0 && resultado2 == 1 || resultado1 == 1 && resultado2 == 0) {
    printf("Comparação das cidades %s e %s:\n", cidade1, cidade2);
    printf("Atributos de comparação: %c e %c\n", primeiroAtributo, segundoAtributo);
    printf("valores do primeiro atributo: %d e do segundo atributo: %d\n", resultado1, resultado2);
    printf("O resultado da comparação é: %d\n", resultado1 + resultado2);
    printf("EMPATE!\n");
  } else {
    printf("Comparação das cidades %s e %s:\n", cidade1, cidade2);
    printf("Atributos de comparação: %c e %c\n", primeiroAtributo, segundoAtributo);
    printf("valores do primeiro atributo: %d e do segundo atributo: %d\n", resultado1, resultado2);
    printf("O resultado da comparação é: %d\n", resultado1 + resultado2);
    printf("Que pena! você PERDEU!\n");
  }

  


  return 0;
}