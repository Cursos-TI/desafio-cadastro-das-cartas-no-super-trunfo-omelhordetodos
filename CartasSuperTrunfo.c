#include <stdio.h>

int main() {
    //Define todas as variaveis.

    int area, populacao, numeroPontosTuristicos;
    char nomeC[20];
    float pib, densiPop, PIBPercap;
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
    //somando as informações.

    densiPop = (float)populacao / area;
    PIBPercap = (float) pib / populacao;

    //imprimindo as informações.
    printf ("*** Informações das cartas ***\n");
    printf ("Nome da cidade: %s\n", nomeC);
    printf ("Populção: %d\n", populacao);
    printf ("Area da cidade: %d\n", area);
    printf ("PIB da cidade: %.2f\n", pib);
    printf ("Numero de pontos turisticos: %d\n", numeroPontosTuristicos);
    printf ("Densidade populacional: %.2f\n", densiPop);
    printf ("PIB per capta: %.2f\n", PIBPercap);
    printf ("*** Super Trunfo ***\n");


    return 0;
}