#include <stdio.h>

int main(){
    //Variáveis
    float indice;

    //Entrada
    printf("Informe o nivel de poluicao: ");
    scanf("%f", &indice);

    //Processamento
    if(indice >= 0.3 && indice < 0.4){
        printf("Atencao: Industrias do 1o grupo devem suspender as atividades.");
    }else if(indice >= 0.4 && indice < 0.5){
        printf("Atencao: Industrias do 1o e 2o grupos devem suspender as atividades.");
    }else if(indice >= 0.5){
        printf("Atencao: Todos os grupos devem suspender as atividades.");
    }else{
        printf("Niveis aceitaveis!");
    }
}