#include <stdio.h>
#include <stdlib.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    
    printf("ola,mundo\n");
    int populaçao,pontosTuristicos;
    float area,Pib;
    char estado,cidade[100],codigo[100];

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
    scanf("%i", &populaçao);
    printf("pontos turisticos: \n");
    scanf("%i", &pontosTuristicos);
    //limpar tela
    //system("clear");
    //impressao dos dados

    printf("\nDados da carta\n\n");

    printf("estado: %s \n", estado);

    printf("codigo da carta:%s%s \n", estado,codigo);

    printf("cidade: %s \n", cidade);

    printf("pib: %f \n", Pib);

    printf("populaçao: %f \n", populaçao);

    printf("pontos turisticos: %i \n", pontosTuristicos);

    return 0;
}
