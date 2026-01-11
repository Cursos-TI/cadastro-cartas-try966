#include <stdio.h>

  int main() {
      char estadoA, estadoB; //letra do estado, vai de A a H.
      char codigoA[3], codigoB[3]; //letra do estado + código da cidade que vai de 01 a 04.
      char cidadeA[20], cidadeB[20]; //nome da cidade, sem espaços por enquanto.
      unsigned long int populacaoA, populacaoB;
      float superpoderA, superpoderB, areaA, areaB, pibA, pibB, pibpercapitaA, pibpercapitaB, densidadeA, densidadeB;
      int pontostA, pontostB; //número de pontos turísticos

      printf("Seja bem vindo ao Super Trunfo de Cidades !\n\n");
      printf("Antes de começar vamos realizar o cadastro da primeira carta !\n");

      printf("Escolha uma letra de A a H para representar o Estado que está cadastrando: \n");
      scanf("%s", &estadoA);

      printf("Digite o código da carta, que deve ser a Letra do Estado + um número de 01 a 04: \n");
      scanf("%s", codigoA);

      printf("Digite o nome da cidade: \n");
      scanf("%s", cidadeA);

      printf("Digite a população: \n");
      scanf("%lu", &populacaoA);

      printf("Digite a area em km²: \n");
      scanf("%f", &areaA);

      printf("Digite o PIB em bilhões de reais: \n");
      scanf("%f", &pibA);

      printf("Digite o numero de pontos turísticos da cidade: \n");
      scanf("%d", &pontostA);

      pibpercapitaA = (pibA / populacaoA);
      densidadeA = (populacaoA / areaA);

      printf("Seguem os dados da primeira carta cadastrada ! \n");

      printf("Carta 1: Código: %s\n" , codigoA);
      printf("Nome da Cidade: %s\n", cidadeA);
      printf("População: %lu \n", populacaoA);
      printf("Área: %.2f km²\n", areaA);
      printf("PIB: %.2f bilhões de reais\n", pibA);
      printf("Número de pontos turísticos: %d\n \n", pontostA);
      printf("Densidade Populacional: %.2f  hab/km²", densidadeA);
      printf("PIB per Capita: %.2f reais \n", pibpercapitaA);

      printf("Vamos realizar agora, o cadastro da segunda carta !\n");

      printf("Escolha uma letra de A a H para representar o Estado que está cadastrando: \n");
      scanf("%s", &estadoB);

      printf("Digite o código da carta, que deve ser a Letra do Estado + um número de 01 a 04: \n");
      scanf("%s", codigoB);

      printf("Digite o nome da cidade: \n");
      scanf("%s", cidadeB);

      printf("Digite a população: \n");
      scanf("%lu", &populacaoB);

      printf("Digite a area em km²: \n");
      scanf("%f", &areaB);

      printf("Digite o PIB em bilhões de reais: \n");
      scanf("%f", &pibB);

      printf("Digite o numero de pontos turísticos da cidade: \n");
      scanf("%d", &pontostB);

      pibpercapitaB = (pibB/ populacaoB);
      densidadeB = (populacaoB / areaB);

      printf("Carta 2: Código: %s\n", codigoB);
      printf("Nome da Cidade: %s\n", cidadeB);
      printf("População: %lu \n", populacaoB);
      printf("Área: %.2f km²\n", areaB);
      printf("PIB: %.2f bilhões de reais\n", pibB);
      printf("Número de pontos turísticos: %d\n", pontostB);
      printf("Densidade Populacional: %.2f  hab/km² \n", densidadeB);
      printf("PIB per Capita: %.2f reais \n", pibpercapitaB);

      superpoderA = (populacaoA + areaA + pibA + pontostA + pibpercapitaA)*(1/densidadeA);
      superpoderB = (populacaoB + areaB + pibB + pontostB + pibpercapitaB)*(1/densidadeB);

      printf("Comparação Entre Cartas\n");
      printf("População: Carta 1 Venceu (%d)\n", (populacaoA>populacaoB));
      printf("Área: Carta 1 Venceu (%d)\n", (areaA>areaB));
      printf("PIB: Carta 1 Venceu (%d)\n", (pibA>pibB));
      printf("Pontos Turísticos: Carta 1 Venceu (%d)\n", (pontostA>pontostB));
      printf("Densidade Populacional: Carta 1 Venceu (%d)\n", (densidadeA>densidadeB));
      printf("PIB per Capita: Carta 1 Venceu (%d)\n", (pibpercapitaA>pibpercapitaB));
      printf("Super Poder: Carta 1 Venceu (%d)\n", (superpoderA>superpoderB));

      return 0;
  }