#include <stdio.h>
int calcDensidade(int populacao,float area){
    int dens=populacao/(int)area;
    return dens;
}
int calcPib(float pib,int populacao){
    int PibPer=(int)pib/populacao;
    return PibPer;
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
    printf("seu pib: \n");
    scanf("%f", &Pib);
    printf("sua populaçao:\n");
    scanf("%i", &populacao);
    printf("area: \n");
    scanf("%f", &area);
    printf("pontos turisticos: \n");
    scanf("%i", &pontosTuristicos);
    
    printf("\nDados da carta\n\n");
    printf(" _______________________________________________\n");//melhora aparencia no console
    printf("|       estado         |%-24s|\n", estado);

    printf("|   codigo da carta    |%s%-23s|\n", estado , codigo);

    printf("|       cidade         |%-24s|\n", cidade);

    printf("|        area          |%-21.2f%s|\n", area , "km²");

    printf("|         pib          |%-23.2f%s|\n", Pib,"$"); 

    printf("|    pib per capita    |%-24i|\n", calcPib(Pib,populacao),"$");

    printf("|       populaçao      |%-24i|\n", populacao);

    printf("|densidade populacional|%-17i%s|\n", calcDensidade(populacao,area),"hab/km²");

    printf("|  pontos turisticos   |%-24i| \n", pontosTuristicos);
    printf("|_______________________________________________|\n");

}

