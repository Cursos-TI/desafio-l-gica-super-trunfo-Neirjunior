#include <stdio.h>

// Desafio  Logica super Trunfo
//Teste Neir junior

int main() {
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

    printf("Digite a primeira letra do Estado: \n");
    scanf("%s", estado1);

    printf("Digite o codigo da carta: \n");
    scanf("%s", carta1);
    
    printf("Digite o nome da Cidade: \n");
    scanf("%s", cidade1);

    printf("Digite a quantidade da populacional da cidade: \n");
    scanf("%d", &populacao1);

    printf("Digite a Area em KM da Cidade: \n");
    scanf("%f", &km1);

    printf("Digite o pib da cidade: \n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turisticos da Cidade : \n");
    scanf("%d", &turisticos1);
    
    printf("Digite a primeira letra do Estado: \n");
    scanf("%s", estado2);

    printf("Digite o codigo da carta: \n");
    scanf("%s", carta2);
    
    printf("Digite o nome da Cidade: \n");
    scanf("%s", cidade2);

    printf("Digite a quantidade da populacional da cidade: \n");
    scanf("%d", &populacao2);

    printf("Digite a Area em KM da Cidade: \n");
    scanf("%f", &km2);

    printf("Digite o pib da cidade: \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turisticos da Cidade: \n");
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
    printf("Nome da Cidade: %s \n",cidade1);
    printf("Populacao: %d milhoes de habitantes\n", populacao1);
    printf("Area: %f Km² \n",km1);
    printf("PIB: %f reais \n",pib1);
    printf("Pontos Turisticos: %d \n",turisticos1);
    printf("Densidade Populacional: %f hab/Km²\n", densidade1);
    printf("PIB per Capita: %f reais\n", pibpercapito1);
    printf("Super poder: %f\n", superpoder1);
    printf("\n");
    printf("Carta 02: \n");
    printf("Estado: %s \n", estado2);
    printf("Codigo %s%s \n",estado2, carta2);
    printf("Nome da Cidade: %s \n",cidade2);
    printf("Populacao: %d milhoes de habitantes \n", populacao2);
    printf("Area: %f Km² \n", km2);
    printf("PIB: %f reais \n", pib2);
    printf("Pontos Turisticos: %d \n", turisticos2);
    printf("Densidade Populacional: %f hab?KM\n", densidade2);
    printf("PIB per Capita: %f reais\n", pibpercapito2);
    printf("Super poder: %f\n", superpoder2);

    printf("\n");
    printf("Comparação das cartas(Atributo: PIB)\n");
    printf("Carta 1 - %s: %f\n", cidade1, pib1);
    printf("Carta 2 - %s: %f\n",cidade2, pib2);
    if (pib1 > pib2){
        printf("Resulado: Carta 1 %s venceu.\n", cidade1);
    }else{
        printf("Resulado: Carta 2 %s venceu.\n", cidade2);
    }
    return 0;
}
