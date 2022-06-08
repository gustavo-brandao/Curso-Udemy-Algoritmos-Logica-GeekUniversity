#include <stdio.h>

int main(){
    //Declarando variáveis
    int num1, num2, soma;

    //Entradas
    prinf("Informe o primeiro numero: ");
    scanf("%d", &num1);
    printf("Informe o segundo numero: ");
    scanf("%d", &num2);

    //Processamento
    soma = (num1 + num2);

    prinf("A soma eh: %d", soma);
}