#include <stdio.h>

int main() {
    //Define todas as variaveis
    int area, populacao, numeroPontosTuristicos;
    char codigo[6];
    char nomeC[20];
    float pib;
    //Cadastra todas as informações importantes para as cartas.
    printf ("Digite o codigo da carta \n");
    scanf ("%s", &codigo);
    printf ("Digite o nome da cidade \n");
    scanf ("%s", &nomeC);
    printf ("Digite a area em m² da cidade \n");
    scanf ("%d", &area);
    printf ("Digite a população \n");
    scanf ("%d", &populacao);
    printf ("Digite o pib da cidade \n");
    scanf ("%f", &pib);
    printf ("Digite o numero de pontos turisticos \n");
    scanf ("%d", &numeroPontosTuristicos);

    //como foi sugerido na aula resumi a parte que demonstra as informações e apliquei todas em uma só linha.
    printf ("Carta: %s - Cidade: %s\nPopulação: %d - PIB: %f\nArea: %d - Numero de pontos turisticos: %d\n", codigo, nomeC, populacao, pib, area, numeroPontosTuristicos);

    return 0;
}