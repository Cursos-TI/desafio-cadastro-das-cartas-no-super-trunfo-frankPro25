#include <stdio.h>
int calcDensidade(int populacao, float area)
{
    int dens = populacao / (int)area;
    return dens;
}
int calcPib(float pib, int populacao)
{
    int PibPer = (int)pib / populacao;
    return PibPer;
}
int main()
{
    int populacao[2], pontosTuristicos[2];
    float area[2], Pib[2];
    char estado[2][3];

    // novo recurso: Definindo o array de strings
    char cidade[2][15], codigo[2][3];


    //melhorias no recurso de gravacao de dados de cartas
    for (int i = 0; i <= 1; i++)
    {
        printf("Carta %d\n",i+1);
        
        printf("Digite o estado: ");
        scanf("%s", &estado[i]);
        printf("Codigo da carta: ");
        scanf("%s", &codigo[i]);
        printf("Digite a cidade: ");
        scanf("%s", &cidade[i]);
        printf("Seu pib: ");
        scanf("%f", &Pib[i]);
        printf("Sua populaçao: ");
        scanf("%i", &populacao[i]);
        printf("Area: ");
        scanf("%f", &area[i]);
        printf("Pontos turisticos: ");
        scanf("%i", &pontosTuristicos[i]);
    }

    printf("\n                                  Dados das cartas\n\n");
    printf("                 Carta 1                                          Carta 2\n"); // identificador de carta ajustado
    printf(" ___________________________________________    ___________________________________________\n");
    printf("|     estado       |%-24s|  |     estado       |%-24s|\n", estado[0], estado[1]);

    printf("| codigo da carta  |%s%-23s|  | codigo da carta  |%s%-23s|\n", estado, codigo, estado[1], codigo[1]);

    printf("|     cidade       |%-24s|  |     cidade       |%-24s|\n", cidade[0], cidade[1]);

    printf("|      area        |%-21.2f%s|  |      area        |%-21.2f%s|\n", area[0], "km²", area[1], "km²");

    printf("|       pib        |%-23.2f%s|  |       pib        |%-23.2f%s|\n", Pib[0], "$", Pib[1], "$");

    printf("|  pib per capita  |%-23i%s|  |  pib per capita  |%-23i%s|\n", calcPib(Pib[0], populacao[0]),"$", calcPib(Pib[1], populacao[1]),"$");

    printf("|    populaçao     |%-24i|  |    populaçao     |%-24i|\n", populacao[0], populacao[1]);

    printf("|dens. populacional|%-17i%s|  |dens. populacional|%-17i%s|\n", calcDensidade(populacao[0], area[0]), "hab/km²", calcDensidade(populacao[1], area[1]), "hab/km²");

    printf("| pontos turisticos|%-24i|  | pontos turisticos|%-24i|\n", pontosTuristicos[0], pontosTuristicos[1]);
    printf("|___________________________________________|  |___________________________________________|\n");
}
