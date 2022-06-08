#include <stdio.h>

int main(){
    //Declarando variáveis
    int metros, centimetros;

    //Entrada
    printf("Informe o valor em metros: ");
    scanf("%d", &metros);

    //Processamento
    centimetros = (metros * 100);

    //Saída
    printf("%d metros em centimetros eh %d", metros, centimetros);
}