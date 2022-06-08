#include <stdio.h>

int main(){
    //Declarando variáveis
    int num1, num2, soma;

    //Entradas
    printf("Informe o primeiro numero: ");
    scanf("%d", &num1);
    printf("Informe o segundo numero: ");
    scanf("%d", &num2);

    //Processamento
    soma = (num1 + num2);

    printf("A soma eh: %d", soma);
}