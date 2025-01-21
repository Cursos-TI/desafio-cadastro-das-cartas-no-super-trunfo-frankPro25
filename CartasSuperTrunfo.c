#include <stdio.h>
#include <stdlib.h>
int calcDensidade(int populacao,float area){
    int dens=(int)populacao/area;
    return dens;
}

int main(){
    printf("ola,mundo\n");
    int populacao,pontosTuristicos;
    float area,Pib;
    char estado[2],cidade[100],codigo[100];

    //gravar dados
    printf("digite o estado: \n");
    scanf("%s", &estado);
    printf("codigo da carta: \n");
    scanf("%s", &codigo);
    printf("digite a cidade: \n");
    scanf("%s", &cidade);
    printf("sua pib: \n");
    scanf("%f", &Pib);
    printf("sua populaçao:\n");
    scanf("%i", &populacao);
    printf("area: \n");
    scanf("%f", &area);
    printf("pontos turisticos: \n");
    scanf("%i", &pontosTuristicos);
    //limpar tela
    //system("clear");
    //impressao dos dados
    
    printf("\nDados da carta\n\n");

    printf("estado: %s \n", estado);

    printf("codigo da carta:%s%s \n", estado,codigo);

    printf("cidade: %s \n", cidade);

    printf("pib: %f $\n", Pib);

    printf("populaçao: %i \n", populacao);

    printf("densidade populacional: %i hab/km²\n", calcDensidade(populacao,area));

    printf("area: %f km²\n", area);

    printf("pontos turisticos: %i \n", pontosTuristicos);

}

