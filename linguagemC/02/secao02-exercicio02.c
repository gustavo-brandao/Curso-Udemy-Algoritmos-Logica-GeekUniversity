#include <stdio.h>

int main(){
    //Declarando variáveis
    int quantidade_minima, quantidade_maxima;
    float estoque_medio;

    //Entradas
    printf("Informe a quantidade minima: ");
    scanf("%d", &quantidade_minima);

    printf("Informe a quantidade maxima: ");
    scanf("%d", &quantidade_maxima);

    //Processamentos
    estoque_medio = (quantidade_minima + quantidade_maxima) / 2;

    //Saída
    printf("O estoque medio eh: %.2f", estoque_medio);
}