#include <stdio.h>

int main() {
    //Define todas as variaveis.

    int area, populacao, numeroPontosTuristicos;
    int area1, populacao1, numeroPontosTuristicos1;
    char nomeC[20];
    char nomeC1[20];
    
    float pib, densiPop, PIBPercap;
    float pib1, densiPop1, PIBPercap1;
    //Cadastra todas as informações importantes para as cartas.

    printf ("Digite o nome da cidade: \n");
    scanf ("%s", &nomeC);

    printf ("Digite a população: \n");
    scanf ("%d", &populacao);

    printf ("Digite a area em m² da cidade: \n");
    scanf ("%d", &area);

    printf ("Digite o pib da cidade: \n");
    scanf ("%f", &pib);

    printf ("Digite o numero de pontos turisticos: \n");
    scanf ("%d", &numeroPontosTuristicos);


    printf ("Digite o nome da segunda cidade: \n");
    scanf ("%s", &nomeC1);

    printf ("Digite a população da segunda cidade: \n");
    scanf ("%d", &populacao1);

    printf ("Digite a area em m² da segunda cidade: \n");
    scanf ("%d", &area1);

    printf ("Digite o pib da segunda cidade: \n");
    scanf ("%f", &pib1);

    printf ("Digite o numero de pontos turisticos da segunda cidade: \n");
    scanf ("%d", &numeroPontosTuristicos1);
    //somando as informações.

    densiPop = (float) populacao / area;
    PIBPercap = (float) pib / populacao;

    densiPop1 = (float) populacao1 / area1;
    PIBPercap1 = (float) pib1 / populacao1;

    //imprimindo as informações.

    printf ("*** Informações das cartas ***\n");
    printf ("*** Informações da carta 1 ***\n");
    printf ("Nome da cidade: %s\n", nomeC);
    printf ("Populção: %d\n", populacao);
    printf ("Area da cidade: %d\n", area);
    printf ("PIB da cidade: %.2f\n", pib);
    printf ("Numero de pontos turisticos: %d\n", numeroPontosTuristicos);
    printf ("Densidade populacional: %.2f\n", densiPop);
    printf ("PIB per capta: %.2f\n", PIBPercap);
    
    printf ("*** Informações da carta 2 ***\n");
    printf ("Nome da cidade: %s\n", nomeC1);
    printf ("Populção: %d\n", populacao1);
    printf ("Area da cidade: %d\n", area1);
    printf ("PIB da cidade: %.2f\n", pib1);
    printf ("Numero de pontos turisticos: %d\n", numeroPontosTuristicos1);
    printf ("Densidade populacional: %.2f\n", densiPop1);
    printf ("PIB per capta: %.2f\n", PIBPercap1);
    printf ("*** Super Trunfo ***\n");


    return 0;
}