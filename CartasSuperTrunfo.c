#include <stdio.h>
int calcDensidade(int populacao,float area){
    int dens=(int)populacao/area;
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
    printf("seu pib: \n");//ajuste
    scanf("%f", &Pib);
    printf("sua populaçao:\n");
    scanf("%i", &populacao);
    printf("area: \n");
    scanf("%f", &area);
    printf("pontos turisticos: \n");
    scanf("%i", &pontosTuristicos);
    
    printf("\nDados da carta\n\n");

    printf("estado: %s \n", estado);

    printf("codigo da carta:%s%s \n", estado,codigo);

    printf("cidade: %s \n", cidade);

    printf("area: %.2f km²\n", area); //ajuste 

    printf("pib: %.2f $\n", Pib); 

    printf("pib per capita: %i $\n", calcPib(Pib,populacao));//nova funcao

    printf("populaçao: %i \n", populacao);

    printf("densidade populacional: %i hab/km²\n", calcDensidade(populacao,area));

    printf("pontos turisticos: %i \n", pontosTuristicos);

}

