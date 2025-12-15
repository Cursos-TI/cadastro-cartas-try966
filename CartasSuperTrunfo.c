#include <stdio.h>

  int main() {
      char estado; //letra do estado, vai de A a H.
      char codigo[3]; //letra do estado + código da cidade que vai de 01 a 04.
      char cidade[20]; //nome da cidade, sem espaços por enquanto.
      int populacao;
      float area;
      float pib;
      int pontost; //número de pontos turísticos

      printf("Seja bem vindo ao Super Trunfo de Cidades !\n\n");
      printf("Antes de começar vamos realizar o cadastro da primeira carta !\n");

      printf("Escolha uma letra de A a H para representar o Estado que está cadastrando: \n");
      scanf("%s", &estado);

      printf("Digite o código da carta, que deve ser a Letra do Estado + um número de 01 a 04: \n");
      scanf("%s", &codigo);

      printf("Digite o nome da cidade: \n");
      scanf("%s", &cidade);

      printf("Digite a população: \n");
      scanf("%d", &populacao);

      printf("Digite a area em km²: \n");
      scanf("%f", &area);

      printf("Digite o PIB em bilhões de reais: \n");
      scanf("%f", &pib);

      printf("Digite o numero de pontos turísticos da cidade: \n");
      scanf("%d", &pontost);

      printf("Seguem os dados da primeira carta cadastrada ! \n");

      printf("Carta 1: \n", "Código: %s\n" , codigo);
      printf("Nome da Cidade: %s\n", cidade);
      printf("População: %d \n", populacao);
      printf("Área: %.2f km²\n", area);
      printf("PIB: %.2f bilhões de reais\n", pib);
      printf("Número de pontos turísticos: %d\n \n", pontost);

      printf("Vamos realizar agora, o cadastro da segunda carta !\n");

      printf("Escolha uma letra de A a H para representar o Estado que está cadastrando: \n");
      scanf("%s", &estado);

      printf("Digite o código da carta, que deve ser a Letra do Estado + um número de 01 a 04: \n");
      scanf("%s", &codigo);

      printf("Digite o nome da cidade: \n");
      scanf("%s", &cidade);

      printf("Digite a população: \n");
      scanf("%d", &populacao);

      printf("Digite a area em km²: \n");
      scanf("%f", &area);

      printf("Digite o PIB em bilhões de reais: \n");
      scanf("%f", &pib);

      printf("Digite o numero de pontos turísticos da cidade: \n");
      scanf("%d", &pontost);

      printf("Carta 2: \n", "Código: %s\n" , codigo);
      printf("Nome da Cidade: %s\n", cidade);
      printf("População: %d \n", populacao);
      printf("Área: %.2f km²\n", area);
      printf("PIB: %.2f bilhões de reais\n", pib);
      printf("Número de pontos turísticos: %d\n", pontost);

      return 0;
  }