#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Teste Neir junior

int main()
{
    char estado1[2], estado2[2];
    char carta1[4], carta2[4];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float km1, km2;
    float pib1, pib2;
    int turisticos1, turisticos2;
    float densidade1, densidade2;
    float pibpercapito1, pibpercapito2;
    float superpoder1, superpoder2;
    int escolha1, escolha2;
    float valor1_carta1, valor1_carta2;
    float valor2_carta1, valor2_carta2;
    float soma1, soma2;
    int pontos1 = 0, pontos2 = 0;
    const char *nome1, *nome2;

    printf("=====Digite os dados para a primeira Carta=====\n");
    -printf("\nDigite a primeira letra do Estado:\n");
    scanf("%s", estado1);
    printf("Digite o codigo da carta:\n");
    scanf("%s", carta1);
    printf("Digite o nome da Cidade:\n");
    scanf("%s", cidade1);
    printf("Digite a quantidade populacional da cidade:\n");
    scanf("%d", &populacao1);
    printf("Digite a Area em KM da Cidade:\n");
    scanf("%f", &km1);
    printf("Digite o pib da cidade:\n");
    scanf("%f", &pib1);
    printf("Digite a quantidade de pontos turisticos da Cidade:\n");
    scanf("%d", &turisticos1);
    printf("\n=====Digite os dados para a segunda Carta=====\n");
    printf("\nDigite a primeira letra do Estado:\n");
    scanf("%s", estado2);
    printf("Digite o codigo da carta:\n");
    scanf("%s", carta2);
    printf("Digite o nome da Cidade:\n");
    scanf("%s", cidade2);
    printf("Digite a quantidade populacional da cidade:\n");
    scanf("%d", &populacao2);
    printf("Digite a Area em KM da Cidade:\n");
    scanf("%f", &km2);
    printf("Digite o pib da cidade:\n");
    scanf("%f", &pib2);
    printf("Digite a quantidade de pontos turisticos da Cidade:\n");
    scanf("%d", &turisticos2);

    densidade1 = populacao1 / km1;
    densidade2 = populacao2 / km2;
    pibpercapito1 = pib1 / populacao1;
    pibpercapito2 = pib2 / populacao2;
    superpoder1 = populacao1 + km1 + pib1 + turisticos1 + (1 / densidade1);
    superpoder2 = populacao2 + km2 + pib2 + turisticos2 + (1 / densidade2);

    printf("\nCarta 01: \n");
    printf("Estado: %s \n", estado1);
    printf("Codigo %s%s \n", estado1, carta1);
    printf("Nome da Cidade: %s \n", cidade1);
    printf("Populacao: %d milhoes de habitantes\n", populacao1);
    printf("Area: %f Km² \n", km1);
    printf("PIB: %f reais \n", pib1);
    printf("Pontos Turisticos: %d \n", turisticos1);
    printf("Densidade Populacional: %f hab/Km²\n", densidade1);
    printf("PIB per Capita: %f reais\n", pibpercapito1);
    printf("Super poder: %f\n", superpoder1);
    printf("\n");
    printf("Carta 02: \n");
    printf("Estado: %s \n", estado2);
    printf("Codigo %s%s \n", estado2, carta2);
    printf("Nome da Cidade: %s \n", cidade2);
    printf("Populacao: %d milhoes de habitantes \n", populacao2);
    printf("Area: %f Km² \n", km2);
    printf("PIB: %f reais \n", pib2);
    printf("Pontos Turisticos: %d \n", turisticos2);
    printf("Densidade Populacional: %f hab/KM\n", densidade2);
    printf("PIB per Capita: %f reais\n", pibpercapito2);
    printf("Super poder: %f\n", superpoder2);

    printf("\n====Escolha o atributo para a comparação====\n");
    printf("1.População\n");
    printf("2.Área\n");
    printf("3.PIB\n");
    printf("4.Pontos turisticos\n");
    printf("5.Densidade demografica\n");
    printf("\n");
    printf("Escolha o primeiro atributo para comparação\n");
    scanf("%d", &escolha1);

    switch (escolha1)
    {
    case 1:
        printf("\n====Escolha outro atributo para a comparação====\n");
        printf("2. Área\n");
        printf("3.PIB\n");
        printf("4.Pontos turisticos\n");
        printf("5.Densidade demografica\n");
        printf("\n");
        scanf("%d", &escolha2);
        break;
    case 2:
        printf("\n====Escolha outro atributo para a comparação====\n");
        printf("1. População\n");
        printf("3.PIB\n");
        printf("4.Pontos turisticos\n");
        printf("5.Densidade demografica\n");
        printf("\n");
        scanf("%d", &escolha2);
        break;
    case 3:
        printf("\n====Escolha outro atributo para a comparação====\n");
        printf("1. População\n");
        printf("2.Área\n");
        printf("4.Pontos turisticos\n");
        printf("5.Densidade demografica\n");
        printf("\n");
        scanf("%d", &escolha2);
        break;
    case 4:
        printf("\n====Escolha outro atributo para a comparação====\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3.PIB\n");
        printf("5.Densidade demografica\n");
        printf("\n");
        scanf("%d", &escolha2);
        break;
    case 5:
        printf("\n====Escolha outro atributo para a comparação====\n");
        printf("1. População\n");
        printf("2.Área\n");
        printf("3.PIB\n");
        printf("4.Pontos turisticos\n");
        printf("\n");
        scanf("%d", &escolha2);
        break;
    default:
        printf("Opção invalida\n");
        break;
    }
    switch (escolha1)
    {
    case 1:
        valor1_carta1 = populacao1;
        valor1_carta2 = populacao2;
        nome1 = "População";
        break;
    case 2:
        valor1_carta1 = km1;
        valor1_carta2 = km2;
        nome1 = "Área";
        break;
    case 3:
        valor1_carta1 = pib1;
        valor1_carta2 = pib2;
        nome1 = "PIB";
        break;
    case 4:
        valor1_carta1 = turisticos1;
        valor1_carta2 = turisticos2;
        nome1 = "Pontos Turísticos";
        break;
    case 5:
        valor1_carta1 = densidade1;
        valor1_carta2 = densidade2;
        nome1 = "Densidade Demográfica";
        break;
    default:
        printf("Atributo inválido!\n");
        return 0;
    }

    switch (escolha2)
    {
    case 1:
        valor2_carta1 = populacao1;
        valor2_carta2 = populacao2;
        nome2 = "População";
        break;
    case 2:
        valor2_carta1 = km1;
        valor2_carta2 = km2;
        nome2 = "Área";
        break;
    case 3:
        valor2_carta1 = pib1;
        valor2_carta2 = pib2;
        nome2 = "PIB";
        break;
    case 4:
        valor2_carta1 = turisticos1;
        valor2_carta2 = turisticos2;
        nome2 = "Pontos Turísticos";
        break;
    case 5:
        valor2_carta1 = densidade1;
        valor2_carta2 = densidade2;
        nome2 = "Densidade Demográfica";
        break;
    default:
        printf("Atributo inválido!\n");
        return 0;
    }    
    printf("\n===== COMPARAÇÃO =====\n");
    printf("Carta 1: %s\n", cidade1);
    printf("Carta 2: %s\n\n", cidade2);

    printf("Atributos escolhidos: %s e %s\n\n", nome1, nome2);

    printf(">>> %s\n", nome1);
    printf("Carta 1: %.2f\n", valor1_carta1);
    printf("Carta 2: %.2f\n\n", valor1_carta2);

    printf(">>> %s\n", nome2);
    printf("Carta 1: %.2f\n", valor2_carta1);
    printf("Carta 2: %.2f\n\n", valor2_carta2);

    soma1 = valor1_carta1 + valor2_carta1;
    soma2 = valor1_carta1 + valor2_carta2;

    printf("Soma dos atributos:\n");
    printf("Carta 1 (%s): %.2f\n", cidade1, soma1);
    printf("Carta 2 (%s): %.2f\n\n", cidade2, soma2);

    if (soma1 > soma2)
    {
        printf(">>> Carta 1 venceu no geral: %s\n", cidade1);
    }
    else if (soma2 > soma1)
    {
        printf(">>> Carta 2 venceu no geral: %s\n", cidade2);
    }
    else
    {
        printf(">>> Empate no geral!\n");
    }
    return 0;    
}   

